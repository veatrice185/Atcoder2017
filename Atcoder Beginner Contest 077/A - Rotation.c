#include<iostream>
 
using namespace std;
 
int main()
{
	char a[3];
	char b[3];
	char c[3];
	int flag = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >>a[i];
	}
	for (int i = 0; i < 3; i++)
	{
		cin >> b[i];
		c[2 - i] = b[i];
	}
	
	for (int i = 0; i < 3; i++)
	{
		if (a[i] == c[i])
		{
			flag++;
		}
		else
		{
			flag--;
		}
	}
 
	if (flag == 3)
	{
		cout << "YES";
	}
 
	else
	{
		cout << "NO";
	}
	return 0;
}