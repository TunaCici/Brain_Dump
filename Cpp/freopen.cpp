#include <cstdio>
#include <iostream>

int main(int argc, char **argv)
{
        std::freopen("hello.txt", "w", stdout);

        std::cout << "Hello?! Is this thing on?" << std::endl;

        return 0; 
}
