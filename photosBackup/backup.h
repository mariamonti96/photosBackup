//
// Created by Maria Chiara Monti on 02/01/2019.
//

#ifndef PHOTOSBACKUP_BACKUP_H
#define PHOTOSBACKUP_BACKUP_H

#include <QObject>
#include <boost/filesystem.hpp>
#include <string>
#include <vector>
#include "find_files.h"
#include "copy_files.h"

namespace fs = ::boost::filesystem;
using namespace std;

class Backup : public QObject{
    Q_OBJECT
    public:
    explicit Backup(const fs::path& src_dir,const fs::path& copy_dir,const string& ext, vector<fs::path>& paths);
    void slotBackup(bool checked);

    signals:

    public slots:

    private:
    vector<fs::path> paths;
    fs::path src_dir;
    fs::path copy_dir;
    string ext;


};
#endif //PHOTOSBACKUP_BACKUP_H
