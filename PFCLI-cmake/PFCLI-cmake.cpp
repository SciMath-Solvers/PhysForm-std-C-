// PFCLI-cmake.cpp : Defines the entry point for the application.
//

#include "PFCLI-cmake.h"

using namespace std;


static void text(const char* ctx) {
	cout << ctx << endl;
};

int main()
{
	text("Hello from Cmake");
	return 0;
}
