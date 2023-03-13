// A simple C++ program to calculate
// Euler's Totient Function
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}
int phi(unsigned int n)
{
	unsigned int result = 1;
	for (int i = 2; i < n; i++)
		if (gcd(i, n) == 1)
			result++;
	return result;
}
int main()
{
	int n;
	cout << "Enter Number to find Totient value "<<endl;
    cin >> n;
		cout << "phi("<<n<<") = " << phi(n) << endl;
	cout << endl
         << "Bijesh Shrestha CSIT 5th Semester"<<endl;
    
    return 0;
}


