#include "film.h"

Film::Film()
{
    name=""; id=0; pathname= ""; length=""; chapterCount=0; *chapters=0;
}

Film::Film(string _name, int _id, string _pathname, long _length, int _chapterCount, int *_chapters)
    : Video (_name,_id,_pathname,_length)
{
/*this->setChapters(_chapterCount,*_chapters);*/
}

void Film::setChapters(int nb, int *tab){
    chapterCount=nb;
    *chapters= new int [chapterCount];
    for (int i = 0; i<chapterCount; i++){
        chapters[i]=tab[i];
    }
}

int Film::getChapters(){
    return *chapters;
}

void Film::print()const{
    cout <<"Video" << name << "d'ID" <<id<< "de pathname" <<pathname<< "de duree" <<length<< "qui a" <<chapterCount<< "chapitres";
}
