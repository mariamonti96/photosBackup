#ifndef HELPERS_H
#define HELPERS_H


#include <string.h>
#include <boost/filesystem.hpp>
#include <pwd.h>

using namespace std;
namespace fs = ::boost::filesystem;

void get_home_path(fs::path& home_dir);

#endif // HELPERS_H
