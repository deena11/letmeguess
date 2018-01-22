#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<graphics.h>
#include"question.h"

int score=0;
void help();
void quizlev();
void quiz()
{
int ch1,c;
system("cls");
do
{
printf("\n 1.new game \n 2.help \n 3.main menu \n 4.exit");
printf("\n enter your choice...");
scanf("%d",&ch1);
switch(ch1)
{
case 1:
{
//clrscr();
quizlev();
if(score>9 || score==10)
printf("\n*****... congratulations....******");
else if(score>=6 && score <9)
printf("\n above average");
else
printf("\n poor do well next tym");
break; }
case 2:
{
//clrscr();
printf("\n all u need to do is just choose the best answer out of 4 choices");
break;
}
case 3:
{
quiz();
break;
}
case 4:
printf("\n thank you for playing....");
break;
}
printf("\n do u want to continue .\n 1.menu 2.exit");
printf("\n");scanf("%d",&c);
}while(c==1);
}
void quizlev()
{
int j,r,i,ar[20],flag,check;
char ans,ch;
score=0;
for(i=1;i<=10;i++)
{
clrscr();
do{
flag=1;
srand(time(NULL));
r=rand()%100;
ar[i]=r;
for(j=1;j<i;j++)
{
if(r==ar[j])
flag=0;
}
}while(flag==0);
v=i;
question(r,v);
printf("\n enter the choice:(as alphabet)");
scanf(" %c",&ans);
ch=solution(r);
if(ans==ch)
{
score++;
}
else
{
printf("\n the answer is wrong press 1 -to know answer any integer to move on");
scanf("%d",&check);
if(check==1)
{
question(r,v);
printf("\n correct option is:%c",solution(r));
delay(4000);
}
}
printf("score=%d",score);
}
}
int main()
{
//int gd=DETECT,gm;
//initgraph(&gd,&gm,"");
clrscr();
//setbkcolor(GREEN);
quiz();
printf("\n ..THANK YOU FOR PLAYING..");
return 0;
}