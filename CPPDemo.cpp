#include <iostream>
using namespace std;

int GetValue(int n)
{
	int count = 0;// count统计遇到了多少次下跌
	int upDay = 0;// 每次下跌之后上涨的天数，包含已经下跌的那天
	int i = 1; //当前天数
	while (i<=n) {
		upDay++;
		i=i+upDay;
		i++;
		if(i<=n)
		{
			count++;
		}

	}
	return n - 2*count;
}

int main()
{
	int n;
	while (cin >> n) {
		cout << GetValue(n) << endl;
	}
	return 0;
}

/*
#include <stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int day=2;
        int i=0,j=2;
        while(1)
        {
            if(day+1>n)
                break;
            day++;
            i++;
            if(day+j>=n)
                break;
            day+=j;
            j++;
        }
        printf("%d\n",n-2*i);
    }
    return 0;
}
*/
