#include "helpers.h"

void get_home_path(fs::path& home_dir){
    passwd* pw = getpwuid(getuid());
    home_dir = string(pw->pw_dir);

}

