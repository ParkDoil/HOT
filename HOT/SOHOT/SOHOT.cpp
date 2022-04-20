#include <iostream>

using namespace std;

int main()
{
    int num = 1;
    int bingo[3][3] = { 0, };
    int inputNum;
    int inputPlayerNumCheck;
    bool isPlayer1 = true;
    bool isWin1 = false;
    bool isWin2 = false;
    int player1WinCheck = 0;
    int player2WinCheck = 0;
    cout << "몇명의 플레이어로 진행하시겠습니까? __";
    cin >> inputPlayerNumCheck;
    if (inputPlayerNumCheck > 0) {
        while (1) {
            for (int i = 0; i < 3; i++) { //어떤 플레이어가 승리했는지 체크 가능.
                for (int j = 0; j < 3; j++) {
                    if (bingo[j][i] == 1) {
                        player1WinCheck++;
                    }
                    else if (bingo[j][i] == 2) {
                        player2WinCheck++;
                    }
                }
                if (player1WinCheck == 3) { // 
                    isWin1 = true;
                }
                else if (player1WinCheck == 3) {
                    isWin2 = true;
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
                }
                if (player1WinCheck == 3) {
                    isWin1 = true;
                }
                else if (player1WinCheck == 3) {
                    isWin2 = true;
                }
                player1WinCheck = 0;
                player2WinCheck = 0;
            }
            system("cls");
            num = 1;
            for (int i = 0; i < 3; i++) { //빙고 화면 출력
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
                    cout << endl << "───┼───┼───┤" << endl;
                }
                else {
                    cout << endl;
                }
            }
            if (isWin1) {
                cout << "플레이어 1이 승리했습니다." << endl;
                break;
            }
            if (isWin2) {
                cout << "플레이어 2이 승리했습니다." << endl;
                break;
            }
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
                break;
            }
            if (inputPlayerNumCheck >= 2) {
                if (isPlayer1) {
                    isPlayer1 = false;
                }
                else {
                    isPlayer1 = true;
                }
            }
        }
    }
}