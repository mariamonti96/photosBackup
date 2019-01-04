#include "window.h"
#include <QPushButton>
#include <QApplication>
#include "backup.h"

Window::Window(QWidget *parent) : QWidget(parent)
{
    //Set the size of the window
    setFixedSize(200, 70);

    //Create and position the button
    m_button = new QPushButton("Backup", this);
    m_button->setGeometry(10, 10, 180, 50);
    //m_button->setCheckable(true);

//    fs::path directory{"/Users/mariamonti/Desktop"};
//    string ext = ".jpg";
//    fs::path copy_dir{"/Users/mariamonti/Desktop/Images_Copy"};

    //Do the connection


    //this.slotBackup(directory, ext, copy_dir);
}




