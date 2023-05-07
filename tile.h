//Written by Raven Huery <raven.huery@uleth.ca>
//Last Updated May 7, 2023

//Template class for Chess tile

#ifndef CHESS_TILE
#define CHESS_TILE

#include <iostream>
#include <vector>

using namespace std;

class tile 
{
    public:
    //Precondition: A Chess tile is present.
    //Postcondition: The tile type (black/white) is returned.
    char getTileType();

    protected:
    char tileType;
};

#endif