//eclass.h programmed by hunter manko
#ifndef ECLASS_H
#define ECLASS_H

#include <string>

std::string& efind;

typedef struct eclass{

    const char * classname;
    //classes
    const char * worldspawn;
    const char * actor;
    const char * scriptmodel;
    const char * scriptbrush;

};

#endif