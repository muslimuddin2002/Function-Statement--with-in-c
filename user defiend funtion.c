#include<stdio.h>
int sum(int x,int y)
{
int r=x+y;
return r;
}
int main(){
int x,y,c;
x=10,y=30;
c=sum(x,y);
printf("%d",c);
return 0;
}

