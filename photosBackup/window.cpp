#include "window.h"
#include <QPushButton>
#include <QApplication>
#include <helpers.h>

namespace fs = ::boost::filesystem;
Window::Window(QWidget *parent) : QWidget(parent)
{
    //Set the size of the window
    setFixedSize(200, 70);

    //Create and position the button
    m_button = new QPushButton("Backup", this);
    m_button->setGeometry(10, 10, 180, 50);
    //m_button->setCheckable(true);


    fs::path home_dir;

    get_home_path(home_dir);

    src_dir = home_dir/"/";

    cout << src_dir << endl;
    //Could potentially only search in desktop:
    //src_dir = home_dir/"Desktop/";
    ext = ".jpg";
    copy_dir = "/Users/mariamonti/Desktop/Images_Copy";

    //Do the connection


    connect(m_button, &QPushButton::clicked, this, &Window::slotBackup);

}


void Window::copy_files(const vector<fs::path> &paths, const fs::path &copy_dir){

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


// return the filenames of all files that have the specified extension
// in the specified directory and all subdirectories
void Window::find_files(const fs::path& root, const string& ext, vector<fs::path>& paths)
{
    if(!fs::exists(root) || !fs::is_directory(root)) return;

    fs::recursive_directory_iterator it(root);
    fs::recursive_directory_iterator endit;

    try{
        while(it != endit)
        {
            if(fs::is_regular_file(*it) && it->path().extension() == ext) paths.push_back(it->path());
            ++it;

        }
    }
    catch(const boost::filesystem::filesystem_error){
    }

    //Print out the content of the paths vector
    for (vector<fs::path>::const_iterator i = paths.begin(); i != paths.end(); ++i)
        std::cout << *i << ' ';

}

void Window::slotBackup(bool checked)
{
    find_files(src_dir, ext, paths);
    copy_files(paths, copy_dir);
}




