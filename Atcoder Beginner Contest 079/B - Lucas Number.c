#include<iostream>
using namespace std;
#define MAX 100
 
int main()
{
	int a;
	int l0=2;
	int l1=1;
	int l2;
	long long int l;
	long long int k;
	long long int p;
	cin >> a;
 
	l2 = l0 + l1;
	l=l2;
	k = l1;
	
	if (a == 1)
	{
		cout << l1;
		
	}
	else if (a == 2)
	{
		cout << l2;
	}
	else if (a == 3)
	{
		cout << l + k;
	}
	
	else {
		l = l1;
			k = l2;
			l = k + l;
	
		for (int i = 4; i < a+1; i++)
		{
			p = l;
			l = l + k;
			k = p;
		}
		cout << l;
	}
 
	
 
	return 0;
}
 