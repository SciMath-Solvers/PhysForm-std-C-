

#include "PFCLI-cmake.h"

using namespace std;

typedef const char* str;

static void text(str ctx) {
	cout << ctx << endl;
};

int main()
{
	text("--------------------------------Physium Formulae for Standard C++ 23 App Version: v1.0.0--------------------------------");
	cin >> "Press Enter to continue...";
	return 0;
}
// use cl PFCLI-cmake.cpp -o PhysiumFormulae.exe for compile?