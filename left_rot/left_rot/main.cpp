//
//  main.cpp
//  left_rot
//
//  Created by William Crupi on 5/27/19.
//  Copyright © 2019 William Crupi. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

/*Function to left Rotate arr[] of
 size n by 1*/
void leftRotatebyOne(vector<int> &arr, unsigned long n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    
    arr[i] = temp;
}

/*Function to left rotate arr[] of size n by d*/
void leftRotate(vector<int> &arr, int d, unsigned long n)
{
    for (int i = 0; i < d; i++)
        leftRotatebyOne(arr, n);
}

/* utility function to print an array */
void printArray(vector<int> arr, unsigned long n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

/* Driver program to test above functions */
int main()
{
    unsigned long n;
    vector<int> arr = { 1, 2, 3, 4, 5, 6, 7 };
    n = arr.size();
    
    // Function calling
    leftRotate(arr, 2, n);
    printArray(arr, n);
    
    return 0;
}
