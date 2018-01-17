#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#define MAX 100000
int main()
{
	int a;
	int b[2000];
	int total = 0;
 
	cin >> a;
	
	for (int j = 0; j < a * 2; j++)
	{
		cin >> b[j];
		if (j % 2 == 1)
		{
			total += b[j] - b[j - 1]+1;
		}
	}
	
	cout << total;
 
	return 0;
}