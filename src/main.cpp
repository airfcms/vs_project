#include <iostream>

void func(int i)
{
    if (i) {
        int i = 1; // C4189, C4457
        return;
    }
}

int main()
{
    std::cout << "Hello World!\n";
}
