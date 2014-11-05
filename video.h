#ifndef VIDEO_H
#define VIDEO_H
#include "mediaobject.h"

class Video : public MediaObject
{
    long length;
public:
    Video();
    Video(string name, int id, string pathname, long length);

    virtual long getLength () const;
    virtual void setLength ( long);

    virtual void  print() const;
};

#endif // VIDEO_H
