#include<stdio.h>
int main(){
	int a , b , c ;
	
	printf("请输入三个整数值\n") ;
	
	scanf("%d %d %d", &a , &b ,&c) ;
	
	int one , two , three , four ;
	
	if (a>=b){

	three = a ;
	four = b ;
}
    else{
    	three = b ;
    	four = a ;
	}
	if (c>=three){
		one = c ;
		two = three ;
		three = four ;
	}
	else if(c<=four){
		one = three ;
		two = four ;
		three = c ;
}
	else{
		one = three ;
		two = c ;
		three = four ;
	}
		
	printf(" one%d\n two%d\n three%d\n",one , two ,three) ;
		
	
	return 0;
}
