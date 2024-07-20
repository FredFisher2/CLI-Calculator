#include <iostream>

int chooseOperator(){
    char operatorId = 'p';
    int num1;
    int num2;

    std::cout << "Enter the first number: " << '\n';
    std::cin >> num1;
    std::cout << "Enter the second number: " << '\n';
    std::cin >> num2;


    std::cout << "Choose an operator: ";
    std::cin >> operatorId;
    if (operatorId == 'a') {
        std::cout << num1 << " + " << num2 << " = " << num1+num2 << '\n';
    } else if (operatorId == 's') {
        std::cout << num1 << " - " << num2 << " = " << num1-num2 << '\n';
    } else if (operatorId == 'm') {
        std::cout << num1 << " x " << num2 << " = " << num1*num2 << '\n';
    } else if (operatorId == 'd') {
        std::cout << num1 << " / " << num2 << " = " << num1/num2 << '\n';
    } else {
        std::cout << "Invalid character!";
    }
    chooseOperator();
    return 0;
}

int main()
{
    std::cout << "Welcome to the CLI Calculator!" << '\n';
    std::cout << "Operator guide:" << '\n'
    << "a = addition" << '\n' << "s = subtraction" << '\n' << "m = multiplication" << '\n' << "d = division" << '\n';
    chooseOperator();
    return 0;
}
