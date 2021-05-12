//method 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ch=1,i;
	cout<<"Enter a number";
	cin>>n;
	for(i=2;i<=n/2;i++)
    {
		if(n%i==0)
		{
			cout<<"Not a prime number";
			ch=0;
			break;
		}
    }
if(ch==1)
{
  	cout<<"prime number";
}
return 0;
}
//method 2
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,ch=1,i;
cout<<"Enter a number";
cin>>n;
for(i=2;i<=sqrt(n+1);i++)
{
	if(n%i==0)
	{
		cout<<"Not a prime number";
		ch=0;
		break;
	}
}
if(ch==1)
{
  	cout<<"prime number";
}
}
//method 3
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ch=1,i;
	cout<<"Enter a number";
	cin>>n;
	for(i=2;i<=sqrt(n);i++)
    {
		if(n%i==0)
		{
			cout<<"Not a prime number";
			ch=0;
			break;
		}
    }
if(ch==1)
{
  	cout<<"prime number";
}
return 0;
}
