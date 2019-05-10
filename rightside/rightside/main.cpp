//
//  main.cpp
//  rightside
//
//  Created by William Louis Crupi on 5/1/19.
//  Copyright © 2019 William Louis Crupi. All rights reserved.
//

#include <iostream>

#
using namespace std;

// Complete the staircase function below.

void staircase(int n) {
    int rowNumber = 0;
    int counter = 0;
    for (rowNumber = 0 ; rowNumber <= n ; rowNumber++)
    {
        // For each row N you have to insert numberOfRows - N spaces
        // before start printing sharps
        for (counter = 0 ; counter < n - rowNumber ; counter++)
            printf(" ");
        
        // For each row N you have to print N times the sharp character
        for (counter = 0 ; counter < rowNumber ; counter++)
            printf("#");
        
        // And finally a new line character for the next loop iteration
        printf("\n");
    }
    
    
    return;
}



int main()
{
    int n = 6;
    staircase(n);
    return 0;
}
