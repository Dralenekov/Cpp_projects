#include <iostream>
#include <cmath>


int main(){
    char op;
    int num1,num2;
    int res;
    std::cout << "******Calc********\n";
    std::cout << "Choose an operant(+, -, *, /): ";
    std::cin >>op;
    std::cout << "Num: ";
    std::cin >> num1;
    std::cout << "Num: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        res = num1+num2;
        break;
    case '-':
        res = num1-num2;
        break;
    case '*':
        res = num1*num2;
        break;
    case '/':
        res = num1/num2;
        break;
    
    default:
        std::cout << "Something went wrong! ";
        break;
    }
    std::cout << "RESULT: " <<res <<" ";
    std::cout << "******Calc********";
    return 0;
}