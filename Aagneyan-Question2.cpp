/*
1. cin>> not cin<<.
2. switch spelling wrong.
3. Need to be put in quotes
4. Colon needed
5. (JIC) !=0 in while
6. sqr() function not defined
7. double equals unnecessary
8. D should be decremented
9. Unnecessary continue;
10. Break; after case a
11. Expression wrong
12. Function sqr is wrong
*/
#include<iostream>
#include<math.h>                //12
using namespace std;
int main(){
int num,d=0,n,r,p=0,a=1;
char choice;
cin>>num;                         //1
cin>>choice;                       //1
switch(choice)                     //2
{
case 'a':                           //3,4
n=num;
while(n!=0)                         //5
{
n=n/10;
d++;
}
n=num;
while(n!=0)
{
r=n%10;
a=a+pow(r,d);                     //7,11,12
n=n/10;
}
cout<<a<<"\n";
break;                              //10
case 'p':                           //3,4
n=num;
while(n!=0)
{
r=n%10;
p=p*10+r;                          //7,11
n=n/10;
}
cout<<p<<"\n";
//continue;                       //9
}
}
/*
Sample input-1
152
p

Sample output-1
251
Sample input-2
534
a
Sample output-2
216
*/
