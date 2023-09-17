#include <iostream>

int main() {
    char op;
    double a, b, res;

    std::cout << "Enter first number: ";
    std::cin >> a;

    std::cout << "Enter operation: ";
    std::cin >> op;

    std::cout << "Enter second operation: ";
    std::cin >> b;

    switch (operation) {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    default:
        std::cout << "Wrong operation" << std::endl;
        return 1;
    }

    std::cout << "Result: " << a << " " << op << " " << b << " = " << res << std::endl;

    return 0;

}
