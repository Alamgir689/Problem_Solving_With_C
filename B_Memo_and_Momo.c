/*
Memo and Momo are playing a game. Memo will choose a positive number a
, and Momo will choose a positive number b
.

Your task is to tell them who will win according to the following rules:

If both a
 and b
 are divisible by k
, both of them win and you should print "Both".
If a
 is divisible by k
 but b
 isn't, Memo wins and you should print "Memo".
If b
 is divisible by k
 but a
 isn't, Momo wins and you should print "Momo".
If both a
 and b
 are not divisible by k
, no one wins and you should print "No One".
Input
Only one line containing three positive numbers a
, b
 and k
 (1≤a,b,k≤1018
).

Output
Print the answer as described in the statement.

Examples
inputCopy
15 7 3
outputCopy
Memo
inputCopy
22 10 2
outputCopy
Both

*/
#include<stdio.h>
int main()
{
     long long int a,b,c;
     scanf("%lld %lld %lld",&a,&b,&c);
     if(a%c== 0 && b%c== 0)
     {
        printf("Both");
     }
     else if(a%c==0 && b%c!=0)
     {
        printf("Memo");
     }
     else if(a%c!=0 && b%c==0)
     {
        printf("Momo");
     }
     else if(a%c != 0 && b%c != 0)
     {
        printf("No One");
     }


return 0;
}