#include<stdio.h>
#include<string.h>
#define MAX 50
int main()
{
	char str1[MAX];
	char str2;
	int i,j;
	int flag = 0;
	scanf("%s", str1);
 
	for (i = 0; i < strlen(str1); i++)
	{
		str2 = str1[i];
		
		for (j = i+1; j < strlen(str1); j++)
		{
			if (str2 == str1[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
 
	if (flag == 1)
	{
		printf("no");
	}
 
	else
	{
		printf("yes");
	}
 
	return 0;