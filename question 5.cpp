/*Write a program that takes an integer as input and returns an integer with reversed digit
ordering.*/

#include <iostream>

int reverseDigits(int num) {
    int reversed = 0;

    // Handle negative numbers
    int sign = (num < 0) ? -1 : 1;
    num *= sign;

    // Reverse the digits
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    // Restore the original sign
    return reversed * sign;
}

int main() {
    int input;

    // Get input from the user
    std::cout << "Enter an integer: ";
    std::cin >> input;

    // Reverse the digits
    int result = reverseDigits(input);

    // Display the result
    std::cout << "Reversed: " << result << std::endl;

    return 0;
}
