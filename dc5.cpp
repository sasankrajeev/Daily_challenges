#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(void) {
	
	int a[5][5],count=0;
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin >> a[i][j];
// 				scanf("%d",&a[i][j]);
		}
	}
	if(a[2][2]==1)
		count=0;
		
	else
	{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(a[i][j] == 1)
			{ 
				 count = abs(2-i)+abs(2-j);
				 
    }
  }
}
}
	
// 	printf("%d",(count));
	cout << count;
	return 0;
}
