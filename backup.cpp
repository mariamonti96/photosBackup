#include "backup.h"

namespace fs = ::boost::filesystem;
using namespace std;

// return the filenames of all files that have the specified extension
// in the specified directory and all subdirectories
void backup(const fs::path& root, const string& ext, const fs::path &copy_dir)
{
    vector<fs::path> paths;
    find_files(root, ext, paths);
    copy_files(paths, copy_dir);
    

}