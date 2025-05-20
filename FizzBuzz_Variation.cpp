#include<iostream>
using namespace std;
/*  problem statement : print number from 1 to N. for multiples of 3 print "Fizz", 
    for multiples of 5 print "Buzz" and for both print "FizzBuzz"
    input = N = 15
    output = 1,2,fizz,4,buzz,fizz,7,8,fizz,buzz,11,13,14,fizzbuzz
    concept : loops and conditions  */
int main()
{
    int N;
    cout<<"Enter the N :";
    cin>>N;

    for(int i = 1 ; i <= N ; i ++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout<<"FizzBuzz, ";
        }
        else if(i % 5 == 0)
        {
            cout<<"Buzz, ";
        }
        else if(i % 3 == 0)
        {
            cout<<"Fizz, ";
        }
        else{
            cout<<i<<", ";
        }
        
    }
    return 0;
}