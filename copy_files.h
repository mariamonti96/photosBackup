//
// Created by Maria Chiara Monti on 02/01/2019.
//

#ifndef PHOTOSBACKUP_COPY_FILES_H
#define PHOTOSBACKUP_COPY_FILES_H

#include <boost/filesystem.hpp>
#include <iostream>

namespace fs = ::boost::filesystem;
using namespace std;

void copy_files(const vector<fs::path> &paths, const fs::path &copy_dir);

#endif //PHOTOSBACKUP_COPY_FILES_H
