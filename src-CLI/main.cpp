#include <vector>
#include <iostream>

extern "C" {}

typedef const char* str;
typedef long double ldbl;
using namespace std;

void text(const char* text) {
	cout << text << endl;
}

ldbl input() {
    ldbl I;
    cin >> I >> "";
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        text("Invalid input. Please enter a valid number.");
        return input();
	}
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

    cl /EHsc /Fo"obj\\" /Fe"builds\\PhysForm.exe" src-CLI\main.cpp

*/
