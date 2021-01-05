#include <iostream>
#include <vector>

// C++11 lest unit testing framework
#include "lest.hpp"

using namespace std;

vector<int> getProductsOfAllIntsExceptAtIndex(const vector<int>& intVector)
{
    if (intVector.size() < 2) {
        throw invalid_argument("Getting the product of numbers at"
                               " other indices requires at least 2 numbers");
    }

    // we make an array with the length of the input array to
    // hold our products
    vector<int> productsOfAllIntsExceptAtIndex(intVector.size());

    // for each integer, we find the product of all the integers
    // before it, storing the total product so far each time
    int productSoFar = 1;
    for (size_t i = 0; i < intVector.size(); ++i) {
        productsOfAllIntsExceptAtIndex[i] = productSoFar;
        productSoFar *= intVector[i];
    }

    // for each integer, we find the product of all the integers
    // after it. since each index in products already has the
    // product of all the integers before it, now we're storing
    // the total product of all other integers
    productSoFar = 1;
    for (size_t i = intVector.size(); i > 0; --i) {
        size_t j = i - 1;
        productsOfAllIntsExceptAtIndex[j] *= productSoFar;
        productSoFar *= intVector[j];
    }

    return productsOfAllIntsExceptAtIndex;
}


// tests

const lest::test tests[] = {
        {CASE("small vector") {
            const auto actual = getProductsOfAllIntsExceptAtIndex({1, 2, 3});
            const auto expected = vector<int> {6, 3, 2};
                    EXPECT(actual == expected);
        }},

        {CASE("longer vector") {
                 const auto actual = getProductsOfAllIntsExceptAtIndex({8, 2, 4, 3, 1, 5});
                 const auto expected = vector<int> {120, 480, 240, 320, 960, 192};
                         EXPECT(actual == expected);
             }},

        {CASE("vector has one zero") {
                 const auto actual = getProductsOfAllIntsExceptAtIndex({6, 2, 0, 3});
                 const auto expected = vector<int> {0, 0, 36, 0};
                         EXPECT(actual == expected);
             }},

        {CASE("vector has two zeros") {
                 const auto actual = getProductsOfAllIntsExceptAtIndex({4, 0, 9, 1, 0});
                 const auto expected = vector<int> {0, 0, 0, 0, 0};
                         EXPECT(actual == expected);
             }},

        {CASE("one negative number") {
                 const auto actual = getProductsOfAllIntsExceptAtIndex({-3, 8, 4});
                 const auto expected = vector<int> {32, -12, -24};
                         EXPECT(actual == expected);
             }},

        {CASE("all negative numbers") {
                 const auto actual = getProductsOfAllIntsExceptAtIndex({-7, -1, -4, -2});
                 const auto expected = vector<int> {-8, -56, -14, -28};
                         EXPECT(actual == expected);
             }},

        {CASE("error with empty vector") {
                         EXPECT_THROWS(getProductsOfAllIntsExceptAtIndex({}));
             }},

        {CASE("error with one number") {
                         EXPECT_THROWS(getProductsOfAllIntsExceptAtIndex({1}));
             }},
};

int main(int argc, char** argv)
{
    return lest::run(tests, argc, argv);
}