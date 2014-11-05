#include "video.h"

Video::Video()
{
    name=""; id=0; pathname=""; length=0;
}

Video::Video(string _name, int _id, string _pathname, long _length)
    : MediaObject (_name,_id, _pathname), length(_length){
}

long Video::getLength () const{
    return length;
}
void Video::setLength ( long l){
    length=l;
}
void  Video::print() const{
    cout <<"MediaObject "<< name<< " d'Id "<<id<<" de pathname "<<pathname<<" de duree " <<length;
}
