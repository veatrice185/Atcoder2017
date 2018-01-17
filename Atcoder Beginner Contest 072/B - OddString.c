#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#define MAX 100000
int main()
{
	string str;
	
	string str2;
 
	cin >> str;
	
	for (int i = 0; i < str.length(); i++)
	{
		
		str2 += str[i];
		i++;
	}
	
	cout << str2;
	
}