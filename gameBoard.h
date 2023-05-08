//Written by Raven Huery <raven.huery@uleth.ca>
//Last Updated May 7, 2023

#ifndef GAME_BOARD
#define GAME_BOARD

#include <iostream>
#include <vector>

#include "blackTile.h"
#include "whiteTile.h"

using namespace std;

class gameBoard
{
    public:
    gameBoard();

    ~gameBoard();

    void printGameBoard();

    protected:
    vector<tile> data;
};

#endif