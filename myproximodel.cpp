#include "myproximodel.h"

MyProxiModel::MyProxiModel(QObject* parent):QSortFilterProxyModel(parent)
{
    minRating = 0;
    maxRating = INT_MAX;
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
    QString rowActors = sourceModel()->data(index4).toChar();

    if (director.trimmed().isEmpty() and  actors.trimmed().isEmpty())
    {
        return (minRating <= rating) && (rating <= maxRating) && (minRuntime <= runtime) &&(runtime <= maxRuntime) &&
                (minYear <= year) && (year <= maxYear); //filter by rating and runtime and year
    }
    else if (director.trimmed().isEmpty())
    {
        return (minRating <= rating) && (rating <= maxRating) && (minRuntime <= runtime) &&(runtime <= maxRuntime) &&
                (minYear <= year) && (year <= maxYear) && (rowActors == actors); //filter by rating and runtime and year and actors
    }
    else if (actors.trimmed().isEmpty())
    {
        return (minRating <= rating) && (rating <= maxRating) && (minRuntime <= runtime) &&(runtime <= maxRuntime) &&
                (minYear <= year) && (year <= maxYear) && (rowDirector == director); //filter by rating and runtime and year and director
    }
}

bool MyProxiModel::lessThan(const QModelIndex& left, const QModelIndex& right) const
{
    // returns "true" if element at the "left" goes first.

    int lenA = sourceModel()->data(left).toString().size();
    int lenB = sourceModel()->data(right).toString().size();

    return lenA < lenB;
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

void MyProxiModel::top10(QCheckBox box)
{
    if (box.isChecked())
    {

    }
}
