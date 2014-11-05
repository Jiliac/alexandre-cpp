#ifndef MEDIAOBJECT_H
#define MEDIAOBJECT_H
#include <string>
#include <iostream>
    using namespace std;

class MediaObject
{
public:
    string name;
    int id;
    string pathname;
   public:
        MediaObject(string name, float id, string pathname)
            : name(name),id(id),pathname(pathname) {}
        MediaObject() : id(0) {}
        virtual ~MediaObject();

        virtual string getName () const;
        virtual void setName( string);

        virtual int getId () const ;
        virtual void setId( int);


        virtual string getPathname () const;
        virtual void setPathname ( string);

        virtual void  print();
};

#endif // MEDIAOBJECT_H
