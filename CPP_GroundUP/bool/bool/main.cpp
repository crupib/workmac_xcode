//
//  main.cpp
//  bool
//
//  Created by William Crupi on 5/20/19.
//  Copyright © 2019 William Crupi. All rights reserved.
//

#include <iostream>
using namespace std;

//bool xor(bool a, bool b);

int main(int argc, const char * argv[]) {
    int p , q;
   
    cout << "Enter P (0 or 1) : ";
    cin >> p;
    cout << endl;
    cout << "Enter Q (0 or 1) : ";
    cin >> q;
    cout << endl;
    
    cout << "P AND Q: " << (p && q) << endl;
    cout << "P OR Q: " << (p || q) << endl;
    cout << "P XOR Q: " <<(p ^ q) << endl;
    return 0;
}
//bool xor(bool a, bool b){
//    return (a||b) && !(a && b);
//}
