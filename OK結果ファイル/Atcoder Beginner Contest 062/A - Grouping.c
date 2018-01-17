#includestdio.h
 
int main()
{
	int a[7] = { 1,3,5,7,8,10,12 };
	int b[4] = { 4,6,9,11 };
	int c[1] = { 2 };
	int x, y;
	int i;
	int z;
	int check1 = 0, check2 = -1;
	z = scanf(%d %d, &x, &y);
 
 
	for (i = 0; i  7; i++)
	{
		printf(a의값은 %dn, a[i]);
		if (x == a[i])
		{
			check1 = 1;
			printf(첫번째루프%d %d x의 값과 같습니다n, x,a[i]);
			break;
		}
	}
 
	for (i = 0; i  7; i++)
	{
		if (y == a[i])
		{
			check2 = 1;
			printf(첫번째루프%d %d y의 값과 같습니다n, y, a[i]);
			break;
		}
	}
 
	for (i = 0; i  4; i++)
	{
		printf(b의값은 %dn, b[i]);
		if (x == b[i])
		{
			check1 = 2;
			printf(두번째루프%d %d x의 값과 같습니다n, x,b[i]);
			break;
		}
	}
 
	for (i = 0; i  4; i++)
	{
 
		if (y == b[i])
		{
			check2 = 2;
			printf(두번쨰루프%d %d y의 값과 같습니다n, y, b[i]);
			break;
		}
	}
	if (x == c[0])
	{
		check1 = 3;
	}
 
	if (y == c[0])
	{
		check2 = 3;
	}
	if (check1 == check2)
	{
		printf(Yes);
	}
	else
	{
		printf(No);
	}
 
	return 0;
}