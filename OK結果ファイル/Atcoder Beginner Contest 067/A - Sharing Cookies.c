#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
 
int main()
{
	int a;
	int b;
	int total;
 
	cin >> a >> b;
 
	total = a + b;
 
	if (a % 3 == 0)
	{
		cout << "Possible" << endl;
 
	}
 
	else if (b % 3 == 0)
	{
		cout << "Possible" << endl;
 
	}
 
	else if (total % 3 == 0)
	{
		cout << "Possible" << endl;
 
	}
	else
	{
		cout << "Impossible" << endl;
	}
 
	return 0;
}