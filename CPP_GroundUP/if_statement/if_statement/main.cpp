//
//  main.cpp
//  if_statement
//
//  Created by William Crupi on 5/18/19.
//  Copyright © 2019 William Crupi. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a, b;
    int count;
    cout << "Enter first number: ";
    cin >>a;
    cout << "Enter second number: ";
    cin >>b;
    if ( a < b) {
        cout << "First number is lest than second." << endl;
        cout << "Their difference is : " << b-a << endl;
    }
//    for (count = 1; count <= 100; count=count+1)
//        cout << count << " " ;
    return 0;
}
