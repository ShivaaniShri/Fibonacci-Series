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
int main(){
    Fibonacci_Function_one(10);
}