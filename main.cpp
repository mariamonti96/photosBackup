#include <iostream>
#include "backup.h"

namespace fs = ::boost::filesystem;
using namespace std;

int main() {

    fs::path directory{"/Users/mariamonti/Desktop"};

    //Call the function for the backup
    string ext = ".jpg";
    fs::path copy_dir{"/Users/mariamonti/Desktop/Images_Copy"};
    backup(directory, ext, copy_dir);


    return 0;
}