#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void DisplayMenu();
float Area(const float Radius);
float Area(const float Length, const float Widht);
float Area(const double high,const double base);
float Area(const double high,const double side_1,const double side_2);
int main()
{
	char Choice;
	bool Flag = true;
	do{
		DisplayMenu();
		cin>>Choice;
		if(Choice == '1'){
			float Radius;
			cout << "\nEnter radius : ";
			cin >> Radius;
			cout << "Area of Circle = " << fixed;
			cout << setprecision(2) << Area(Radius) << endl;
	  }
		else if (Choice == '2') {
			float Length,Widht;
			cout << "Enter length and width : ";
			cin >> Length >> Widht;
			cout << "Area of Rectangle = " << fixed;
			cout << setprecision(2) << Area(Length,Widht);
			cout << endl;
	}else if (Choice == '3') {
			float high,base;
			cout << "Enter high : ";
			cin >> high;
			cout << "Enter base : ";
			cin >> base;
			cout << "Area of Rectangle = " << fixed;
			cout << setprecision(2) << Area(high,base);
			cout << endl;
	}else if (Choice == '4') {
			float high,side_1, side_2;
			cout << "Enter high : ";
			cin >> high;
			cout << "Enter Parallel side  : ";
			cin >> side_1;
			cout << "Enter Parallel side  : ";
			cin >> side_2;
			cout << "Area of Rectangle = " << fixed;
			cout << setprecision(2) << Area(high,side_1,side_2);
			cout << endl;
	}else if (Choice == '5') Flag = false;
	else {
			cout << "\nYou choose out of range is ";
			cout << "not process.\n";
	}
	}while (Flag);
	cout << "\n . . . Exit Program . . .\n";
	system("pause");
	return 0;
}

float Area(const float Radius)
{
	return(3.14159F * Radius * Radius);
}
float Area(const float Length, const float Widht)
{
	return(Length * Widht);
}
float Area(const double high,const double base)
{
	return(0.5 * high *  base);
}
float Area(const double high,const double side_1,const double side_2)
{
	return(0.5 *(side_1 + side_2)*high);
}
void DisplayMenu()
{
	cout << endl;
	cout << " Program Calculate Area " << endl;
	cout << " 1. Clrcle" << endl;
	cout << " 2. Rectangle" << endl;
	cout << " 3. Trinagle" << endl;
	cout << " 4. Trapezoid" << endl;
	cout << " 5. Exit" << endl;
	cout << "Enter your choose number: ";
}