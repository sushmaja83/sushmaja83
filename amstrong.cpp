#include<iostream>
#include<conio.h>
using namespace std;
int main()
{


int n,r,sum,temp;

 cout<<"enter number";
  cin>>n;
  temp=n;
  while(n!=0)
  {
  	r=n%10;
  	sum=sum+(r*r*r);
	n=n/10;
  }
  if(sum==temp)
  {
  	cout<<"amstrong number";
  }
  else
 cout<<"not amstrong number";
  
}
