#include "backup.h"

namespace fs = ::boost::filesystem;
using namespace std;

// return the filenames of all files that have the specified extension
// in the specified directory and all subdirectories
Backup::Backup(const fs::path& src_dir,const fs::path& copy_dir,const string& ext, vector<fs::path>& paths)
{
    this->src_dir = src_dir;
    this->copy_dir = copy_dir;
    this->ext = ext;
    this->paths = paths;

}

void Backup::slotBackup(bool checked)
{
    find_files(src_dir, ext, paths);
    copy_files(paths, copy_dir);
}
