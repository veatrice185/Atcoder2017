#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
	char a, b;
	int c, d;
	cin >> a >> b;
 
	switch (a)
	{
	case 'A':
		c = 10;
		break;
	case 'B':
		c = 11;
		break;
	case 'C':
		c = 12;
		break;
	case 'D':
		c = 13;
		break;
	case 'E':
		c = 14;
		break;
	case 'F':
		c = 15;
		break;
			
	}
 
	switch (b)
	{
	case 'A':
		d= 10;
		break;
	case 'B':
		d = 11;
		break;
	case 'C':
		d = 12;
		break;
	case 'D':
		d = 13;
		break;
	case 'E':
		d = 14;
		break;
	case 'F':
		d = 15;
		break;
 
	}
 
	if (c > d)
	{
		cout << ">";
		return 0;
	}
	else if (c < d)
	{
		cout << "<";
		return 0;
	}
	if (c == d)
	{
		cout << "=";
		return 0;
	}
}	