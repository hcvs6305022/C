#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
srand(time(NULL));
int a,b,i,m[6],tmp=0,j;
a=rand()%49+1;
printf("請輸入一個數字:");
scanf("%d",&b);
printf("%d,%d",a,b);
if(a==b)
printf("恭喜\n");
else
printf("失敗\n"); 
for(i=0;i<=5;i++){

m[i]=rand()%49+1;
printf("m[%d]=%d\n",i,m[i]);
}
for(j=0;j<=5;j++)

if(a==tmp)
a=rand()%49+1;
printf("%d",a);
else
printf("%d")





	
	
	
	return 0;
}
