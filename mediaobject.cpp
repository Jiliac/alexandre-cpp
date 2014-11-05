#include "mediaobject.h"




string MediaObject::getName() const{
   return name;
}
void MediaObject::setName(string n) {
    name=n;
}

int MediaObject::getId () const{
   return id;
}
void MediaObject::setId(int i){
    id=i;
}

string MediaObject::getPathname () const{
   return pathname;
}
void MediaObject::setPathname(string p){
    pathname=p;
}

void MediaObject::print(){
    cout <<"MediaObject "<< name<< " d'Id "<<id<<" et de pathname "<<pathname ;
    }

MediaObject::~MediaObject(){
}

