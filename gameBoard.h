//Written by Raven Huery <raven.huery@uleth.ca>
//Last Updated May 30, 2023

#ifndef GAME_BOARD
#define GAME_BOARD

#include <iostream>
#include <vector>

#include "tile.h"

using namespace std;

class gameBoard
{
    public:
    gameBoard();

    ~gameBoard();

    void printGameBoard();

    protected:
    tile *data;
};

#endif