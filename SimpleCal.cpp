// Simple Calculator
#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    cin >> num1 >> num2;
    char ch;
    cin >> ch;
    switch(ch){
        case '+': cout<< num1+num2; break;
        case '-': cout<< num1-num2; break;
        case '*': cout<< num1*num2; break;
        case '/': cout<< num1/num2; break;
        case '%': cout<< num1%num2; break;
        
        
        
    }
    
    return 0;
}