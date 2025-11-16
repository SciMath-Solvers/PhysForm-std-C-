#include <iostream>
#include <cstdlib>

using namespace std;

typedef const char* str;
typedef long double ldbl;

static void cls() {
    std::system("clear");
}

static void text(str ctx){
    cout << ctx << endl;
}

int main() {
    text("-----------------------------------------------------------------------------------------------------------------------------Physium Formulae for Standard C++-------------------------------------------------------------------------------------------------------------------------------");
    text("---------------------------------------------------------------------------------------------------------------------------------------- v1.0.0 ---------------------------------------------------------------------------------------------------------------------------------------------");
    text("                                                                                                                                       [1] Solvers");
    text("                                                                                                                                       [2] Formulas");
    text("                                                                                                                                       [3] Credits/App Info");
    text("                                                                                                                                       [4] Exit");
    int mmc;
    cin >> mmc;
    cls();
    switch(mmc) {
        case 1:
        {
            text("WIP");
            break;
        };
        case 2:
        {
            text("WIP");
            break;
        };
        case 3:
        {
            text("Physium Formulae App Info:\nPhysium Formulae is a Physics Solver for ALL Platforms\nCurrent Version:v1.0.0,std C++\nLanguage: C++");
            text("Credits:\n    Programmers: \n@PhysForm\n@PyCSharp");
            break;
        };
        case 4:
        {
            break;
        };
        default:
        {
            text("Invalid Input");
            text("Please Restart the Program");
        };
    };
    int Exit_CODE;
    cin >> Exit_CODE;
    cls();
    return 0;
}
