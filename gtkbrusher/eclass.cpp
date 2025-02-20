//eclass.cpp programmed by hunter manko

#include "eclass.h"
#include "quake_entity.h"

//parse quake entity classname
void ParseQuakeEntityClassname(eclass * ent, quake_entity_t * quake){
    if( quake->entity_class == ent->classname && + ent->actor ){
        efind.insert(NULL, quake->entity_class);
    }
};