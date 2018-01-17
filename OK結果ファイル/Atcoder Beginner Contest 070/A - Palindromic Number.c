#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;
#define MAX 100000
 
int main()
{
	char n[3];
	char total[3];
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		cin>>n[i];
	}
	
	for (int i = 0; i < 3; i++)
	{
		total[i] = n[2 - i];
	}
 
	for (int i = 0; i < 3; i++)
	{
		if (total[i] == n[i])
		{
			count++;
		}
	}
	
	if (count == 3)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
 
	return 0;
 
}