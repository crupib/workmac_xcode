//
//  main.cpp
//  var_init
//
//  Created by William Crupi on 5/20/19.
//  Copyright © 2019 William Crupi. All rights reserved.
//

#include <iostream>
using namespace std;
void total(int x);

int main(int argc, const char * argv[]) {
    int t;
//    total(5);
//    total(6);
//    cout << "Enter a number: ";
//    cin >> t;
//    total(t);
    cout << "------------------" <<endl;
    int x, y;
    x = 10;
    y = 3;
    cout << x/y << endl;
    cout << x%y << endl;
    x = 1;
    y = 2;
    cout << x/y << " " << x%y << endl;
    return 0;
}
void total(int x)
{
    int sum=0;
    int i , count;
    for(i=1; i <=x; i++){
        sum = sum + i;
        for (count = 0; count < 10; count++) cout << '.';
        cout << "The current sub is " << sum << '\n';
    }
}
