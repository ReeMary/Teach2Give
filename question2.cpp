//Write a program to generate the Fibonacci sequence up to 100.
#include <iostream>

int main() {
    int first = 0, second = 1, nextTerm;

    // Print the first two terms of the Fibonacci sequence
    std::cout << first << " " << second << " ";

    // Generate and print Fibonacci sequence up to 100
    while (true) {
        nextTerm = first + second;

        if (nextTerm > 100) {
            break;
        }

        std::cout << nextTerm << " ";

        first = second;
        second = nextTerm;
    }

    return 0;
}
