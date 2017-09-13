#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>

/* Standard C++ includes */
#include <stdlib.h>
#include <iostream>
#include <strstream>

/*
  Include directly the different
  headers from cppconn/ and mysql_driver.h + mysql_util.h
  (and mysql_connection.h). This will reduce your build time!
*/
#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

namespace Ui {
class Client;
}

class Client : public QMainWindow
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = 0);
    ~Client();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Client *ui;
    stringstream cout;
    void connect(QString conName);
    void disconnect(QString conName);
};

#endif // CLIENT_H
