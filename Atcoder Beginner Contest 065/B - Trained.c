#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
int execute(int i, int a[])
{
	return a[i];
}
int main()
{
	int n;
	int a[100000];
	int b;
	int i;
	int count=0;
	int count2 = 1;
	int t;
	cin >> n;
 
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == 2)
		{
			count++;
		}
	}
 
	if (count == 0)
	{
		cout << "-1";
		return 0;
	}
 
	t = execute(0,a);
 
	//cout << t << "값은이렇다\n" << endl;
 
	while (t != 2)
	{
		
		t = execute(t-1, a);
		count2++; 
 
		if (t == 2)
		{
			break;
		}
		if (count2 > n)
		{
			break;
		}
 
	}
	if (t == 2)
	{
		cout << count2;
	}
	else if (count2 > n)
	{
		cout << "-1";
	}
 
 
	return 0;
}