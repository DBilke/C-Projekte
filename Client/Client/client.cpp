#include "client.h"
#include "ui_client.h"

Client::Client(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Client)
{
    ui->setupUi(this);
}

Client::~Client()
{
    delete ui;
}

void Client::on_pushButton_clicked()
{
    QString text = ui->lineEdit->text();
    QString button = ui->pushButton->text();
    if(button == "Start")
    {
        ui->pushButton->setText("Stop");
        connect(text);
    }
    else
    {
        ui->pushButton->setText("Start");
        disconnect(text);
    }
}

void connect(QString conName)
{

    cout << endl;
    cout << "Running 'SELECT 'Hello World!' » AS _message'..." << endl;

    try {
      sql::Driver *driver;
      sql::Connection *con;
      sql::Statement *stmt;
      sql::ResultSet *res;

      /* Create a connection */
      driver = get_driver_instance();
      con = driver->connect("tcp://127.0.0.1:3306", "root", "1234");
      /* Connect to the MySQL test database */
      con->setSchema("client");

      stmt = con->createStatement();
      res = stmt->executeQuery("SELECT 'Hello World!' AS _message");
      while (res->next()) {
        cout << "\t... MySQL replies: ";
        /* Access column data by alias or column name */
        cout << res->getString("_message") << endl;
        cout << "\t... MySQL says it again: ";
        /* Access column fata by numeric offset, 1 is the first column */
        cout << res->getString(1) << endl;
      }
      delete res;
      delete stmt;
      delete con;

    } catch (sql::SQLException &e) {
      cout << "# ERR: SQLException in " << __FILE__;
      cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
      cout << "# ERR: " << e.what();
      cout << " (MySQL error code: " << e.getErrorCode();
      cout << ", SQLState: " << e.getSQLState() << " )" << endl;
    }

    cout << endl;
}


void disconnect(QString conName)
{

}
