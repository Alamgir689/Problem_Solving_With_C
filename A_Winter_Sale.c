/*

The winter sale began, and Mrs. Sarah wants to buy a T-shirt for her son. The T-shirt has a ticket that indicates a discount of X%
 and its price P
 after the discount. She now wants to know the price before the discount to know if the discount was worthy. Help her!

Input
Only one line containing two numbers X
 and P
 (1≤X≤99,1≤P≤4×104
) – the discount percentage, and the price of the T-shirt after the discount.

Output
Print the price of the T-shirt before the discount rounded up to two decimal places.

Examples
input
20 80
output
100.00
input
15 20
output
23.53


*/
#include<stdio.h>
int main()
{
     float a,b,c,d,e;
     scanf("%f %f",&a,&b);
     c=100-a;
     d=(a/c)*b;
     e=b+d;
     printf("%0.2f",e);


return 0;
}