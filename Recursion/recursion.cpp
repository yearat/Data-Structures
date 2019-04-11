#include <bits/stdc++.h>
#define ll long long
using namespace std;

//nth Fibonacci
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

//Factorial
int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

//SumOfDigits
int sumOfDigits(int x)
{
    if (x == 0)
       return 0;
    return (x % 10 + sumOfDigits(x / 10));
}

//MinimumInArray
int findMin(int a[], int sizes)
{

    if (sizes == 1)
        return a[0];
    return min(a[sizes-1], findMin(a, sizes-1));
}

//DecimalToBinary
int DecToBin(int dec)
{
    if (dec == 0)
        return 0;
    else
        return (dec % 2 + 10 * DecToBin(dec / 2));
}

//SumOf 1 + 1/2 + 1/4 + 1/8 + ... + 1/2n
ll sum(int n)
{


    if (n == 1)
        return 1;
    else


        return (1/(ll)pow(n, n) + sum(n - 1));
}

int main()
{

   cout << DecToBin(10) << endl;

   int a[] = {3, 6, 78, 6, 3, -10, 2};
   int n = sizeof(a)/sizeof(a[0]);
    cout <<  findMin(a, n) << endl;;

   return 0;
}
