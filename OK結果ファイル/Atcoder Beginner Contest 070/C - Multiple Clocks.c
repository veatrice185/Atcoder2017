#include<iostream>
using namespace std;
#define MAX 100
 
long long int EU(long long int x, long long int y)
{
	long long int n;
	while (1)
	{
		n = x%y;
		if (n == 0) return y;
		x = y;
		y = n;
	}
}
 
int main()
{
	int n;
	long long int gcm, lcm;
	long long int t[MAX];
	
	cin >>n;
	cin >> t[0];
	gcm = t[0];
	lcm = t[0];
	for (int i = 1; i < n; i++)
	{
		cin >> t[i];
		gcm = EU(gcm, t[i]);
		lcm = lcm*(t[i] / EU(lcm, t[i]));
	}
 
	cout << lcm;
 
	return 0;
 
}