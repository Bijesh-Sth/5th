// WAP to implement extended eculidean algorithm( display iterations)

#include <iostream>
#include <cmath>
#define max 20
    
using namespace std;

void gcd(int,int);
int main()
{
    int a,b;
    cout<<"Enter Two numbers whose GCD is to be calculated"<<endl;
    cin>>a>>b;
    gcd(a,b);
    cout<<"\nBijesh Shrestha CSIT 5th Semester"<<endl;
    return 0;
}
void gcd(int a,int b){
int r[max],x[max],y[max],i=1,q[max]={0},d,X,Y;
    x[0]=1;
    x[1]=0;
    y[0]=0;
    y[1]=1;
    r[0]=a;
    r[1]=b;
    //cout<<r[0]<<endl;
    do{
        i++;
        r[i]=r[i-2] % r[i-1];
        //cout<<i<<endl;
        q[i]=floor(r[i-2]/r[i-1]);
        x[i]=x[i-2]-q[i]*x[i-1];
        y[i]=y[i-2]-q[i]*y[i-1];
    }while(r[i]!=0);
    cout<<"i\t ri\t qi\t xi\t yi"<<endl;
    i=0;
    while(r[i]!=0){
        printf("%d\t %d\t %d\t %d\t %d\n",i-1,r[i],q[i],x[i],y[i]);
        i++;
    }
    printf("%d\t %d\t %d\t\n",i-1,r[i],q[i]);
        
    d=r[i-1];
    X=x[i-1];
    Y=y[i-1];
    printf("gcd(%d,%d) = %d, x = %d y = %d",a,b,d,X,Y);
    
}
