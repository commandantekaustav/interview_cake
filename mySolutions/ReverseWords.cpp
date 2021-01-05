/*
 * You're working on a secret team solving coded transmissions.
 *
 * Your team is scrambling to decipher a recent message, worried
 * it's a plot to break into a major European National Cake Vault. The message has
 * been mostly deciphered, but all the words are backward! Your colleagues have handed off
 * the last step to you.
 *
 * Write a function reverseWords() that takes a message as a string and reverses the
 * order of the words in place.
 *
 * For Example:
 *
 * string message = "cake pound steal";
 * reverseWords(message);
 * cout << message << endl;
 * >=> >=> >=> >=> >=> >=> >=> prints: "steal pound cake"
 *
 * When writing your function, assume the message contains only letters and spaces, and
 * all words are separated by one space.
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <string>

// C++11 lest unit testing framework
#include "lest.hpp"

using namespace std;

void reverseCharacters(string &str, size_t leftIndex, size_t rightIndex) {
    // walk towards the middle, from both sides
    while (leftIndex < rightIndex) {

        // swap the left char and right char
        swap(str[leftIndex], str[rightIndex]);
        ++leftIndex;
        --rightIndex;
    }
}

void reverseWords(string &message) {
    // handle empty message
    if (message.empty()) {
        return;
    }

    // first we reverse all the characters in the entire message
    reverseCharacters(message, 0, message.length() - 1);
    // this gives us the right word order
    // but with each word backward

    // now we'll make the words forward again
    // by reversing each word's characters

    // we hold the index of the *start* of the current word
    // as we look for the *end* of the current word
    size_t currentWordStartIndex = 0;
    for (size_t i = 0; i <= message.length(); ++i) {

        // found the end of the current word!
        if (i == message.length() || message[i] == ' ') {

            // if we haven't exhausted the string our
            // next word's start is one character ahead
            reverseCharacters(message, currentWordStartIndex, i - 1);
            currentWordStartIndex = i + 1;
        }
    }
}
// tests

const lest::test tests[] = {
        {
                CASE("one word") {
            const string expected = "vault";
            string actual = "vault";
            reverseWords(actual);
                    EXPECT(actual == expected);
        }},
        {       CASE("two words") {
                        const string expected = "cake thief";
                        string actual = "thief cake";
                        reverseWords(actual);
                                EXPECT(actual == expected);
                    }},
        {       CASE("three words") {
                        const string expected = "get another one";
                        string actual = "one another get";
                        reverseWords(actual);
                                EXPECT(actual == expected);
                    }},
        {       CASE("multiple words same length") {
                        const string expected = "the cat ate the rat";
                        string actual = "rat the ate cat the";
                        reverseWords(actual);
                                EXPECT(actual == expected);
                    }},
        {       CASE("multiple words different lengths") {
                        const string expected = "chocolate bundt cake is yummy";
                        string actual = "yummy is cake bundt chocolate";
                        reverseWords(actual);
                                EXPECT(actual == expected);
                    }},
        {       CASE("empty string") {
                        const string expected;
                        string actual;
                        reverseWords(actual);
                                EXPECT(actual == expected);
                    }}
};

int main(int argc, char **argv) {
    return lest::run(tests, argc, argv);
}