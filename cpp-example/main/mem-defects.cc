#include <iostream>
#include <cstring>

void memoryLeakFunction() {
    int* leak = new int[10];
    std::cout << leak[0] << std::endl;
}

void bufferOverflowFunction() {
    char buffer[5];
    buffer[5]='b';
    std::cout << buffer[5] << std::endl;
}

void useAfterFreeFunction() {
    int* ptr = new int(42);
    delete ptr;
    *ptr = 10;
}

void doubleFreeFunction() {
    int* ptr = new int(42);
    delete ptr;
    delete ptr; 
}

int main() {
    memoryLeakFunction();
    bufferOverflowFunction();
    useAfterFreeFunction();
    doubleFreeFunction();

    std::cout << "Program finished." << std::endl;
    return 0;
}