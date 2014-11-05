#ifndef PHOTO_H
#define PHOTO_H
#include "mediaobject.h"

class Photo : public MediaObject
{
    string location;
public:
    Photo();
    Photo(string name, int id, string pathname, string location);

    virtual string getLocation () const;
    virtual void setLocation ( string);

    virtual void  print() const;
};

#endif // PHOTO_H
