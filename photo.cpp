#include "photo.h"

Photo::Photo()
{
    name=""; id=0; pathname=""; location="";
}

Photo::Photo(string _name, int _id, string _pathname, string _location)
    : MediaObject (_name,_id, _pathname), location(_location){
}


string Photo::getLocation () const{
    return location;
}
void Photo::setLocation ( string l){
    location=l;
}
void  Photo::print() const{
    cout <<"MediaObject "<< name<< " d'Id "<<id<<" de pathname "<<pathname<<" prise a " <<location;
}
