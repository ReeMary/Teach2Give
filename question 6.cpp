//Write a program that counts the number of vowels in a sentence.
#include <iostream>
#include <sstream>

int countWords(const std::string& sentence) {
    std::istringstream stream(sentence);
    std::string word;
    int wordCount = 0;

    while (stream >> word) {
        // Increment the word count for each word
        wordCount++;
    }

    return wordCount;
}

