#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int num = 1;
    int randX1, randY1;
    int bingo[3][3] = { 0, };
    int inputNum;
    int inputPlayerNumCheck;
    bool isPlayer1 = true;
    bool isWin1 = false;
    bool isWin2 = false;
    int player1WinCheck = 0;
    int player2WinCheck = 0;
    int x = 0;
    int y = 0;
    int turnCheck = 0;
    cout << "몇명의 플레이어로 진행하시겠습니까? __";
    cin >> inputPlayerNumCheck;
    while (1) {
        for (int i = 0; i < 3; i++) { //어떤 플레이어가 승리했는지 체크 가능.
            for (int j = 0; j < 3; j++) {
                if (bingo[j][i] == 1) {
                    player1WinCheck++;
                }
                else if (bingo[j][i] == 2) {
                    player2WinCheck++;
                }
                if (player1WinCheck == 3) {
                    isWin1 = true;
                }
                else if (player1WinCheck == 3) {
                    isWin2 = true;
                }
            }
            player1WinCheck = 0;
            player2WinCheck = 0;
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (bingo[i][j] == 1) {
                    player1WinCheck++;
                }
                else if (bingo[i][j] == 2) {
                    player2WinCheck++;
                }
                if (player1WinCheck == 3) {
                    isWin1 = true;
                }
                else if (player1WinCheck == 3) {
                    isWin2 = true;
                }
            }
            player1WinCheck = 0;
            player2WinCheck = 0;
        }
        num = 1;
        system("cls");
        cout << "● : 플레이어 1 / ☆ : 플레이어 2" << endl << endl;
        for (int i = 0; i < 3; i++) { //빙고 화면 출력
        cout << "\t\t";
            for (int j = 0; j < 3; j++) {
                if (bingo[i][j] == 0) {
                    if (inputPlayerNumCheck >= 1) {
                        cout << " " << num << " ";
                        cout << "│";
                        num++;
                    }
                    else {
                        cout << "   ";
                        cout << "│";
                        num++;
                    }
                }
                else if (bingo[i][j] == 1) {
                    cout << " ●";
                    cout << "│";
                    num++;
                }
                else if (bingo[i][j] == 2) {

                    cout << " ☆";
                    cout << "│";
                    num++;
                }
            }
            if (i < 2) {
                cout << endl << "\t\t"  << "───┼───┼───┤" << endl;
            }
            else {
                cout << endl;
            }
        }
        if (isWin1) {
            cout << "플레이어 1이 승리했습니다." << endl;
            break;
        }
        else if (isWin2) {
            cout << "플레이어 2이 승리했습니다." << endl;
            break;
        }
        else if (turnCheck >= 9) {
            cout << "무승부입니다." << endl;
            break;
        }
        if (inputPlayerNumCheck > 0) {
            cout << "플레이어 턴입니다. 타일을 넣을 곳을 입력하세요 __";
            cin >> inputNum;
            switch (inputNum) { //빙고 타일 넣는 처리
            case 1:
                if (bingo[0][0] == 0) {
                    if (isPlayer1) {
                        bingo[0][0] = 1;
                    }
                    else {
                        bingo[0][0] = 2;
                    }
                }
                turnCheck++;
                break;
            case 2:
                if (bingo[0][1] == 0) {
                    if (isPlayer1) {
                        bingo[0][1] = 1;
                    }
                    else {
                        bingo[0][1] = 2;
                    }
                }
                turnCheck++;
                break;
            case 3:
                if (bingo[0][2] == 0) {
                    if (isPlayer1) {
                        bingo[0][2] = 1;
                    }
                    else {
                        bingo[0][2] = 2;
                    }
                }
                turnCheck++;
                break;
            case 4:
                if (bingo[1][0] == 0) {
                    if (isPlayer1) {
                        bingo[1][0] = 1;
                    }
                    else {
                        bingo[1][0] = 2;
                    }
                }
                turnCheck++;
                break;
            case 5:
                if (bingo[1][1] == 0) {
                    if (isPlayer1) {
                        bingo[1][1] = 1;
                    }
                    else {
                        bingo[1][1] = 2;
                    }
                }
                turnCheck++;
                break;
            case 6:
                if (bingo[1][2] == 0) {
                    if (isPlayer1) {
                        bingo[1][2] = 1;
                    }
                    else {
                        bingo[1][2] = 2;
                    }
                }
                turnCheck++;
                break;
            case 7:
                if (bingo[2][0] == 0) {
                    if (isPlayer1) {
                        bingo[2][0] = 1;
                    }
                    else {
                        bingo[2][0] = 2;
                    }
                }
                turnCheck++;
                break;
            case 8:
                if (bingo[2][1] == 0) {
                    if (isPlayer1) {
                        bingo[2][1] = 1;
                    }
                    else {
                        bingo[2][1] = 2;
                    }
                }
                turnCheck++;
                break;
            case 9:
                if (bingo[2][2] == 0) {
                    if (isPlayer1) {
                        bingo[2][2] = 1;
                    }
                    else {
                        bingo[2][2] = 2;
                    }
                }
                turnCheck++;
                break;
            }
            if (inputPlayerNumCheck == 1) {
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
                turnCheck++;
                if (isPlayer1) {
                    isPlayer1 = false;
                }
            }
            if (inputPlayerNumCheck >= 1) {
                if (isPlayer1) {
                    isPlayer1 = false;
                }
                else {
                    isPlayer1 = true;
                }
            }
        }
        else if (inputPlayerNumCheck==0) {
            Sleep(800);
            while (true)
            {
                x = rand() % 3;
                y = rand() % 3;
                if (bingo[x][y] == 0)
                {
                    bingo[x][y] = 1;
                    break;
                }

            }
            turnCheck++;
            system("cls");
            cout << "● : 플레이어 1 / ☆ : 플레이어 2" << endl << endl;
            for (int i = 0; i < 3; i++) { //빙고 화면 출력
                cout << "\t\t";
                for (int j = 0; j < 3; j++) {
                    if (bingo[i][j] == 0) {
                        cout << "   ";
                        cout << "│";
                        num++;
                    }
                    else if (bingo[i][j] == 1) {
                        cout << " ●";
                        cout << "│";
                        num++;
                    }
                    else if (bingo[i][j] == 2) {

                        cout << " ☆";
                        cout << "│";
                        num++;
                    }
                }
                if (i < 2) {
                    cout << endl << "\t\t" << "───┼───┼───┤" << endl;
                }
                else {
                    cout << endl;
                }
            }
            Sleep(800);
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
            turnCheck++;
        }
    }
}