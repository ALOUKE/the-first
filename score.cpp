/*2025-02-23 16:47:39

推论：数值运算的结果是逻辑值

*/ 

#include<stdio.h>
int main(){
	
	float score ;
	
	printf("请输入你的考试成绩\n") ;
	
	scanf("%f",&score);
	
	if(90<=score && score<=100)
	printf("成绩为1\n") ;
	else
	printf("成绩为2\n") ;
	
	
	return 0;
}
