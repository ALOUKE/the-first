/* 2025-02-23 13:34:28
   scanf 的用法 
*/ 

#include<stdio.h>
int main(){
	int i;
	int o;
	int u;
	int y; 
	printf("请输入三个数字，中间以逗号分隔：\n");
	
	scanf("%d ,%d ,%d",&i ,& o,& u );
	
	printf("i=%d,o=%d,u=%d",i,o,u);
	printf("请输入1个数字\n");
	scanf("%d ",&y );
	
	printf("y=%d",y);
	
	return 0 ;
	
	
} 
