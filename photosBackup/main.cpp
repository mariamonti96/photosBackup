#include <QApplication>
#include <QPushButton>
#include "window.h"
#include <boost/filesystem.hpp>

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 Window window;
 //window.setFixedSize(200, 70);


 //Define a button
// QPushButton *button = new QPushButton("Hello World", &window);
// button->setGeometry(10, 10, 180, 50);

 //Set text for the button
 //button->setText("My text");
 //Set Tooltip
// button->setToolTip("A tooltip");

 //Change font
// QFont font ("Courier");
// button->setFont(font);

 //Set icon
// QIcon icon ("/Users/mariamonti/Desktop/Images/TechSmartGiftsIcon.png");
// button->setIcon(icon);

 //Show the button
 //button->show();

 window.show();

 return app.exec();
}
