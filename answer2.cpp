#include <iostream>
using namespace std;
int main()
{
	int x,y;
	
	cout << "input the two integers:\n";
	cin >> x >> y;
	
	if (x % y == 0)
	 cout << x <<" is a multiple of " << y;
	 else
	 cout << x <<" is not a multiple of " << y;
	 
	 return 0;
}
