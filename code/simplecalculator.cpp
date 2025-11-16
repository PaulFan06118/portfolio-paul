#include <iostream>

int main(){

    char op;
    double num1, num2, result;
    std::cout << "************** CALCULATOR **************\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "The answer is " << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            std::cout << "The answer is " << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            std::cout << "The answer is " << result << "\n";
            break;
        case '/':
            result = num1 / num2;
            std::cout << "The answer is " << result << "\n";
            break;
        default:
            std::cout << "You did not enter a valid operator.\n";
            break;
    }

    std::cout << "****************************************\n";

    return 0;
}