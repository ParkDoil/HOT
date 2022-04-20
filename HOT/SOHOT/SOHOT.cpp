#include <iostream>

using namespace std;

int main()
{
    int num = 1;
    int bingo[3][3] = { 0, };
    int inputNum;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << num << " ";
            cout << "│";
            num++;
        }
        if (i < 2) {
            cout << endl << "───┼───┼───┤" << endl;
        }
        else {
            cout << endl;
        }
    }
    cout << "플레이어 턴입니다. 타일을 넣을 곳을 입력하세요 __";
    cin >> inputNum;
}