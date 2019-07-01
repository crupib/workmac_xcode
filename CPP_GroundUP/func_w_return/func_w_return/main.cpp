//
//  main.cpp
//  func_w_return
//
//  Created by William Crupi on 5/18/19.
//  Copyright © 2019 William Crupi. All rights reserved.
//

#include <iostream>
using namespace std;
int mul(int x, int y);
int main(int argc, const char * argv[]) {
    int answer;
    answer = mul(10,11);
    cout << "the answer is " << answer << endl;
    return 0;
}
int mul(int x, int y)
{
    return x*y;
}
