#ifndef MOVIES_H
#define MOVIES_H

#include <QStandardItemModel>
#include <QMainWindow>
#include <QFileDialog>
#include <iostream>
#include <sstream>

struct Movies
{
    std::string title;
    std::string genres;
    std::string director;
    std::string actors;

    double rating;
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
//        initModel(pointerToModel);
    }

    void initModel(QStandardItemModel* model)
    {
        // fill the model with data
        for(int row = 0; row < model->rowCount(); row++)
        {
            for(int col = 0; col < model->columnCount(); col++)
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

                    case 6: cellValue = QString::number(_data[row].rating); //"Rating"
                            break;
                }

                pointerToModel->setData(index, cellValue); // initialize a cell in the model with zero value (you can also put a string instead of 0)
            }
        }
    }

    Movies getMovie(int i)
    {
        return _data[i];
    }

//    void setInfo(std::string title, std::string genre, std::string director,std::string actors,int year,int runtime,double rating,int i)
//    {
//        std::cout << "Setting info: Title=" << title << " Genre=" << genre << " Director=" << director << " for movie "<< _data[i].title << std :: endl;
//        _data[i].title = title;
//        _data[i].genres = genre;
//        _data[i].director = director;
//        _data[i].actors = actors;
//        _data[i].year = year;
//        _data[i].runtime = runtime;
//        _data[i].rating = rating;
//    }

    void save(QMainWindow* window)
    {
        QString filename = QFileDialog::getSaveFileName(window, "Save file", "", ".csv");
        QFile f(filename);
        f.open(QIODevice::WriteOnly);
        f.write("Title,Genre,Director,Actors,Year,Runtime,Rating\n");
        for(int i = 0; i < (int) _data.size(); i++)
        {
            std::stringstream ss;
            ss << _data[i].title << "," << _data[i].genres << "," << _data[i].director
               << "," << _data[i].actors << "," << _data[i].year << "," << _data[i].runtime
               << "," << _data[i].rating <<  "\n";
            f.write(ss.str().c_str());
        }
        f.close();
    }

    void update()
    {
//    std :: cout << "Cell updated! Updating data..." << std::endl;

//    for(int row = 0; row < pointerToModel->rowCount(); row++)
//    {
///*            if(row >= (int) _data.size())           // if the "model" has more elements than the "data"
//            _data.push_back(Student()); */        // add a new element to the "data".

//        for(int col = 0; col < pointerToModel->columnCount(); col++)
//        {
//            QModelIndex index = pointerToModel->index(row,col);
//            QString cellValue = (index.data().toString());

//            switch(col)
//            {
//                case 0: _data[row].title = cellValue.toStdString();
//                        break;

//                case 1: _data[row].genres = cellValue.toStdString();
//                        break;

//                case 2: _data[row].director = cellValue.toStdString();
//                        break;

//                case 3: _data[row].actors = cellValue.toStdString();
//                        break;

//                case 4: _data[row].year = cellValue.toInt();
//                        break;

//                case 5: _data[row].runtime = cellValue.toInt();
//                        break;

//                case 6: _data[row].rating = cellValue.toDouble();
//                        break;
//            }
//        }
//    }
    }

private:
    std::vector<Movies> _data;

    QStandardItemModel* pointerToModel;
};

#endif // MOVIES_H
