#include <iostream>
using namespace std;

int main() {
    char char1, char2, char3;
    int num1, num2, num3, sum;

    cout << "Enter Character (A,B,C) : ";
    cin >> char1;

    if (char1 == 'A') {
        num1= 10;
    } else if (char1 == 'B') {
        num1 = 20;
    } else if (char1 == 'C') {
        num1 = 30;
    } else {
        num1 = 0;
    }

    cout << "Enter Character (A,B,C) : ";
    cin >> char2;

    if (char2 == 'A') {
        num2 = 10;
    } else if (char2 == 'B') {
        num2 = 20;
    } else if (char2 == 'C') {
        num2 = 30;
    } else {
         num2 = 0;
    }

    cout << "Enter Character (A,B,C) : ";
    cin >> char3;

    if (char3 == 'A') {
       num3 = 10;
    } else if (char3 == 'B') {
        num3 = 20;
    } else if (char3 == 'C') {
        num3 = 30;
    } else {
        num3 = 0;
    }

    sum = num1 + num2 + num3;

    cout << "A = " << num1 << " , B = " << num2 << " , C = " << num3 << endl;
    cout << "A + B + C = " << num1 << " + " << num2 << " + " << num3 << " = " << sum << endl;

	system("pause");
    return 0;
}


