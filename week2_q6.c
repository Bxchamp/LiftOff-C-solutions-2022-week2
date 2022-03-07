#include<stdio.h>

int main()
{
int a,n,j,k;
printf("enter a number\n");
scanf("%d",&a);
for(n=1;n<=a;n++){
if(n==1||n==a){
for(j=1;j<=a;j++){
printf("*");
}
//printf("\n");
}
else
for(k=1;k<=a;k++){
if(k==a||k==1)
printf("*");
else
printf(" ");
}
printf("\n");
}
    return 0;
}