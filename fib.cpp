#include<stdio.h>
int main(){
	int a=0,b=1,temp,n,i;
	printf("Enter number to be printed\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("%d \n",a);
	temp=a+b;
	a=b;
	b=temp;
	
}
}
/*if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
    */
    function call
