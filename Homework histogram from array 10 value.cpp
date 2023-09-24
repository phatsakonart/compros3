#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;
int main()
{   
	int score[10];
	cout<<"Element Value Histogram \n";
	srand(time(NULL));
	for(int i  = 0;i<10;i++)
	{
		score[i]=1+rand()%30;
		cout<<i<<setfill(' ')<<setw(5)<<score[i]<<' '<<setfill('*')<<setw(score[i])<<""<<endl;
		
	}
	system("pause");
return 0;
}