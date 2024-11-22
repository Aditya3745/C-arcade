#include<stdio.h>
#include<conio.h>
void main(){
 void mystrcat(char *,char*);
 char *name1,*name2;
 clrscr();
 printf("Enter first name");
 gets(name1);
 printf("Enter second name");
 gets(name2);
 mystrcat(name1,name2);
 puts(name1);
getch();
}
void mystrcat(char *name1,char *name2)
{int i,n;
for(i=0;name1[i]!=NULL;i++);
for(n=0;name2[n]!=NULL;n++)
{ name1[i]=name2[n];
 i++;}
 name1[i]=NULL;
}
