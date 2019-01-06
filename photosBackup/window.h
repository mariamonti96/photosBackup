#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <boost/filesystem.hpp>
#include <string>
#include <vector>
#include <iostream>

namespace fs = ::boost::filesystem;
using namespace std;

class QPushButton;
class Window : public QWidget
{
    Q_OBJECT

    public:
        explicit Window(QWidget *parent = nullptr);
//        QPushButton *m_button;

    signals:

    private slots:
        void slotBackup(bool checked);

    private:
        QPushButton *m_button;
        vector<fs::path> paths;
        fs::path src_dir;
        fs::path copy_dir;
        string ext;
        void copy_files(const vector<fs::path> &paths, const fs::path &copy_dir);
        void find_files(const fs::path& root, const string& ext, vector<fs::path>& ret);


};

#endif // WINDOW_H
