#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
#define MAX 50
 
int main()
{
	int n;
	int k;
	int l[MAX];
	int i;
	int total=0;
	cin >> n >> k;
 
	for (i = 0; i < n; i++)
	{
		cin >> l[i];
	}
 
	sort(l, l + n);
 
	for (i = 0; i <k; i++)
	{
		total = total + l[n-1-i];
	}
 
	cout << total;
 
	return 0;
}