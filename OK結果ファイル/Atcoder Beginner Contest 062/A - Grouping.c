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
		printf(a�ǰ��� %dn, a[i]);
		if (x == a[i])
		{
			check1 = 1;
			printf(ù��°����%d %d x�� ���� �����ϴ�n, x,a[i]);
			break;
		}
	}
 
	for (i = 0; i  7; i++)
	{
		if (y == a[i])
		{
			check2 = 1;
			printf(ù��°����%d %d y�� ���� �����ϴ�n, y, a[i]);
			break;
		}
	}
 
	for (i = 0; i  4; i++)
	{
		printf(b�ǰ��� %dn, b[i]);
		if (x == b[i])
		{
			check1 = 2;
			printf(�ι�°����%d %d x�� ���� �����ϴ�n, x,b[i]);
			break;
		}
	}
 
	for (i = 0; i  4; i++)
	{
 
		if (y == b[i])
		{
			check2 = 2;
			printf(�ι�������%d %d y�� ���� �����ϴ�n, y, b[i]);
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