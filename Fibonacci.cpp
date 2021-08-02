#include<iostream>
using namespace std;
// Fibonacci series by dynamic programming 

int Fibonacci_Function_One(int number){
    int number_one = number;
    int fib[number_one];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2;i<=number_one;i++){
        fib[i] = fib[i-1] + fib[i-2];
        cout<<fib[i]<<" ";
    }
    return 0;
}

// Fibonacci Series by recursion function method

int Fibonacci_Function_Two(int number){
    if(number<=1){
        return number;
    }
    return Fibonacci_Function_Two(number-1) + Fibonacci_Function_Two(number-2);
}
int main(){
    int value = 10;
    Fibonacci_Function_One(value);
    cout<<endl;
    Fibonacci_Function_Two(value);
    cout<<endl;
    for (int i = 0;i<=value;i++){
        cout<<Fibonacci_Function_Two(i)<<endl;
    }
}