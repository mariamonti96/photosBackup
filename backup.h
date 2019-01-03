//
// Created by Maria Chiara Monti on 02/01/2019.
//

#ifndef PHOTOSBACKUP_BACKUP_H
#define PHOTOSBACKUP_BACKUP_H

#include <boost/filesystem.hpp>
#include <string>
#include <vector>
#include "find_files.h"
#include "copy_files.h"

namespace fs = ::boost::filesystem;
using namespace std;

void backup(const fs::path& root, const string& ext, const fs::path& copy_dir);


#endif //PHOTOSBACKUP_BACKUP_H
