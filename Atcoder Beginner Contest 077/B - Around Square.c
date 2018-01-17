#include<iostream>
 
using namespace std;
 
int main()
{
	long long int a;
	long long int b;
	long long int check = 1;
	long long int k=1;
	cin >> a;
 
	for (int i = 1; i <= a/2+1; i++)
	{
		//cout << i;
		b = i*i;
		if (b > a)
		{
			check = i - 1;
			k = check*check;
			break;
 
		}
	}
 
	cout << k;
	return 0;
}