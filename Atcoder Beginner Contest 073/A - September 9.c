#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#define MAX 100000
int main()
{
	int a;
 
	cin >> a;
 
	if (a / 10 == 9 || a % 10 == 9) {
		cout << "Yes";
 
	}
	else {
		cout << "No";
	}
 
	return 0;
}