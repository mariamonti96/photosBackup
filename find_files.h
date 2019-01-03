//
// Created by Maria Chiara Monti on 02/01/2019.
//

#ifndef PHOTOSBACKUP_FIND_FILES_H
#define PHOTOSBACKUP_FIND_FILES_H

#include <boost/filesystem.hpp>
#include <string>
#include <vector>
#include <iostream>


namespace fs = ::boost::filesystem;
using namespace std;

void find_files(const fs::path& root, const string& ext, vector<fs::path>& ret);


#endif //PHOTOSBACKUP_FIND_FILES_H
