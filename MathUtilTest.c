#include<stdio.h>
#include"MathUtil.h"

void main()
{

int ch,data, a,b,c,r,i;

do
{
printf("\n1. Even or Odd\n2. Largest Number Among 3 Number\n3. Count Number in Digits\n4. Reverse the Number \n5. Pow of Number\n6. Check No. is Prime\n7. Prime Numbers Between interval\n8. Factorial\n9. GCD\n10. Decimal to Binary\n11. Binary to Decimal\n12. Octal to Decimal\n13. Decimal to Octal\n14. Binary to Octal\n15. Octal to Binary\n");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("Enter the Number"); scanf("%d",&data);r=EvenOrOdd(data); (r==1)?printf("EVEN"):printf("ODD");  break;
case 2: printf("Enter the Three Numbers "); scanf("%d%d%d",&a,&b,&c);r=LargestNumber(a,b,c);printf("%d is largest No",r); break;
case 3: printf("Enter the Number "); scanf("%d",&data); r=CountNumber(data); printf("No of Digits in Number are %d",r); break;
case 4: printf("Enter the Number "); scanf("%d",&data); r=ReverseNumber(data); printf("Reverse Number is %d",r); break; 
case 6: printf("Enter the Number"); scanf("%d",&data); r=CheckPrime(data); (r==1)?printf("%d is Prime",data):printf("%d is Not Prime",data); break; 
case 5: printf("Enter Base and Index "); scanf("%d%d",&a,&b); r=Pow(a,b); printf("Ans = %d",r); break; 
case 7:{ printf("Enter First and Last Limits"); scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
if(CheckPrime(i)==1)
{printf("%d ",i);}
} break;
}

case 8: printf("Enter the Number "); scanf("%d",&data); r=Fact(data); printf("Factorial=%d",r); break;

case 9:printf("Enter two Number "); scanf("%d%d",&a,&b); r=GCD(a,b); printf("GCD=%d",r); break;

case 10: printf("Enter the Number "); scanf("%d",&data); r=DecimalToBinary(data); printf("Binary: %d",r); break;

case 11: printf("Enter the Number "); scanf("%d",&data); r=BinaryToDecimal(data); printf("Decimal: %d",r); break;

case 13: printf("Enter the Number "); scanf("%d",&data); printf("%o",data); break;
case 12: printf("Enter the Number "); scanf("%o",&data); printf("Decimal: %d",data); break;
case 14: printf("Enter the Number "); scanf("%d",&data); r=BinaryToDecimal(data); printf("Octal: %o",r); break;
case 15: printf("Enter the Number "); scanf("%o",&data); r=OctalToDecimal(data); printf("Binary: %d",r); break;

case 0: printf("Exiting"); break;
default: printf("Wrong Input");
}
}while(ch!=0);
}


