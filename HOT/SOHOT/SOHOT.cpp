#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    int num = 1;
    int bingo[3][3] = { 0, };
    int inputNum;
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
   
}
