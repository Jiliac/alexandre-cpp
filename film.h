#ifndef FILM_H
#define FILM_H

class Film : public Video
{

public:
    int chapterCount;
    int *chapters; // int chapters[chapterCount]
public:
    Film();
    Film(string name, int id, string pathname, long length, int chapterCount, int *chapters);


    virtual void setChapters(int nb, int *tab );
    virtual int* getChapters();
    virtual void print();

};

#endif // FILM_H
