/*2025-02-24 18:12:46
在交换两数基础上的三数排序问题
*/ 
#include<stdio.h>
int main(){
	int a, b,c,t ;
	
	printf("请输入三个整数值\n") ;
	
	scanf("%d %d %d", &a , &b ,&c) ;
	if ( a <= b ){
	t = a;
	a = b;
	b = t;
	}
	if ( a <= c){
	t = a;
	a = c;
	c = t;
	}
	if ( b <= c){
	t = b ;
	b = c ;
	c = t ;	
	}
	
	printf("a=%d \nb=%d \nc=%d\n",a,b,c);
	
	
	return 0;
}





