//
//  main.cpp
//  fractions
//
//  Created by William Crupi on 5/21/19.
//  Copyright © 2019 William Crupi. All rights reserved.
//

#include <iostream>
#include <cstdlib>

using namespace std;
int main(int argc, const char * argv[]) {
//    int i;
//    for (i = 1; i <= 100; ++i)
//    {
//        cout << i << "/2 is: "<<(float)i/2 << endl;
//    }
    int magic;
    int guess;
    magic = rand();
    cout << "Enter your guess: ";
    cin >> guess;
    if (guess == magic) {
        cout << "** Right **" << endl;
        cout << magic << " is the magic number." << endl;
    }
    else {
         cout << "...Sorry, your wrong. " << magic << endl;
        if (guess > magic) cout << " Your guess is too high."<<endl;
        else cout << " Your guess is too low. " << endl;
        
    }
    
    return 0;
}
