#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;
#define MAX 200000
 
int main()
{
	int a;
	int count = 0;
	int result=1;
	cin >> a;
 
	while (a != 1)
	{
		a = a / 2;
		count++;
	}
 
	//cout << count;
 
	for (int i = 0; i < count; i++)
	{
		result = result * 2;
	}
 
 
	cout << result;
	return 0;
}