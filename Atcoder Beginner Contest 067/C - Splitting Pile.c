#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;
#define MAX 200000
 
int main()
{
	int n;
	long long int l[MAX];
	int i, j;
	long long int total1 = 0;
	long long int total2 = 0;
	long long int total3;
	long long int total4;
	long long int total=0;
	cin >> n;
 
	for (i = 0; i < n; i++)
	{
		scanf("%lld",&l[i]);
		total = total + l[i];
	}
 
	//	for (i = 0; i < n; i++)
	//	{
	//		cout << l[i]<<endl;
	//	}
 
	for (i = 0; i < n - 1; i++)
	{
		total1 = total1 + l[i];
		//cout << "total1은" << total1 << endl;
		
		total2 = total - total1;
		//cout << "total2은" << total2 << endl;
		if (i == 0)
		{
			total3 = abs(total1 - total2);
			total4 = total3;
			//	cout << "total3은" << total3 << endl;
		}
		else
		{
			total4 = abs(total1 - total2);
		}
		if (total4 < total3)
		{
			total3 = total4;
			//	cout << "total3은" << total3 << endl;
		}
		
 
	}
 
 
	cout << total3;
 
	return 0;
}