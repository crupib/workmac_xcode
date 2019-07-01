//
//  main.cpp
//  signed_unsig
//
//  Created by William Crupi on 5/19/19.
//  Copyright © 2019 William Crupi. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    short int i;
    short unsigned int j;
    j = 60000;
    i = j;
    char letter;
    
    cout << i << " " << j << endl;
    for (letter = 'Z'; letter >= 'A'; letter--)
        cout << letter;
    cout << endl;
    cout << "\n\\\bx";
    cout << endl;
    return 0;
}
