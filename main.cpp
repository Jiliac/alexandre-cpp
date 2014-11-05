#include "mediaobject.h"
#include "photo.h"
#include "video.h"
#include "film.h"


int main(){

    /*   test des objets */

    MediaObject* m = new MediaObject ("m",1,"C/Desktop");

    m->print();
    MediaObject** tab = new MediaObject*[5];
    unsigned int count = 0;

    tab[count++] = new Photo ("test_1",1 ,"C/Desktop", "Telecom");
    tab[count++] = new Video ("test_2",2 ,"C/Desktop", 15);
     tab[count++] = new Photo("test_3",3 ,"C/Desktop", "Bordeaux");
     tab[count++] = new Video("test_4",4 ,"C/Desktop", 35);
     tab[count++] = new Video("test_5",2 ,"C/Desktop", 40);

    for(int i=0; i<5; i++) {
        tab[i]->print();
        cout << "\n";
    }


    cout << "test de film et des tableaux";
    int chapters [3] = {1, 2, 3};
    Film *
            film_1= new Film ("premierFilm", 1258,"~/Desktop",50,3,chapters);

}
