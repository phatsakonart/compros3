#include<iostream>
using namespace std;
void CalCircle()
{
float Radius,Area,Circumference;
cout<<"Input radius :";
cin>>Radius;
Area = 3.14f*Radius*Radius;
Circumference =2*3.14f*Radius;
cout<<endl;
cout << "Area of circle : " << Area << endl;
cout << "Circumference of circle : " << Circumference << endl;
cout << "Diameter of circle : " << (2*Radius) << endl;
}
void Rectangle()
{
int sum;
float high,wide;
cout<<"Input High :"<<endl;
cin>>high;
cout<<"Input Wide :"<<endl;
cin>>wide;
sum = high*wide;
cout<<"Area of circle :"<<sum<<endl;
}

int main()
{	char Ch;
	do{ 
		
		cout<<"Program Calculate of Circl."<<endl;
		cout<<"**************************"<<endl;
		cout<<"1.Circle"<<endl;
		cout<<"2.Rectangle"<<endl;
		cout<<"3.Exit"<<endl;
		cout<<"Choose Menu :";
		cin>>Ch;
		if(Ch == '1')CalCircle();
		else if(Ch == '2')Rectangle();
		else if(Ch =='3')cout<<"Exit"<<endl;
	}while(Ch != '3');
		system("pause");
return(0);

}

