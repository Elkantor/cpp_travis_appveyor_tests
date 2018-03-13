#include <iostream>
#include "functions/test.h"

int main(int argc, char** argv){
    std::cout <<"Performing tests..." << std::endl;

    int a = 2, b = 4;
    int result = GetGreater(a, b);
    if(result != b){
        std::cout << "The GetGreater(int a, int b) method don't passed the tests" << std::endl;
        return EXIT_FAILURE;
    }

    return 0;
}