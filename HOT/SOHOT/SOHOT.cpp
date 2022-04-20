#include <iostream>

using namespace std;

int main()
{
    int num = 1;
    int randX1, randY1;
    int bingo[3][3] = { 0, };
    int inputNum;
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
        }
    }
}