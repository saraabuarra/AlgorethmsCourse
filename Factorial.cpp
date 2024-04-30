
#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;
// a recursive function to calculate the factorial of n.
long long recFactorial (long long n)
{
  // Base case: factorial of 0 is 1
    if (n==0)
    {
        return 1;
    }
   // Recursive case: factorial of n = n * recfactorial(n-1)
    return n*recFactorial(n-1);
}
//an iterative function to calculate the factorial of a given integer n
long long iterFactorial( long long n)
{
    long long fact =1;
    for( int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
   long long n;
    cout<<"Enter a number to calculate its factorial:"<<endl;
    cin>>n;

    auto start = high_resolution_clock::now();

    cout<<"The Factorial of n by Iterative Method is "<<iterFactorial(n)<<endl;

// cout<<"The Factorial of n by Recursive Method is "<<recFactorial(n)<<endl;

    auto finish = high_resolution_clock::now();
    // Calculating execution time taken by the program.
      auto duration= duration_cast<microseconds>(finish - start);
    cout << "Time taken in microseconds : "<< (double)(duration.count() / 1000.0) << endl;
    return 0;
}
