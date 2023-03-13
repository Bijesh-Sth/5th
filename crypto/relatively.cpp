// wap to implement euclidean algorithm to find gcd od gicen numbers
#include <iostream>

using namespace std;

int main()
{
    int a, b, r;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    while(b>0){
        r = a % b;
        a = b;
        b = r;
    }
    cout << "GCD is "<< a<<endl;
    cout << endl
         << "Bijesh Shrestha CSIT 5th Semester"<<endl;
    return 0;
}
