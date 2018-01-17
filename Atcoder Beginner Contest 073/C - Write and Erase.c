#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;
#define MAX 100000
int main()
{
	int a;
	int b[100000];
	int count = 0;
	stack<int> s;
	stack<int> t;
	int x;
	cin >> a;
	
	for (int j = 0; j < a; j++)
	{
		cin >> b[j];
 
	}
	sort(b, b + a);
	
	for (int j = 0; j < a; j++)
	{
		s.push(b[j]);
 
	}
 
	/*
	for (int j = 0; j < a; j++)
	{
		cout << s.top();
		s.pop();
 
	}
	*/
	
 
	for (int j = 0; j < a; j++)
	{
		t.push(s.top());
		count++;
		//cout << t.top();
		s.pop();
		if (j < a - 1 && t.top() == s.top())
		{
			t.pop();
			s.pop();
			count--;
			j++;
		}
		
 
	}
 
 
 
	cout << count;
	
	return 0;
}