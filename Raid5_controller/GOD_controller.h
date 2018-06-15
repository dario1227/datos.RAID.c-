//
// Created by kenneth on 6/14/18.
//

#ifndef DATOS_RAID_C_GOD_CONTROLLER_H
#define DATOS_RAID_C_GOD_CONTROLLER_H

#include <string>

using namespace std;
class GOD_controller {
public:
static void check();
static void reconstruct_disk(int failure);
static void saveFile(char *file, char *filename, long size);
static void deletefile(char* filename);
static void editfilename(char* file_anterior,char* filename_nuevo);
static char* get_file(string filename);

};


#endif //DATOS_RAID_C_GOD_CONTROLLER_H
