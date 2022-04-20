#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    int num = 1;
    int randX1, randY1;
    int bingo[3][3] = { 0, };
    int turn = 8;

    srand(time(NULL));

    while (1)
    {
        if (turn % 2 == 1)
        {
            while (1)
            {
                randX1 = rand() % 3;
                randY1 = rand() % 3;

                if (bingo[randX1][randY1] == 0)
                {
                    bingo[randX1][randY1] = 1;
                    break;
                }
            }
    int x = 0;
    int y = 0;

    while (true)
    {
        x = rand() % 3;
        y = rand() % 3;

        if (bingo[x][y] == 0)
        {
            bingo[x][y] = 2;
            break;
    }

}