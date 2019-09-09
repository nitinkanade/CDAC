#include<stdio.h>
#include"MathUtil.h"

int EvenOrOdd(int n)
{
if(n%2==0)
return 1;
else
return 0;
}

int LargestNumber(int a, int b, int c)
{
if(a>b&&a>c)
return a;
if(b>a&&b>c)
return b;
if(c>a&&c>b)
return c;
}

int CountNumber(int n)
{
int count=0;
while(n!=0)
{
count++;
n=n/10;
}
return count;
}

int ReverseNumber(int n)
{
int rev=0, a,b;

while(n!=0)
{
rev=rev*10;
rev=rev+n%10;
n=n/10;
}
return rev;
}

int Pow(int a, int b)
{
int c=1,i;

for(i=1;i<=b;i++)
{
c=c*a;
}
return c;
}

int CheckPrime(int n)
{
int k=1,j;
for(j=2;j<=n/2;j++)
{
if(n%j==0)
{
k=0;
}
}
if(k==1)
return 1;
else
return 0;
}


int Fact(int n)
{

if(n==1)
return 1;
else 
return Fact(n-1)*n;
}

int DecimalToBinary(int data)
{
int a,y=0;
float x=0.1;

while(data!=0)
{
a=data%2;
data=data/2;
x=(int)(x*10);
y=y+(a*x);
}
return y;
}

int BinaryToDecimal(int data)
{
int a,y=0,count=0;
while(data!=0)
{
a=data%10;
data=data/10;
y=y+(a*Pow(2,count));
count++;
}
return y;
}


int OctalToDecimal(int data)

{
int a,y=0,count=0;
while(data!=0)
{
a=data%8;
data=data/8;
y=y+(a*Pow(8,count));
count++;
}
return DecimalToBinary(y);
}


int GCD(int a, int b)
{
int i,x=1,p;
for(i=2;i<=a;i++)
{
if(CheckPrime(i)==1)
{
{
while((a%i==0)&&(b%i==0))
{
a=a/i; 
b=b/i;
x=x*i;
}
}
}
}
return x;
}
