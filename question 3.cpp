//A program that takes an integer as input and returns true if the input is a power of two.
#include <iostream>

bool isPowerOfTwo(int num) {
    // A number is a power of two if and only if it has exactly one '1' bit in its binary representation.
    return (num > 0) && ((num & (num - 1)) == 0);
}

int main() {
    int input;

    // Get input from the user
    std::cout << "Enter an integer: ";
    std::cin >> input;

    // Check if the input is a power of two
    if (isPowerOfTwo(input)) {
        std::cout << input << " is a power of two." << std::endl;
    } else {
        std::cout << input << " is not a power of two." << std::endl;
    }

    return 0;
}#include <iostream>

bool isPowerOfTwo(int num) {
    // A number is a power of two if and only if it has exactly one '1' bit in its binary representation.
    return (num > 0) && ((num & (num - 1)) == 0);
}

int main() {
    int input;

    // Get input from the user
    std::cout << "Enter an integer: ";
    std::cin >> input;

    // Check if the input is a power of two
    if (isPowerOfTwo(input)) {
        std::cout << input << " is a power of two." << std::endl;
    } else {
        std::cout << input << " is not a power of two." << std::endl;
    }

    return 0;
}

