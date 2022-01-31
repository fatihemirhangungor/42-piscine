#include <stdio.h>

void eda(int arr[4][4], int size)
{
	int i;
	int j;
	
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			printf("%d", arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

void	deneme()
{
	int n = 4;
	int arr[n][n];
	int satir = 0;
	int sutun = 0;
	int a = 1;
	while (satir < n)
	{
		arr[satir][0] = a;
		a++;
		satir++;
	}
	a = 1;
	while (sutun < n)
	{
		arr[0][sutun] = a;
		a++;
		sutun++;
	}
	satir = 1;
	sutun = 1;
	while(satir < n && n != 3)
	{
		arr[satir][1] = (arr[satir-1][sutun])+1;
		satir++;
	}
	while(sutun < n && n != 3)
	{
		arr[1][sutun] = (arr[satir][sutun-1])+1;
		sutun++;
	}
	eda(arr,n);





















	/*while (satir != n && sutun != n || satir < n)
	{
		sutun = 0;
		while (sutun < n)
		{
			arr[satir][sutun] = arr[satir][sutun];
			arr[satir+1][sutun] = arr[satir][sutun]+1;
			printf("%d",arr[satir][sutun]);
			sutun++;
		}
		printf("\n");
		satir++;
	}*/
	//int arr2[2][2] = {{1,1},{2,2}};
	//prt_mtx(arr, n);
}

int main()
{
	deneme();
	return 0;
}
