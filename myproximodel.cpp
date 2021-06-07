#include "myproximodel.h"
#include <iostream>
#include <algorithm>

MyProxiModel::MyProxiModel(QObject* parent):QSortFilterProxyModel(parent)
{
    minRating = 0;
    maxRating = __SIZEOF_DOUBLE__;
    minRuntime = 0;
    maxRuntime = INT_MAX;
    minYear = 0;
    maxYear = INT_MAX;

    director = QString();
    actors = QString();
}

bool MyProxiModel::filterAcceptsRow(int Row, const QModelIndex &sourceParent)const
{
    QModelIndex index = sourceModel()->index(Row, 6, sourceParent);
    double rating = sourceModel()->data(index).toDouble();

    QModelIndex index1 = sourceModel()->index(Row, 4, sourceParent);
    int  year = sourceModel()->data(index1).toInt();

    QModelIndex index2 = sourceModel()->index(Row, 5, sourceParent);
    int  runtime = sourceModel()->data(index2).toInt();

    QModelIndex index3 = sourceModel()->index(Row, 2, sourceParent);
    QString rowDirector = sourceModel()->data(index3).toString();

    QModelIndex index4 = sourceModel()->index(Row, 3, sourceParent);
    QString rowActors = sourceModel()->data(index4).toString();

    if (director.trimmed().isEmpty() and  actors.trimmed().isEmpty())
    {
        return (minRating <= rating) && (rating <= maxRating) && (minRuntime <= runtime) &&(runtime <= maxRuntime) &&
                (minYear <= year) && (year <= maxYear); //filter by rating and runtime and year
    }
    else if (director.trimmed().isEmpty())
    {
        return (minRating <= rating) && (rating <= maxRating) && (minRuntime <= runtime) &&(runtime <= maxRuntime) &&
                (minYear <= year) && (year <= maxYear) && (rowActors.contains(actors)); //filter by rating and runtime and year and actors
    }
    else if (actors.trimmed().isEmpty())
    {
        return (minRating <= rating) && (rating <= maxRating) && (minRuntime <= runtime) &&(runtime <= maxRuntime) &&
                (minYear <= year) && (year <= maxYear) && (rowDirector.contains(director)); //filter by rating and runtime and year and director
    }
}

bool MyProxiModel::lessThan(const QModelIndex& left, const QModelIndex& right) const
{
    // returns "true" if element at the "left" goes first.

    if (sortColumn()<6)
    {
        std::string str1 = sourceModel()->data(left).toString().toStdString();
        std::string str2 = sourceModel()->data(right).toString().toStdString();
        return str1 < str2;
    }

    std::string r1 = sourceModel()->data(left).toString().toStdString();
    std::replace (r1.begin(), r1.end(), ',', '.');
    std::string r2 = sourceModel()->data(right).toString().toStdString();
    std::replace (r2.begin(), r2.end(), ',', '.');

    return std::stod (r1) < std::stod (r2) ;
}

void MyProxiModel::setFilterDirector(QString director)
{
    this->director = director.trimmed().isEmpty() ? QString() : director;
    invalidateFilter();
}

void MyProxiModel::setFilterActors(QString actors)
{
    this->actors = actors.trimmed().isEmpty() ? QString() : actors;
    invalidateFilter();
}

void MyProxiModel::setMinRating(double min)
{
    minRating = min;
    invalidateFilter();
}

void MyProxiModel::setMaxRating(double max)
{
    maxRating = max;
    invalidateFilter();
}

void MyProxiModel::setMinYear(int min)
{
    minYear = min;
    invalidateFilter();
}

void MyProxiModel::setMaxYear(int max)
{
    maxYear = max;
    invalidateFilter();
}

void MyProxiModel::setMinRuntime(int min)
{
    minRuntime = min;
    invalidateFilter();
}

void MyProxiModel::setMaxRuntime(int max)
{
    maxRuntime = max;
    invalidateFilter();
}
