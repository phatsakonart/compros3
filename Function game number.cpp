#include<iostream>
#include<time.h>
using namespace std;
int checkNum(int r1, int num1);
int main()
{
	cout<<"###Welcome to guessing number game###"<<endl;;
	cout<<"Secret number has been chose"<<endl;
	int num = 0,r = 0,random;
	int r1 = 0;
	srand(time(NULL));
	num = 1+rand()%10;
	do{
	cout<<"check Number : ";
	cin>>r;
	random = checkNum(r,num);
	r1++;
	}while( random != 0);

	cout << "The secret number is " << num << endl;
    cout << "You made " << r1 << " guesses." << endl;

	
system("pause");
return 0;
}
int checkNum(int r1, int num1) {
    if (r1 < num1) {
        cout << "The secret number is higher" << endl;
		return -1;
    } else if (r1 > num1) {
        cout << "The secret number is lower" << endl;
		return 1;
    } else {
        cout << "Congratulations." << endl;
		return 0;
    }
}
