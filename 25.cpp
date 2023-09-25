#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void Input(int &numS,int quiz[10],int Mid[10],int Final[10]);
void Viewall(int &numS,int quiz[10],int Mid[10],int Final[10]);
void Viewid(int &numS,int quiz[10],int Mid[10],int Final[10]);
int main()
{
	int numS = 0;
	int quiz[10],Mid[10],Final[10];
	char menu;	
	do{
		cout<<"=================================="<<endl;
		cout<<"             MENU                 "<<endl;
		cout<<"=================================="<<endl;
		cout<<"1.Input student records"<<endl;
		cout<<"2.View all student records"<<endl;
		cout<<"3.Show a student by ID"<<endl;
		cout<<"4.Exit"<<endl;
		cout<<"Select menu : ";
		cin>>menu;
		if(menu == '1')
		{
			Input(numS,quiz,Mid,Final);
		}
		else if(menu == '2' )
		{
			Viewall(numS,quiz,Mid,Final);
		}	
		else if(menu =='3')
		{
			Viewid(numS,quiz,Mid,Final);
		}
		else if (menu == '4'){
			cout<<"---Exit---\n";
		}
	}while(menu != 4);
	cout<<endl;
system("pause");
return 0;
}
void Input(int &numS,int quiz[10],int Mid[10],int Final[10])
{
cout<<"Input Number of Student :";
cin>>numS;
cout << endl;
for (int i = 0;i < numS;i++){
    cout<<"Number"<<i+1<<endl;
	cout<<"Input Quiz :";
	cin>>quiz[i];
	cout<<"Input Midterm :";
	cin>>Mid[i];
	cout<<"Input Fianl : ";
	cin>>Final[i];
	cout<<endl;
}
}
void Viewall(int &numS,int quiz[10],int Mid[10],int Final[10])
{
	cout<<"------------------------------------"<<endl;
	cout<<"Std	Quiz	Midterm		Final"<<endl;
	cout<<"------------------------------------"<<endl;
	for(int i = 0;i < numS;i++){
	cout<<i+1<<setw(9)<<quiz[i]<<setw(9)<<Mid[i]<<setw(9)<<Final[i]<<endl;
	}
	cout<<"------------------------------------"<<endl;
}void Viewid(int &numS,int quiz[10],int Mid[10],int Final[10])
{ int id;
	cout<<"Input ID :";
	cin>>id;
	for(int i = 0;i<numS;i++)
	{	if(id ==i+1)
	{   cout<<"------------------------------------"<<endl;
		cout<<"Std	Quiz	Midterm		Final"<<endl;
		cout<<"------------------------------------"<<endl;   
		cout<<i+1<<setw(9)<<quiz[i]<<setw(9)<<Mid[i]<<setw(9)<<Final[i]<<endl;
		cout<<"------------------------------------"<<endl;
	}else
	{
		cout<<"Your ID is not found "<<endl;
	}
	
	}
}