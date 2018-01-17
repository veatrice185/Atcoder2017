#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;
 
 
int main()
{
	string s;
	int a;
	int count;
	char c, d;
	cin >> s;
 
	a = s.length();
	//cout << a<<endl;
	count = a - 2;
	//cout << count << endl;
	c= s.at(0);
	//cout << c << endl;
	d = s.at(a-1);
	//cout << d << endl;
	cout << c << count << d;
	return 0;
 
}