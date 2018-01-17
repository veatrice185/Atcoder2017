#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
	int a;
	int result[1000];
	int b[1000];
	int i;
	int total = 0;
	cin >> a;
	
	for (i = 0; i < a; i++)
	{
		cin >> b[i];
	}
 
	sort(b,b+a);
 
	for (i = 0; i < a-1; i++)
	{
		result[i] = b[i + 1] - b[i];
	}
 
	for (i = 0; i < a - 1; i++)
	{
		total += result[i];
	}
 
	cout << total;
 
	return 0;
}