#include <iostream>
using namespace std;

int countOne(int n)
{
	int count = 0;
	while(n>0)
	{
		if(n%2==1)
		{
			count++;
		}
		n = n>>1;
	}

	return count;
}


int GetValue(int l,int r,int m)
{
	int count = 0;
	for(int i=l;i<=r;i++)
	{
		if(countOne(i)==m)
		{
			count++;
		}
	}
	if(count==0)
	{
		count = -1;
	}
	return count;
}



int main()
{
	int l,r,m;

    cin>>l;
    cin>>r;
    cin>>m;

	cout << GetValue(l,r,m) << endl;

	return 0;
}

