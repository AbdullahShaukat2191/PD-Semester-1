#include <iostream>
using namespace std;

bool isPrime(int);
int primorial(int);

main() {
    system("cls");

    int num, result;
    cout << "Enter the Number:";
    cin >> num;
    result = primorial(num);
    cout << "Primorial of the given number is: " << result;
}

bool isPrime(int number)
{
    if (number <= 1)
    {
        return false;
    }
    for (int i=2 ; i*i <= number ; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int primorial(int n)
{
    int count = 0; 
    int num = 2;   
    int product = 1;
    while (count < n)
    {
        if (isPrime(num))
        {
            product = product * num; 
            count ++;
        }
    num ++; 
    }
    return product;
}