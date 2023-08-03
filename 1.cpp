#include <iostream>
#include <string>
using namespace std;
int main()
{
	int F,S,T,mid,final;
	float QTotal;
	string score;
	cout<<"Enter first  quizz  (10) : ";
	cin>> F;
	cout<<"Enter second quizz  (10) : ";
	cin>>S;
	cout<<"Enter third  quizz  (10) : ";
	cin>>T;
	cout<<"==========mid-term==========="<<endl;
	cout<<"Enter mid-term (40) : ";
	cin>>mid;
	cout<<"==========FINAL=============="<<endl;
	cout<<"Enter final (50) : ";
	cin>>final;
	cout << "Quizz Total:";
	cin >> QTotal;
	cout << "Mid term:";
	cin >> mid;
	cout << "Final:";
	cin >> final;
	cout << "Total:" << final+QTotal+mid << endl;
	T = final+QTotal+mid;
	cout << "Your score is " <<  ((T>=50)? "PASS ":"FAIL ") << endl;
	system ("pause");
	return (0);


}