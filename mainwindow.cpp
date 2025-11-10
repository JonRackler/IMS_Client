#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSqlDatabase>
#include <QSqlQuery>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->connectButton, &QPushButton::clicked, this, &MainWindow::connect_to_database);
    connect(ui->queryButton, &QPushButton::clicked, this, &MainWindow::run_query());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::run_query()
{
    QSqlQuery query;

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(query_text);

    if (db.open()) {
        // Run query
        if (query.exec(query_text) ) {
            // Query success
        }
        else {
            ui->output_TE->setPlainText("Query error");
        }
    }
    else {
        ui->output_TE->setPlainText("Connect to database first!");
    }
    QString query_text = ui->query_TE->toPlainText();
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(query_text);
    //model->setHeaderData(0, Qt::Horizontal, tr("Name"));
    //model->setHeaderData(1, Qt::Horizontal, tr("Salary"));
    ui->query_TV->setModel(model);
    ui->query_TV->show();
}

void MainWindow::connect_to_database()
{
    QString host = ui->host_LE->text();
    QString database = ui->database_LE->text();
    QString username = ui->username_LE->text();
    QString password = ui->password_LE->text();
    //driver for postgres QPSQL
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    if ( host.isNull() || database.isNull() || username.isNull() || password.isNull() ) {

    }
    else {
        db.setHostName(host);
        db.setDatabaseName(database);
        db.setUserName(username);
        db.setPassword(password);
    }

    if (db.open()) {
        ui->output_TE->setPlainText("Connection is open");
    }
}
