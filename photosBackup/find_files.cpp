//
// Created by Maria Chiara Monti on 02/01/2019.
//

#include "find_files.h"

namespace fs = ::boost::filesystem;
using namespace std;

// return the filenames of all files that have the specified extension
// in the specified directory and all subdirectories
void find_files(const fs::path& root, const string& ext, vector<fs::path>& paths)
{
    if(!fs::exists(root) || !fs::is_directory(root)) return;

    fs::recursive_directory_iterator it(root);
    fs::recursive_directory_iterator endit;

    while(it != endit)
    {
        if(fs::is_regular_file(*it) && it->path().extension() == ext) paths.push_back(it->path());
        ++it;

    }

    //Print out the content of the paths vector
    for (vector<fs::path>::const_iterator i = paths.begin(); i != paths.end(); ++i)
        std::cout << *i << ' ';

}
