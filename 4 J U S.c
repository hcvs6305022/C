#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b;
	char c;
	printf("輸入數值1,2:");	
	scanf("%d %d",&a,&b);
	printf("輸入運算值:");
	scanf("%c",&c);
	switch(c){
		case'+':
			printf("\n答案:%d",a+b);
			break;
		case'-':
			printf("\n答案:%d",a-b);
			break;
		case'*':
			printf("\n答案:%d",a*b);
			break;	
		case'/':
			printf("\n答案:%d",a/b);
			break;
		default:
		printf("輸入錯誤");
			break;
	}	
	return 0;
}
