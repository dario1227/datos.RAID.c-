//
// Created by dario1227 on 12/06/18.
//

#include <zconf.h>
#include <pwd.h>
#include <sys/stat.h>
#include <iostream>
using namespace std;
void carpeta() {
    struct passwd *pw = getpwuid(getuid());
    const char *homedir = pw->pw_dir;
    string name = homedir;
    string da = name + "/Disk 1";
    mkdir(da.c_str(), 0777);
    da = name + "/Disk 2";
    mkdir(da.c_str(), 0777);
    da = name + "/Disk 3";
    mkdir(da.c_str(), 0777);

}
int main(int argc, char **argv) {
    carpeta();
}