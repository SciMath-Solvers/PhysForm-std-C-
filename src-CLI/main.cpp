#include <vector>
#include <iostream>

extern "C" {}

typedef const char* str;
typedef long double ldbl;

void text(str ctx){
    std::cout << ctx << std::endl;
};

int main() {
    
    return 0;
}