#include<stdio.h>
#include<conio.h>
int v=0;
void question(int x,int z)
{
FILE *fp1;
int y=x*3+1;
char buff[255];
char s[255];
int pos,count=0;
clrscr();
v=z;
fp1=fopen("lmgquiz1.txt","r");
if(fp1==NULL)
printf("\n file cannot be accessed");
else
{
while(fgets(buff,sizeof(buff),fp1)!=NULL && count<300)
{
count=count+1;
if(count==y)
printf("\n%d)%s",v,buff);
if(count==y+1)
printf("\n%s",buff);
}
fclose(fp1);
getch();
}
  }

char solution(int x)
{
FILE *fp;
char ch=NULL;
int count=0;
fp=fopen("solution.txt","r");
if(fp==NULL)
printf("\n file cannot be accessed");
else
{
ch=fgetc(fp);
while(ch!=NULL && count<100)
{
//printf("\n ch==%c",ch);
count=count+1;
if(count==x*2-1)
return ch;
ch=fgetc(fp);
}
}
return ch;
}





















/*
void main()
{
char s,buff;
clrscr();
printf("\n enter a character:");
scanf("%c",&s);
buff=solution(6);
printf("\n 6==%c:",s);
printf("\nbuff==%c:",buff);

if(buff==s)
printf("\n same");
else
printf("\n not same");
getch();
}
/*

lineNumber = x;

static const char filename[] = "file.txt";
FILE *file = fopen(filename, "r");
int count = 0;
if ( file != NULL )
{
    char line[256]; /* or other suitable maximum line size */
/*    while (fgets(line, sizeof line, file) != NULL) /* read a line */
   /* {
  /*      if (count == lineNumber)
	{
	    //use line or in a function return it
	    //in case of a return first close the file with "fclose(file);"
	}
	else
	{
	    count++;
	}
    }
    fclose(file);
}
else
{
    //file doesn't exist
}

*/