#include <iostream>
#include "functions/test.h"

int main(int argc, char** argv){
    std::cout <<"Performing tests..." << std::endl;

    int a = 2, b = 4;
    int result = GetGreater(a, b);
    if(result != b){
        return EXIT_FAILURE;
    }

    return 0;
}