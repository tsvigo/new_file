#include "dialog.h"

#include <QApplication>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief main
/// \param argc
/// \param argv
/// \return 
///
/// 
///
//Program to find out the creation date and other file info
//Importing header files
#include <iostream>
#include <ctime>
#include <sys/types.h>
#include <sys/stat.h>
#include <cerrno>
#include <cstring>
#include <QFileInfo>
using namespace std;

#include <fcntl.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///  
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
//    struct stat
//      //  "/home/viktor/Изображения/edinitsi/Sgenerirovannye_fayly/x/";
//        fileInfo;
//        //="/home/viktor/Изображения/edinitsi/Sgenerirovannye_fayly/x/";
//    //      struct stat buf;
//  // stat("file",&buf);
    
////    QFileInfo fileInfo(//"/home/viktor/my_scripts_2/zvuk.sh"
////        "/home/viktor/Изображения/edinitsi/Sgenerirovannye_fayly/x/"
////        // "neurons_and_signal.txt"
////        );
    
    
// // stat( "/home/viktor/Изображения/edinitsi/Sgenerirovannye_fayly/x/", &stat);
    
//    if (argc < 2) {
//        std::cout << "Usage: fileinfo <file name>\n";
//        return(EXIT_FAILURE);
//    }
//    if (stat(argv[1], &fileInfo) != 0) {  // Use stat() to get the info
//        std::cerr << "Error: " << strerror(errno) << '\n';
//        return(EXIT_FAILURE);
//    }
//    std::cout << "Type:         : ";
//    if ((fileInfo.st_mode & S_IFMT) == S_IFDIR) { // From sys/types.h
//        std::cout << "Directory\n";
//    } else {
//        std::cout << "File\n";
//    }
//    // Printing all the details related to the file
//    std::cout << "Size          : " <<
//        fileInfo.st_size << '\n';               // Size in bytes
//    std::cout << "Device        : " <<
//        (char)(fileInfo.st_dev + 'A') << '\n';  // Device number
//    std::cout << "Created       : " <<
//        std::ctime(&fileInfo.st_ctime);         // Creation time
//    std::cout << "Modified      : " <<
//        std::ctime(&fileInfo.st_mtime);         // Last mod time
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///

/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
//    struct stat buf;
//    stat("/home/viktor/Изображения/edinitsi/Sgenerirovannye_fayly/x/",&buf);
 
//        cout << st_dev << endl;
//    cout << st_ino << endl;
//    cout << st_mode << endl;
//    cout << st_nlink << endl;
//    cout << st_uid << endl;
//    cout << st_gid << endl;
//    cout << st_rdev << endl;
//    cout << st_size << endl;
//    cout << st_blksize << endl;
//    cout << st_blocks << endl;
//    cout << st_atime << endl;
//    cout << st_mtime << endl;
//    cout << st_ctime << endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// 
/// 
///    
    return a.exec();
}
