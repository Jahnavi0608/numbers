//to find wheather a number is prime or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,fc=0,i;
	cout<<"Enter a number"<<endl;
	cin>>n;
	for(i=2;i<=n;i++)
    {
		if(n%i==0)
		{
			fc=1;
			break;
		}
    }
if(fc!=2)
{
  	cout<<"-1";
}
else if(n==1)
{
	cout<<"-1";
}
else
{
	cout<<"1";
}
return 0;
}

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
