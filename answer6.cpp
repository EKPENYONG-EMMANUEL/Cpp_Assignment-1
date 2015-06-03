#include<iostream>
using namespace std;
int main ()
{
int Weight;
int Height;
int BMI;
{
	cout << "welcome, please input weight(in kilograms)\n"; // output one line
	cin >>Weight;
}
{

	cout<<"input your height (in metres)\n"; // output another line
	cin>> Height;
}
(BMI = Weight/(Height*Height));
	cout <<"your BMI="<<BMI; // output another line
{
	cout <<"\t BMI VALUES\n";
	cout <<"\t- Underweight:    less than 18.5\n";
	cout <<"\t- Normal:         between 18.5 and 24.9\n";
	cout <<"\t- Overweight: between 25 and 29.9\n";
	cout <<"\t- Obase: 30 and greater\n";
}
	return 0;
}
