
#include <iostream>

void func1();
void func2();

int count;

int main(int argc, const char * argv[]) {
    int i;
    for (i = 0; i < 10; i++) {
        count = i * 2;
        func1();
    }
    std::cout << std::endl;
    
    return 0;
}
void func1()
{
    std::cout << "global count: " << count << std::endl;
    func2();
}
void func2()
{
    int count;
    for (count = 0; count < 3; count++) std::cout << '.';
}

