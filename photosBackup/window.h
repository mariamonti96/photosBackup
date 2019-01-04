#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <boost/filesystem.hpp>
#include <string>
#include <vector>
#include "find_files.h"
#include "copy_files.h"

namespace fs = ::boost::filesystem;
using namespace std;

class QPushButton;
class Window : public QWidget
{
    Q_OBJECT
    public:
    explicit Window(QWidget *parent = nullptr);
    QPushButton *m_button;
    signals:

    public slots:
    void slotBackup(bool checked);

    private:
//    QPushButton *m_button;

};

#endif // WINDOW_H
