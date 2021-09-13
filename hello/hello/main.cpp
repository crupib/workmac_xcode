//
//  main.cpp
//  hello
//
//  Created by William Crupi on 9/8/21.
//

#include <iostream>
using namespace std;
int DemoConsoleOutput();

int main(int argc, const char * argv[]) {
    
    
    // insert code here...
    cout << "Hello, World of doucheness!\n";
    int x = 8;
    int y = 6;
    cout << std::endl;
    cout << x -y << " " << x * y << " " << x + y;
    cout << std::endl;
    cout << "Hello World" << endl;
//    DemoConsoleOutput();
    return DemoConsoleOutput();
}
int DemoConsoleOutput()
{
    cout << "This is a simple string literal" << endl;
    cout << "Writing number five: " << 5 << endl;
    cout << "Performing division 10 / 5 = "<< 10/5 << endl;
    cout << "Pi when approximated is 22/7 =  " << 22/7 << endl;
    cout << "Pi more accurately is 22/7 = " << 22.0/7 << endl;
    return 0;
}
