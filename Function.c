
#include<stdio.h>
void input(){
int a,b;
scanf("%d%d",&a,&b);
sum(a,b);
}
void sum(int x,int y){
int c=x+y;
output(c);
}
void output(int c){
printf("%d",c);
}
int main(){
input();
}
