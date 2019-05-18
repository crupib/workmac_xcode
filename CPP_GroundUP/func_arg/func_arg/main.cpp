

#include <iostream>
#include <cstdlib>
using namespace std;
void mul(int x, int y);

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << abs(-10) << endl;
    mul(10,20);
    mul(5,6);
    mul(8,9);
    return 0;
}
void mul(int x, int y)
{
    cout << x * y << " " << endl;
}
