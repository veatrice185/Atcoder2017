#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
	int n, m;
	int msquare=1;
	int result;
	cin >> n >> m;
 
	for(int i =0;i<m;i++)
	{
		msquare = msquare*2;
	}
	//cout << msquare;
 
	result = ((n - m) * 100 + (m * 1900)) * msquare;
 
	cout << result;
 
	return 0;
	
 
}	