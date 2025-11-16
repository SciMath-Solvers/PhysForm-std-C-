// PFCLI-cmake.cpp : Defines the entry point for the application.
//

#include "PFCLI-cmake.h"

using namespace std;

typedef const char* str;

static void text(str ctx) {
	cout << ctx << endl;
};

int main()
{
	text("---------------------------------Physium Formulae for Standard C++ 23 App Version: v1.0.0---------------------------------");
	return 0;
}
