/* 2025-02-23 13:34:28
   scanf 的用法 
   问题：没读进去会继续读？
   通过while语句解决 
*/ 

#include<stdio.h>
int main(){
	int i;
	int o=2;
	 scanf("%d",&i);
	 printf("i=%d\n",i);
	 
	 scanf("%d",&o);
	 printf("o=%d",o);
	
	return 0 ;
	
	
} 
