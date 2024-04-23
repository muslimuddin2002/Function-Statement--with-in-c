#include <stdio.h>
int sum(int x,int y){
    int sum=x+y;
    return sum;
}
int sub(int x,int y){
    int sub=x-y;
    return sub;
}
int mal(int x,int y){
    int mal=x*y;
    return mal;
}
int div(int x,int y){
    int div=x/y;
    return div;
}
int mod(int x,int y){
    int mod=x%y;
    return mod;
}
int main() {
    int x,y;
    scanf("%d%d",&x,&y);
    int m=sum(x,y);
    int n=sub(x,y);
    int o=mal(x,y);
    int p=div(x,y);
    int q=mod(x,y);
    printf("My sum :%d\n",m);
    printf("My sub :%d\n",n);
    printf("My mal :%d\n",o);
    printf("My div :%d\n",p);
    printf("My mod :%d\n",q);
    return 0;
}
