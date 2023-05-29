#include<stdio.h>
#include<conio.h>

void main(){
int choice, eng,hid,guj;
clrscr();

printf("Press 1 for ENGLISH\n");
printf("Press 2 for HINDI\n");
printf("Press 3 for GUJARATI\n");
printf("Enter your choice here :");
scanf("%d",&eng);
printf("\n==========================\n");
switch(eng){
  case 1:
  printf("Press 1 for internet recharge\n ");
  printf("Press 2 for Top-up Recharge\n");
  printf("Press3 for special recharge \n");
  scanf("%d",&eng);
  printf("\n==========================\n");
  switch(eng){

  case 1:
  printf("You have successfully done internet recharge ");
  break;

  case 2 :
  printf("you have successfully done Top-up Recharge");
  break;

  case 3:
  printf("you have successfully done special recharge ");
  break;

  }
  break;

  case 2:
  printf("internet recharge ke liye 1 dabaiye\n");
  printf("top-up recharge ke liye 2 dabaiye\n");
  printf("special recharge ke liye 3 dabaiye \n");
  printf("apka number likya: ");
  scanf("%d",&hid);
  printf("\n==========================\n");
  switch(hid){

  case 1:
  printf("aapne safalta purvak intenet recharge kar liya he ");
  break;

  case 2 :
  printf("aapne safalta purvak top-up recharge  kar liya he");
  break;

  case 3:
  printf("aapne safalta purvak special recharge kar liya he");
  break;
								   //tame safalata purvak special recharge karyu chhe  (gujarati)
  }
  break;

  case 3:
  printf("inteernet recharge mate 1 dabavo\n");
  printf("top-up recharge mate 2 dabavo\n");
  printf("special recharge mate 3 dabvo\n");
  printf("tamro number lako");
  scanf("%d",&guj);
  printf("\n==========================\n");
  switch(guj){
  case 1:
  printf("tame safalata purvak internet recharge karyu chhe");
  break;

  case 2 :
  printf("tame safalata purvak top-up recharge karyu chhe");
  break;

  case 3:
  printf("tame safalata purvak special recharge karyu chhe");
  break;
  }
  break;
}
getch();
}