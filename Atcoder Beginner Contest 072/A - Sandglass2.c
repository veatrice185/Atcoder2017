#include<iostream>
using namespace std;
 
int main()
{
	int a;
	int b;
	int c;
	cin >> a >> b;
 
	if (b >= a) {
		c = 0;
	}
 
	else {
		c = a - b;
	}
	
	cout << c;
	
    return 0;
}