#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c;
clrscr();

printf("Enter the value of A ");
scanf("%d",&a);

printf("Enter hte value of B ");
scanf("%d",&b);

printf("Enter the value of c ");
scanf("%d",&c);

(a>b)?((a>c)?printf(" A is max"):printf(" C is max")):((b>c)?printf("B is max"):printf("C is max"));


getch();
}

