#include <iostream>

int main() {
    char op;
    double num1;
    double num2;
    double result;



    std::cout << "************ CALCULATOR ************\n";
    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;
    std::cout << "Enter Number 1: ";
    std::cin >> num1;
    std::cout << "Enter Number 2: ";
    std::cin >> num2;


    switch(op){
        case '+':
        result=num1+num2;
        break;
        case '-':
        result=num1-num2;
        break;
        case '*':
        result=num1*num2;
        break;
        case '/':
        result=num1/num2;
        break;
        default:
        std::cout << "Please only enter operators (+,-,*,/)";
    }
    std::cout << result << '\n';

    std::cout << "**********************************";


}