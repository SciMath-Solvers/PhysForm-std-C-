#include <vector>
#include <iostream>

extern "C" {}

typedef const char* str;
typedef long double ldbl;
using namespace std;

void text(const char* text) {
	cout << text << endl;
}

dbl input() {
    dbl I;
    cin >> I >> "";
    return I;
}

int main()
{
    text("------------------------------------------------ Physium Formulae for Std C++ (CLI) ------------------------------------------------");
    text("                                                              v1.0.0\n");
    text("                                                            [1] Solvers");
    text("                                                            [2] Formulas");
    text("                                                            [3] Credits");
    text("                                                            [4] App Info");
    text("                                                            [5] Exit");
    input();
    return 0;
}

/*
to compile:

g++ main.cpp -o PhysForm

or 

cl hello.cpp -o PhysForm

    cl /EHsc /Fo"obj\\" /Fe"builds\\PhysForm.exe" main.cpp

*/
