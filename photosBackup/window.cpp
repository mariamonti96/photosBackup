#include "window.h"
#include <QPushButton>
#include <QApplication>

Window::Window(QWidget *parent) : QWidget(parent)
{
    //Set the size of the window
    setFixedSize(200, 70);

    //Create and position the button
    m_button = new QPushButton("Backup", this);
    m_button->setGeometry(10, 10, 180, 50);

    //Do the connection
    connect(m_button, SIGNAL(clicked()), QApplication::instance(), SLOT(quit()));

}
