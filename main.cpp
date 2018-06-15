//
// Created by dario1227 on 12/06/18.
//

#include <zconf.h>
#include <pwd.h>
#include <sys/stat.h>
#include <iostream>
#include <dirent.h>
#include "Raid5_controller/Existence_controller.h"
#include "Raid5_controller/file_controller.h"
#include "Raid5_controller/GOD_controller.h"

using namespace std;
void writefile(){
    FILE *iFile1;
    iFile1 = fopen("ACHIVO.mp3", "wb");
    fwrite(GOD_controller::get_file("editado.mp3"), 1000000, 1, iFile1);
}
int printfiles( char* filepath){
    DIR *dir;
    struct dirent *ent;
    if ((dir = opendir (filepath)) != NULL) {
        /* print all the files and directories within directory */
        while ((ent = readdir (dir)) != NULL) {
           char* cosa = ent->d_name;
            if(cosa!=".."&&cosa!="."){
                cout<<cosa<<endl;
            }
        }
        closedir (dir);
    } else {
        /* could not open directory */
        perror ("");
        return EXIT_FAILURE;
    }
}
void savefile(){
        string filename = "Bobby Vinton - Mr Lonely.mp3";
    FILE *iFile =  fopen("/home/kenneth/Desktop/Bobby Vinton - Mr Lonely.mp3", "rb");
    fseek(iFile, 0, SEEK_END);
    long lSize = ftell(iFile);
    rewind(iFile);
    char* buffer = (char *) malloc(sizeof(char) * lSize);
    fread(buffer, 1, lSize, iFile);
    cout<<buffer<<endl;
        file_controller files =  file_controller();

    GOD_controller::saveFile(buffer,(char*)filename.c_str(),lSize);
}
int main(int argc, char **argv) {
    writefile();
    GOD_controller::deletefile("editado.mp3");
//savefile();
//    string filename = "Prueba_exceso.mp3";
//    FILE *iFile =  fopen("/home/kenneth/Desktop/Tool - Pushit.mp3", "rb");
//    fseek(iFile, 0, SEEK_END);
//    long lSize = ftell(iFile);
//    rewind(iFile);
//    char* buffer = (char *) malloc(sizeof(char) * lSize);
//    fread(buffer, 1, lSize, iFile);
//    cout<<buffer<<endl;
//GOD_controller::check();
//GOD_controller::editfilename("Bobby Vinton - Mr Lonely.mp3","editado.mp3");
//file_controller::Recontruct_file("Prueba_exceso.mp3",1);
//    file_controller files =  file_controller();
//    //printfiles((char*)files.filepath(1)->c_str());
// //  files.Recontruct_file("KAKA.mp3",1);
////    FILE* iFile1 = fopen("SIRVE.mp3", "wb");
////    cout<<lSize<<endl;
////    fwrite(files.getfile("Tool - H. w Lyrics (HD).mp3"), lSize*2, 1, iFile1);
////
//     files.save_file(buffer,(char*)filename.c_str(),lSize);
//    cout<<Existence_controller::firsttime()<<endl;
//    cout<<Existence_controller::disk_twook()<<endl;
//    cout<<Existence_controller::disk_threeok()<<endl;
//    cout<<Existence_controller::disk_oneok()<<endl;carpeta();
}