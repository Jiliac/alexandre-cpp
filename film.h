#ifndef FILM_H
#define FILM_H

#include "video.h"

class Film : public Video
{

private:
    int chapterCount;
    int* chapters; // int chapters[chapterCount]
public:
    Film();
    Film(string name, int id, string pathname, long length, int chapterCount, int *chapters);

    virtual void setChapters(int nb, int *tab );
    virtual int* getChapters();
    virtual void print();

};

#endif // FILM_H
