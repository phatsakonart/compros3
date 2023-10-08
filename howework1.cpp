#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
string  Checkgrade( int num);
float GheckGPA(string num);
int main()
{
    string name[3];
    int num[3][3];
    float ss = 0,oo;
    for(int i = 0;i<3;i++)
    {
        cout<<"Student"<<i+1<<endl;
        cout<<"Enter name : ";
        cin>>name[i];
        for(int j = 0; j<3;j++)
        {
        cout<<"Enter Score :";
        cin>>num[i][j];
        }
    }
    cout<<"Show Scores"<<endl;
	cout<<setfill('-')<<setw(40)<<""<<endl;
	cout<<"Student\t Math\tScience\tEnglish\tGPA"<<endl;;
	cout<<setfill('-')<<setw(40)<<""<<endl;
    for(int i = 0;i<3;i++)
	{ 
	cout<<i+1<< name[i] <<"\t";
	for(int j = 0;j<3;j++)
	{
        string mm = Checkgrade(num [i][j]);
        float kk = GheckGPA(mm);
        
		cout<< " " <<num[i][j] <<'\t'  <<mm;
        ss += kk;
	}
        cout<<fixed<<setprecision(2)<<ss/9.0;
        ss = 0;
	    cout<<endl;
    }
    system("pause");
    return 0;
}
string Checkgrade( int num)
{
    int point[] = {0,50,55,60,65,70,75,80};
    string grade[] = {"F","D","D+","C","C+","B","B+","A"},gabgrade;
            for(int n = 0; n<8;n++)
            {
                if (num >= point[n])
                { 
                    gabgrade = grade[n];
                }
                
            }
        return gabgrade;
}
float GheckGPA(string num)
{
    string grade[] = {"F","D","D+","C","C+","B","B+","A"};
    float GPA[] = {0.0,1.0,1.5,2.0,2.5,3.0,3.5,4.0},Sum;
            for(int n = 0; n<8;n++)
            {
                if ( num == grade[n])
                {
                    Sum = GPA[n]*3.0;
                }
            }
    return Sum;
}
    