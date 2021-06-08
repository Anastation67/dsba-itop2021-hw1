#ifndef MOVIES_H
#define MOVIES_H

#include <QStandardItemModel>
#include <QMainWindow>
#include <QFileDialog>
#include <iostream>
#include <QLocale>
#include <sstream>

struct Movies
{
    std::string title;
    std::string genres;
    std::string director;
    std::string actors;
    std::string description;
    std::string rating;
    int year;
    int runtime;
};

class MovieData : public QObject
{
    Q_OBJECT

public:
    MovieData(QStandardItemModel* model)
    {
        pointerToModel = model;
    }

    void initModel()
   {
        // fill the model with data
        for(int row = 0; row < _data.size(); row++)
        {
            int r = pointerToModel->rowCount();

            pointerToModel->insertRows(r, 1);

            for(int col = 0; col < 7; col++)
            {
                QModelIndex index = pointerToModel->index(row, col, QModelIndex());
                QString cellValue;
                switch(col)
                {
                    case 0: cellValue = QString::fromStdString(_data[row].title); //"Title"
                            break;
                    case 1: cellValue = QString::fromStdString(_data[row].genres); //"Genre"
                            break;
                    case 2: cellValue = QString::fromStdString(_data[row].director); //"Director"
                            break;
                    case 3: cellValue = QString::fromStdString(_data[row].actors); //"Actors"
                            break;
                    case 4: cellValue = QString::number(_data[row].year); //"Year"
                            break;
                    case 5: cellValue = QString::number(_data[row].runtime); //"Runtime"
                            break;
                    case 6: cellValue = QString::fromStdString(_data[row].rating); //"Rating"
                            break;
                 }
                pointerToModel->setData(index, cellValue);
            }
        }
    }

    void open(QMainWindow* window)
    {
        QString fileName = QFileDialog::getOpenFileName(window,"Open File","*.csv");
        QFile file(fileName);
        file.open(QIODevice::ReadOnly);
        file.readLine();

        int row = 0;

        while(!file.atEnd())
        {
            QByteArray line = file.readLine();

            QList<QByteArray> lineAsVector = line.split(';');

            Movies movies;
            movies.title = lineAsVector.at(0).toStdString();
            movies.genres = lineAsVector.at(1).toStdString();
            movies.description = lineAsVector.at(2).toStdString();
            movies.director = lineAsVector.at(3).toStdString();
            movies.actors = lineAsVector.at(4).toStdString();
            movies.year = lineAsVector.at(5).toInt();
            movies.runtime = lineAsVector.at(6).toInt();
            movies.rating = lineAsVector.at(7).toStdString();


            std::cout << movies.rating << std::endl;
            _data.push_back(movies);
            row++;
         }
        initModel();
    }

    Movies getMovie(int i)
    {
        return _data[i];
    }

    void setInfo(std::string description, int i)
    {
        std::cout << "Setting info: Description=" << description << std :: endl;
        _data[i].description = description;
    }

    void save(QMainWindow* window)
    {
        QString filename = QFileDialog::getSaveFileName(window, "Save file", " " ,".csv");
        QFile f(filename);
        f.open(QIODevice::WriteOnly);
        f.write("Title,Genre,Description,Director,Actors,Year,Runtime,Rating\n");
        for(int i = 0; i < (int) _data.size(); i++)
        {
            std::stringstream ss;
            ss << _data[i].title << "," << _data[i].genres << "," << _data[i].description << "," << _data[i].director
               << "," << _data[i].actors << "," << _data[i].year << "," << _data[i].runtime
               << "," << _data[i].rating <<  "\n";
            f.write(ss.str().c_str());
        }
        f.close();
    }

    void remove()
    {
        _data.clear();
        update();
    }

    void update()
    {

    std :: cout << "Cell updated! Updating data..." << std::endl;

    for(int row = 0; row < pointerToModel->rowCount(); row++)
    {
        if(row >= (int) _data.size())
        {
            _data.push_back(Movies());
        }

        for(int col = 0; col < pointerToModel->columnCount(); col++)
        {
            QModelIndex index = pointerToModel->index(row,col);
            QString cellValue = (index.data().toString());

            switch(col)
            {
                case 0: _data[row].title = cellValue.toStdString();
                        break;
                case 1: _data[row].genres = cellValue.toStdString();
                        break;
                case 2: _data[row].director = cellValue.toStdString();
                        break;
                case 3: _data[row].actors = cellValue.toStdString();
                        break;
                case 4: _data[row].year = cellValue.toInt();
                        break;
                case 5: _data[row].runtime = cellValue.toInt();
                        break;
                case 6: _data[row].rating = cellValue.toStdString();
                        break;
            }
        }
    }
    }

private:
    std::vector<Movies> _data;

    QStandardItemModel* pointerToModel;
};

#endif // MOVIES_H
