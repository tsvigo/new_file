#include "dialog.h"
#include "ui_dialog.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Dialog::Dialog
/// \param parent
#include <QFileInfo>
#include <QDateTime>
using namespace std;
#include <fstream>
#include <iostream>
#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
#include <QDirIterator>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// 
///
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void show_dir_content(char *path) {
    struct dirent *dir;
    struct stat statbuf;
    char datestring[256];
    struct tm *tm;
//dir *d = opendir(path);
    //    if (d == NULL) {
    //        return;  
    //    }
    //
//   while ((dir = readdir(d)) != NULL)
//    {//
//        //  if (dir->d_type == DT_REG)
//        {
//            char f_path[500];
//            char filename[256];
//            sprintf(
//                filename
//                //   "/home/viktor/Изображения/edinitsi/Sgenerirovannye_fayly/x/"
//                , "%s",
//                "/home/viktor/Изображения/edinitsi/Sgenerirovannye_fayly/x/"
//                // dir->d_name
//                );
//            sprintf(
//                f_path
//                // "/home/viktor/Изображения/edinitsi/Sgenerirovannye_fayly/x/"
//                , "%s/%s", path,
//                "/home/viktor/Изображения/edinitsi/Sgenerirovannye_fayly/x/"
//                //dir->d_name
//                );
//            printf("filename: %s", filename);
//            printf("  filepath: %s\n", f_path);
            
//            if (stat(f_path, &statbuf) == -1) {
//                fprintf(stderr,"Error: %s\n", strerror(errno));
//                //  continue;
//            }
//            tm = gmtime(&statbuf.st_mtime);
//            time_t t1 = statbuf.st_mtime;
//            strftime(datestring, sizeof(datestring), " %x-%X", tm);
//            printf("datestring: %s\n", datestring);
//        }
        
        //       if (dir->d_type == DT_DIR && strcmp(dir->d_name, ".") != 0 && strcmp(dir->d_name, "..") != 0)
        {
            //            printf("directory: %s ", dir->d_name);
            //            char d_path[500]; 
            //            sprintf(d_path, "%s/%s", path, dir->d_name);
            //            printf("  dirpath: %s\n", d_path);
            //            show_dir_content(d_path);
        }
  //  }
    // closedir(d);
} 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///  
// struct stat t_stat;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Dialog::Dialog
/// \param parent
 // compare 2 timespecs:
 // return -1 if t1 < t2, 0 if they are equal, 1 if t1 > t2
 
// int compare_timespec(const struct timespec *t1, const struct timespec *t2) {
//     if (t1->tv_sec == t2->tv_sec)
//         return (t1->tv_nsec > t2->tv_nsec) - (t1->tv_nsec < t2->tv_nsec);
//     else
//         return (t1->tv_sec > t2->tv_sec) ? 1 : -1;
// } 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///

                                                    
 
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
    struct stat fileInfo2;
    
    if (stat("/home/viktor/Изображения/edinitsi/Sgenerirovannye_fayly/x/", &fileInfo2) != 0) {  // Use stat( ) to get the info
        std::cerr << "Error: " << strerror(errno) << '\n';
     //   return(EXIT_FAILURE);
    }
    
    std::cout << "Type:         : ";
    if ((fileInfo2.st_mode & S_IFMT) == S_IFDIR) { // From sys/types.h
        std::cout << "Directory\n";
    } else {
        std::cout << "File\n";
    }
    
    std::cout << "Size          : " <<
        fileInfo2.st_size << '\n';               // Size in bytes
    std::cout << "Device        : " <<
        (char)(fileInfo2.st_dev + 'A') << '\n';  // Device number
    std::cout << "Created       : " <<
        std::ctime(&fileInfo2.st_ctime);         // Creation time
    std::cout << "Modified      : " <<
        std::ctime(&fileInfo2.st_mtime);         // Last mod time
    std::cout <<  &fileInfo2.st_ctime << endl;
    std::cout <<  "Прошло секунд эпохи Unix до создания каталога "<< "/home/viktor/Изображения/edinitsi/Sgenerirovannye_fayly/x/ : " << fileInfo2.st_ctime << endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        long long sekundi=0;
        QString noveyshiy_katalog;
 /// 
      struct stat fileInfo; 
 /// 
        QDirIterator it("/home/viktor/Изображения/edinitsi/Sgenerirovannye_fayly",
                         QDirIterator::NoIteratorFlags
                      //  QDirIterator::Subdirectories
                        );
        while (it.hasNext()) {
            QString dir = it.next();
           // qDebug()
            if (dir.toStdString()!="/home/viktor/Изображения/edinitsi/Sgenerirovannye_fayly/." &&
                dir.toStdString()!="/home/viktor/Изображения/edinitsi/Sgenerirovannye_fayly/..")
            {
                 // std::cout     << dir.toStdString()<< endl;
                if (stat(dir.toStdString().c_str(), &fileInfo) != 0) {  // Use stat( ) to get the info
                    std::cerr << "Error: " << strerror(errno) << '\n';
                    //   return(EXIT_FAILURE);
                }
                //  std::cout <<  "Прошло секунд эпохи Unix до создания каталога     : " << fileInfo.st_ctime << endl;
                
                if (fileInfo.st_ctime >sekundi)
                  {
                      noveyshiy_katalog=dir.toStdString().c_str();
                    sekundi=fileInfo.st_ctime ;
                }
            }
         

        }
        std::cout << "Новейший каталог: "<< noveyshiy_katalog.toStdString ()<<"; время создания: "<< sekundi<<endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
//     QFileInfo fi(//"/home/viktor/my_scripts_2/zvuk.sh"
//        "/home/viktor/Изображения/edinitsi/Sgenerirovannye_fayly/x/"
//                // "neurons_and_signal.txt"
//                 );
    
    
//    stat( "/home/viktor/Изображения/edinitsi/Sgenerirovannye_fayly/x/", &t_stat);
//    struct tm * timeinfo = localtime(&t_stat.st_ctime); // or gmtime() depending on what you want
//   // asctime
//    printf("File time and date: %s",  asctime (timeinfo)); // strftime
     
//     QDateTime datetime = fi.birthTime();
//   std::cout << //fi.birthTime().time ()
//   //   datetime.toSecsSinceEpoch() //toMSecsSinceEpoch()//toString (Qt::TextDate)//.c_str()//toStdString()
//       //  &t_stat.st_ctime //<< endl
//              // &t_stat
//      //   gmtime(  &t_stat.st_ctime)
//               timeinfo
//               //      "тест"
//               << std::endl;   
// ///
//     ui->label->setText (QString::number(datetime.toSecsSinceEpoch()));
   
//   show_dir_content("/home/viktor/Изображения/edinitsi/Sgenerirovannye_fayly/x/");
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
//   struct timespec ts;
//   timespec_get(
//       // asctime (timeinfo),
//     //  tm,
//     // &timeinfo,
//       &ts,
//                TIME_UTC);
//   char buff[100];
//   strftime(buff, sizeof buff, "%D %T", gmtime(&ts.tv_sec));
//   printf("Current time: %s.%09ld UTC\n", buff, ts.tv_nsec);
//   printf("Raw timespec.time_t: %jd\n", (intmax_t)ts.tv_sec);
//   printf("Raw timespec.tv_nsec: %09ld\n", ts.tv_nsec);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
///

    
   
}

Dialog::~Dialog()
{
    delete ui;
}


