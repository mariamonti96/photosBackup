#include <QApplication>
#include <QPushButton>
#include "window.h"
#include <boost/filesystem.hpp>
#include "backup.h"

namespace fs = ::boost::filesystem;
using namespace std;

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 fs::path src_dir = "/Users/mariamonti";
 fs::path copy_dir = "/Users/mariamonti/Desktop/Images_Copy";
 string ext = ".jpg";
 vector<fs::path> paths;

 Backup* backup = new Backup(src_dir, copy_dir, ext, paths);
 Window window;

 QObject::connect(window.m_button, &QPushButton::clicked, backup, &Backup::slotBackup);


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
