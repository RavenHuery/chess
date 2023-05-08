//Written by Raven Huery <raven.huery@uleth.ca>
//Last Updated May 7, 2023

#include <iostream>
#include <vector>

#include "gameboard.h"

using namespace std;

gameBoard::gameBoard()
{
    whiteTile _1, _3, 1f, 1h, 2a, 2c, 2e, 2g;
    whiteTile 3b, 3d, 3f, 3h, 4a, 4c, 4e, 4g;
    whiteTile 5b, 5d, 5f, 5h, 6a, 6c, 6e, 6g;
    whiteTile 7b, 7d, 7f, 7h, 8a, 8c, 8e, 8g;

    blackTile _0, _2, 1e, 1g, 2b, 2d, 2f, 2h;
    blackTile 3a, 3c, 3e, 3g, 4b, 4d, 4f, 4h;
    blackTile 5a, 5c, 5e, 5g, 6b, 6d, 6f, 6h;
    blackTile 7a, 7c, 7e, 7g, 8b, 8d, 8f, 8h;


    //What I'm trying to do here is create a matrix of 
    //tiles in the 8x8 pattern that you usually see chess
    //boards in. I could work row by row... hmm...
    for (int i = 0; i > 8; i++)
    {
        for (int j = 0; j > 8; j++)
        {

        }
    }    

}