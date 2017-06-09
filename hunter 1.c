#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i;
int array[5],rep=0;
for(i=1;i<=5;i++)
{
cout<<"enter the elements"<<endl;
cin>>array[i];
}
for(i=1;i<=5;i++)
{
if(array[i]==array[i+1])
{
rep=array[i];
}
}
cout<<"repeated value is"<<rep;
getch();
}
