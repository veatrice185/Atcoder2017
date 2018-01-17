#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
 
int main()
{
	string a;
	string b;
	string half1;
	string half2;
	int i;
	int check = 1;
	getline(cin, a);
 
	//cout << "a:" << a<<endl;
 
	while (check== 1)
	{
		for (i = 0; i < a.size() - 1; i++)
		{
			b += a[i];
		}
 
	//	cout << "b:" << b << endl;
 
		if (b.size() % 2 == 0)
		{
			for (i = 0; i < (b.size() / 2); i++)
			{
				half1 += b[i];
			}
 
			for (i = b.size() / 2; i < b.size(); i++)
			{
				half2 += b[i];
			}
		}
 
 
	//	cout << "half1:" << half1 << half1.size()<<endl;
	//	cout << "half2:" << half2 << half2.size()<<endl;
 
		if (half1.size() == 0 && half2.size() == 0)
		{
			a = b;
			b = "";
			half1 = "";
			half2 = "";
			continue;
		}
		else 
		{
			if (half1 == half2)
			{
				cout << half1.size() * 2;
				break;
			}
 
		}
 
		a = b;
		b = "";
		half1 = "";
		half2 = "";
	
 
	}
 
	return 0;
 
	
}