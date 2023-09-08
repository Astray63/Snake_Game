#include <time.h> 
#include "apple.h"

void place_apple()
{   
    int i = 0;
    srand(time(NULL));

    
    int largeur = 10;
    int hauteur = 10;
    
    Apple object[10]; 
    while (i < 10)
    {
        object[i].x = rand() % largeur;
        object[i].y = rand() % hauteur;
        i++;
    }
    
}