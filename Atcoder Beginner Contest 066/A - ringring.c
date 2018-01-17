#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
	int a[3] = {};
	int i;
	for (i = 0; i < 3; i++)
	{
		cin >> a[i];
	}
 
	sort(a, a + 3);
 
	cout << a[0] + a[1] << endl;
 
	return 0;
 
	
}