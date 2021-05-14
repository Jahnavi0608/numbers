// To print the series of all prime numbers till N.
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cout<<"Enter a number";
 cin>>n;
 int i,j,fc=0;
 for(i=1;i<n;i++)
 {
 	for(j=1;j<=i;j++)
 	{
 		if(i%j==0)
 		{
 			fc++;
		}
	}
	if(fc==2)
	{
		cout<<i<<"  ";
	}
	fc=0;
 }
}
