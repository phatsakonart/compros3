#include<iostream>
#include<string>
using namespace std;
int main()
{
	float H,W,Age,bmi;
	string sex,Name;
	cout<<"Enter Name ;  ";
	cin>>Name;
	cout<<"Enter Age  :  ";
	cin>>Age;
	cout<<"Enter Gender : ";
	cin>>sex;
	cout<<"Enter Height : ";
	cin>>H;
	cout<<"Enter Weight : ";
	cin>>W;
	bmi =  W / ((H/100) * (H/100));
	if (bmi <= 18.5)cout<<"BMI = "<< cout<<bmi<<"kg/m2"<<"Underweight\n";
	else if ((bmi >= 18.5)&&(bmi<25))cout<<"BMI = "<<bmi<<"kg/m2"<<"Normal\n";
	else if ((bmi >= 25)&&(bmi<30))cout<<"BMI = "<<bmi<<"kg/m2"<<"Overweight\n";
	else if ((bmi >= 30)&&(bmi<40))cout<<"BMI = "<<bmi<<"kg/m2"<<"Obseity\n";
	system("pause");
	return(0);
}