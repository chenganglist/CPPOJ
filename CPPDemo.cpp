#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	//打印n维蛇形矩阵
	int n;
	cin>>n;
	int a[n][n]; //存储蛇形矩阵
	int totalRounds = n/2; //总圈数，如果n%2==1，则需要考虑最后打印一个数n*n
	int colCur = 0,rowCur = 0,len = n,num = 1;
	for(int i=0;i<totalRounds;i++)
	{
		//上左--》上右
		for(int k=0;k<len;k++)
		{
			a[rowCur][colCur++] = num;
			num++;
		}
		colCur--;

		//右上--》右下
		rowCur++;
		for(int k=1;k<len;k++)
		{
			a[rowCur++][colCur] = num;
			num++;
		}
		rowCur--;

		//右下--》左下
		colCur--;
		for(int k=1;k<len;k++)
		{
			a[rowCur][colCur--] = num;
			num++;
		}
		colCur++;

		//左下--》左上
		rowCur--;
		for(int k=1;k<len-1;k++)
		{
			a[rowCur--][colCur] = num;
			num++;
		}
		rowCur++;
		colCur++;

		len = len -2;

	}

	if(n%2==1)
	{
		a[n/2][n/2] = n*n;
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<a[i][n-1]<<endl;
	}
	return 0;
}
