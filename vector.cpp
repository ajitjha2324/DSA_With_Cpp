#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> vec;
    // vector<int> vec = {1,2,3,4};           // Initialization
    vector<int> vec(5, 2);                    // Initialization
    for (int val : vec)
    {
        cout << val << " ";
    }
    // cout << "Size of Vector is " << vec.size();
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i];
    // }
    // cout << vec[0] << endl;
    // cout << vec[3] << endl;
    // cout << vec[1];
    // cout << vec[2];
    // cout << vec[3];
    // for (int i : vec)               // for each loop
    // {
    //     cout << i << endl;
    // }

    // cout << "Size = " << vec.size() << endl;                // size function
    // cout << "Capacity = " << vec.capacity() << endl;        // Capacity function

    /*
    cout << "Size Before = " << vec.size();
    vec.push_back(5); // Push Value
    vec.push_back(10);
    vec.push_back(15);
    cout << endl;
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "Size of vector after push back = " << vec.size();
    vec.pop_back();
    cout << endl;
    cout << "After POP "; // POP value from Last
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "Size After POP " << vec.size();
    cout << endl;
    cout << vec.front(); // Give Front Value
    cout << endl;
    cout << vec.back(); // Give Last Value
    cout << endl;
    cout << vec.at(0); // Give Value at Index 0
    cout << endl;
    cout << vec.at(1); // Give Value at Index 1
    */

    // STATIC VS DYNAMIC ALLOCATION
    // STATIC :- STATIC MEMORY is ALLOCATED at Compile Time
    //          STATIC ALLOCATION of MEMORY happens in STACK
    //           eg - int arr[4];

    // DYNAMIC :- MEMORY ALLOCATED to VECTOR is DYNAMIC
    //            DYNAMIC ALLOCATION of MEMORY happens in HEAP

    // VECTOR CAN DOUBLE ITS AFTER FULLY FILLED

    // Q - SINGLE NUMBER
    /* Solve it by xor
       0^0 = 0
       1^1 = 0
       0^1 = 1
       1^0 = 1  */
}