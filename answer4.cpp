#include<iostream>
using namespace std;
int main ()
{
	int fivedigit;
	int first, second, third, fourth, fifth;
	cout<< "please enter the five digit integer\n";
	cin >>fivedigit;
	if( fivedigit < 10000)
	{
		cout << "Try again! input a five digit integer";
		
		return 0;
	}
	if (fivedigit > 99999)
	{
		cout << " Try again! input a five digit integer";
		
		return 0;
	}
	
	first=fivedigit/10000;
	second=(fivedigit/1000)%10;
	third=(fivedigit/100)%10;
	fourth=(fivedigit/10)%10;
	fifth=fivedigit%10;
	
	cout << first;
	cout << " " << second;
	cout << " " << third;
	cout << " " << fourth;
	cout << " " << fifth;
	
	return 0;
}
