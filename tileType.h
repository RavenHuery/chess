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
    //default constructor
    tile();

    //destructor
    ~tile();

    //Precondition: A Chess tile is present.
    //Postcondition: The tile type (black/white) is returned.
    char getTileType();

    //Sets the tileType for constructor
    char setTileType();

    //Returns the X position of the tile
    int getPosX();

    //Returns the Y position of the tile
    int getPosY();

    //Returns the team assigned. 0 is black, 1 is white
    bool getTeam()

    protected:
    char tileType;
    int posX;
    int posY;
    bool team;
};

#endif