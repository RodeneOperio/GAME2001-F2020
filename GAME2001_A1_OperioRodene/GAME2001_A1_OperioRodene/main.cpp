/*
    Name: Rodene Operio     Student ID: 100140007
    GAME2001 - Data Structures and Algorithms
    Assignment #1
*/

#include <iostream>

#include "UnorderedArray.h"
#include "OrderedArray.h"

using namespace std;

// Print Functions 
void printUnorderedArray(int);
void printOrderedArray(int, bool);

int main() {
    // Unordered Array
    printUnorderedArray(1);
    // Ordered Array, Duplicates Allowed
    printOrderedArray(1, false);
    // Ordered Array, Duplicates Denied
    printOrderedArray(1, true);

    return 0;
}

void printUnorderedArray(int size) {
    // Print Unordered Array
    cout << "Numbers Stored in Array [4, 12, 1, 23, 43, 43]" << endl;
    cout << "---------------------------------------------------------------------------------" << endl;
    UnorderedArray<int> unorderedArray = UnorderedArray<int>(size);
    unorderedArray.push(4); // Store a 4
    cout << "Current Size: " << unorderedArray.GetSize() << " " << "Grow Size: " << unorderedArray.GetGrowSize() << " " << "Max Size: " << unorderedArray.GetMaxSize() 
         << endl;
    unorderedArray.push(12); // Store a 12
    cout << "Current Size: " << unorderedArray.GetSize() << " " << "Grow Size: " << unorderedArray.GetGrowSize() << " " << "Max Size: " << unorderedArray.GetMaxSize() 
         << endl;    
    unorderedArray.push(1); // Store a 1
    cout << "Current Size: " << unorderedArray.GetSize() << " " << "Grow Size: " << unorderedArray.GetGrowSize() << " " << "Max Size: " << unorderedArray.GetMaxSize() 
         << endl;    
    unorderedArray.push(23); // Store a 23
    cout << "Current Size: " << unorderedArray.GetSize() << " " << "Grow Size: " << unorderedArray.GetGrowSize() << " " << "Max Size: " << unorderedArray.GetMaxSize() 
         << endl;
    unorderedArray.push(43); // Store a 43
    cout << "Current Size: " << unorderedArray.GetSize() << " " << "Grow Size: " << unorderedArray.GetGrowSize() << " " << "Max Size: " << unorderedArray.GetMaxSize()
        << endl;
    unorderedArray.push(43); // Store a 43
    cout << "Current Size: " << unorderedArray.GetSize() << " " << "Grow Size: " << unorderedArray.GetGrowSize() << " " << "Max Size: " << unorderedArray.GetMaxSize()
        << endl;
    cout << "\n>>> UNORDERED ARRAY LIST: ";
   // Print Array List 
    for (int i = 0; i < unorderedArray.GetSize(); i++)
    {
        cout << "[" << unorderedArray[i] << "] ";
    }
    cout << "<<<" << endl;
    cout << "---------------------------------------------------------------------------------" << endl;
}

void printOrderedArray(int size, bool noDuplicate) {
    // Print Ordered Array
    cout << "Numbers Stored in Array [4, 12, 1, 23, 43, 43]" << endl;
    cout << "---------------------------------------------------------------------------------" << endl;
    OrderedArray<int> orderedArray = OrderedArray<int>(size, noDuplicate);
    orderedArray.push(4); // Store a 4
    cout << "Current Size: " << orderedArray.GetSize() << " " << "Grow Size: " << orderedArray.GetGrowSize() << " " << "Max Size: " << orderedArray.GetMaxSize()
        << endl;
    orderedArray.push(12); // Store a 12
    cout << "Current Size: " << orderedArray.GetSize() << " " << "Grow Size: " << orderedArray.GetGrowSize() << " " << "Max Size: " << orderedArray.GetMaxSize()
        << endl;
    orderedArray.push(1); // Store a 1
    cout << "Current Size: " << orderedArray.GetSize() << " " << "Grow Size: " << orderedArray.GetGrowSize() << " " << "Max Size: " << orderedArray.GetMaxSize()
        << endl;
    orderedArray.push(23); // Store a 23
    cout << "Current Size: " << orderedArray.GetSize() << " " << "Grow Size: " << orderedArray.GetGrowSize() << " " << "Max Size: " << orderedArray.GetMaxSize()
        << endl;
    orderedArray.push(43); // Store a 43
    cout << "Current Size: " << orderedArray.GetSize() << " " << "Grow Size: " << orderedArray.GetGrowSize() << " " << "Max Size: " << orderedArray.GetMaxSize()
        << endl;
    orderedArray.push(43); // Store a 43
    cout << "Current Size: " << orderedArray.GetSize() << " " << "Grow Size: " << orderedArray.GetGrowSize() << " " << "Max Size: " << orderedArray.GetMaxSize()
        << endl;
    cout << "\n>>> ORDERED ARRAY LIST, allow duplicates = " << (noDuplicate ? "FALSE: " : "TRUE: ");
    // Print Array List 
    for (int i = 0; i < orderedArray.GetSize(); i++)
    {
        cout << "[" << orderedArray[i] << "] ";
    }
    cout << "<<<" << endl;
    cout << "---------------------------------------------------------------------------------" << endl;
}

