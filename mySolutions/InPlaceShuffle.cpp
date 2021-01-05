#include <iostream>
#include <random>
#include <vector>

using namespace std;

/*size_t getRandom(size_t floor, size_t ceiling)
{
    static random_device rdev;
    static default_random_engine generator(rdev());
    static uniform_real_distribution<double> distribution(0.0, 1.0);
    double value = distribution(generator);
    return static_cast<size_t>(value * (ceiling - floor + 1)) + floor;
}*/

size_t getRandom(size_t floor, size_t ceiling)
{
    static random_device rdev;
    static default_random_engine generator(rdev());
    static uniform_real_distribution<double> distribution(0.0, 1.0);
    double value = distribution(generator);
    return static_cast<size_t>(value * (ceiling - floor + 1)) + floor;
}

void shuffle(vector<int>& theVector)
{
    // if it's 1 or 0 items, just return
    if (theVector.size() <= 1) {
        return;
    }

    // walk through from beginning to end
    for (size_t indexWeAreChoosingFor = 0;
         indexWeAreChoosingFor < theVector.size() - 1;
         ++indexWeAreChoosingFor) {

        // choose a random not-yet-placed item to place there
        // (could also be the item currently in that spot)
        // must be an item AFTER the current item, because the stuff
        // before has all already been placed
        size_t randomChoiceIndex = getRandom(indexWeAreChoosingFor,
                                             theVector.size() - 1);

        // place our random choice in the spot by swapping
        if (randomChoiceIndex != indexWeAreChoosingFor) {
            swap(theVector[indexWeAreChoosingFor], theVector[randomChoiceIndex]);
        }
    }
}

void printVector(const char* title, const vector<int>& theVector)
{
    cout << title << ": [";
    bool isFirst = true;
    for (int value: theVector) {
        if (isFirst) {
            isFirst = false;
        } else {
            cout << ", ";
        }
        cout << value;
    }
    cout << ']' << endl;
}

int main(int argc, char** argv)
{
    const vector<int> initial {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> shuffled(initial);
    shuffle(shuffled);
    printVector("initial vector", initial);
    printVector("shuffled vector", shuffled);
    return 0;
}