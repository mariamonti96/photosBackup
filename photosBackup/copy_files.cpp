//
// Created by Maria Chiara Monti on 02/01/2019.
//

#include "copy_files.h"


void copy_files(const vector<fs::path> &paths, const fs::path &copy_dir){

    fs::create_directory(copy_dir);
    fs::path copy_path;
    for (vector<fs::path>::const_iterator i = paths.begin(); i != paths.end(); ++i){

        copy_path = copy_dir/((*i).filename());
        cout << *i << endl;
        try {
            fs::copy_file(*i, copy_path, fs::copy_option::overwrite_if_exists);
        }
        catch (const boost::system::system_error &err) {
//            if (!err.code().equivalent(boost::system::errc::file_exists))
//                throw;
        }

          //Print all the files in the copy directory to check if the copy operation worked
//
//
//        fs::directory_iterator end_itr;
//
//        // cycle through the directory
//        for (fs::directory_iterator itr(copy_dir); itr != end_itr; ++itr)
//        {
//            // If it's not a directory, list it. If you want to list directories too, just remove this check.
//            if (fs::is_regular_file(itr->path())) {
//                // assign current file name to current_file and echo it out to the console.
//                string current_file = itr->path().string();
//                cout << current_file << endl;
//            }
//        }

    }

}
