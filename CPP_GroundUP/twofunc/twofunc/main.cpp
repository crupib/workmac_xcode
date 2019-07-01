//
//  main.cpp
//  twofunc
//
//  Created by William Crupi on 5/18/19.
//  Copyright © 2019 William Crupi. All rights reserved.
//

#include <iostream>
using namespace std;
void myfunc();

int main(int argc, const char * argv[]) {
   
    cout << "In main()\n";
    myfunc();
    cout << "Back in main()"<< endl;
    return 0;
}
void myfunc()
{
    cout << " Inside myfunc() " << endl;
}
