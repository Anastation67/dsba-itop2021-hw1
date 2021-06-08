#ifndef DETAILS_H
#define DETAILS_H
#include "movies.h"

#include <QDialog>

namespace Ui {
class Details;
}

class Details : public QDialog
{
    Q_OBJECT

public:
    explicit Details(QWidget *parent = nullptr);
    ~Details();
    void setMoviesDetail(Movies movie);

private:
    Ui::Details *ui;
    MovieData* movie;
};

#endif // DETAILS_H
