//Written by Raven Huery <raven.huery@uleth.ca>
//Last Updated May 13, 2023

#include <iostream>
#include <vector>
#include <iomanip>

#include "gameboard.h"

using namespace std;

gameBoard::gameBoard()
{
    data = new tile[64];

    for (int i = 0; i < 8; i++) //For loop for each row
    {
        for (int j = 0; j < 8; j++) //For loop for each position in row
        {
            if (i % 2 == 1) //If i is an odd number
            {
                if (j % 2 == 1) //black, white, black, white ...
                {
                    data[i*8 + j].tileType = '■';
                }
                else //white, black, white, black ...
                {
                    data[i*8 + j].tileType = '□';
                }
            }
            else //If i is an even number 
            {
                if (j % 2 == 1) //white, black, white, black ...
                {
                    data[i*8 + j].tileType = '□';
                }
                else //black, white, black, white
                {
                    data[i*8 + j].tileType = '■';
                }
            }
        }
    }
}

gameBoard::~gameBoard()
{
    delete [] data;
}

void gameBoard::printGameBoard()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << setw(1) << data[i*8 + j].tileType;
        }
        cout << '\n';
    }
    cout << endl;
}