//
//  main.cpp
//  cin_example
//
//  Created by William Crupi on 9/13/21.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    int InputNumber;
    cout << "Enter an integer: ";
    cin >> InputNumber;
    cout << "Enter your name: ";
    string InputName;
    cin >> InputName;
    cout << InputName << " entered " << InputNumber << endl;
    return 0;
}
