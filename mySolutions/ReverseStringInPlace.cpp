/*
Write a function that takes a string and reverses the letters in place
*/

#include <iostream>
#include <string>
// C++11 lest unit testing framework
#include "lest.hpp"

using namespace std;

// solution
void reverse(string &str) {
    if (str.empty()) {
        return;
    }

    size_t leftIndex = 0;
    size_t rightIndex = str.length() - 1;

    while (leftIndex < rightIndex) {
        // swap characters
        swap(str[leftIndex++], str[rightIndex--]);

        // move towards middle
//        ++leftIndex;
//        --rightIndex;
    }
}

// tests
const lest::test tests[] = {
        {CASE("empty string") {
            const string expected;
            string actual;
            reverse(actual);
                    EXPECT(actual == expected);
            cout << "\npassed";
        }},
        {CASE("single character string") {
                 const string expected("A");
                 string actual("A");
                 reverse(actual);
                         EXPECT(actual == expected);
                 cout << "\npassed";
             }},
        {CASE("longer string") {
                 const string expected("EDCBA");
                 string actual("ABCDE");
                 reverse(actual);
                         EXPECT(actual == expected);
                 cout << "\npassed";
             }}
};

int main(int argc, char **argv) {
    string ip((char *) argv[1]);
    reverse(ip);
    cout << ip;
    return lest::run(tests, argc, argv);
}