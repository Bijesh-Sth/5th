#include<stdio.h>
int main(){
	int i,a,b,temp,hcf;
	printf("Enter two numbers to find GCD\n");
	scanf("%d %d",&a,&b);
	if(a==0){
		
	printf("gcd is %d",b);
	}
	else if(b==0){
		
	printf("gcd is %d",a);
	}
	else{
	
	if(a<b){
		temp=a;
	}
	else{
		temp=b;
	}
	for(i=1;i<=temp;i++){
		//printf("%d",i);
		if(a%i==0 && b%i==0){
			hcf=i;
		
		}
		
	}
	printf("gcd is %d",hcf);
}
	return 0;
}
