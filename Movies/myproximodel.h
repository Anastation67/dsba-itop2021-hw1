#ifndef MYPROXIMODEL_H
#define MYPROXIMODEL_H
#include <QSortFilterProxyModel>
#include <QCheckBox>

class MyProxiModel : public QSortFilterProxyModel
{
    Q_OBJECT

public:
    MyProxiModel(QObject *parent = nullptr);

    //getters
    double MinRating() const {return minRating;};
    double MaxRating() const {return maxRating;};
    int MinYear() const {return minYear;};
    int MaxYear() const {return maxYear;};
    int MinRuntime() const {return minRuntime;};
    int MaxRuntime() const {return maxRuntime;};

    QString filterDirector() const {return director;};
    QString filterActors() const {return actors;};

    //setters
    void setMinRating(double minRating);
    void setMaxRating(double maxRating);
    void setMinYear(int minYear);
    void setMaxYear(int maxYear);
    void setMinRuntime(int minRuntime);
    void setMaxRuntime(int maxRuntime);

    void setFilterDirector(QString director);
    void setFilterActors(QString actors);

protected:

    bool filterAcceptsRow(int sourceRow, const QModelIndex& sourceParent) const override;
    bool lessThan(const QModelIndex& left, const QModelIndex& right) const override;

private:
    double minRating;
    double maxRating;
    int maxYear;
    int minYear;
    int maxRuntime;
    int minRuntime;

    QString director;
    QString actors;

};

#endif // MYPROXIMODEL_H
