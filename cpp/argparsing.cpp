// MWE for argh.h by Adi Shavit (github.com/adishavit)
// compile with: g++ example.cpp
// run with: ./a.out -i III -o OOO -f FFF -v

#include <iostream>
#include "argh.h"

using namespace std;

int main(int argc, char *argv[])
{
	argh::parser cmdl;
	cmdl.parse(argc, argv, argh::parser::PREFER_PARAM_FOR_UNREG_OPTION);

	if (cmdl["-v"]) // check for flags with []
		cout << "verbose enabled." << endl;
	string i, o, f;
	cmdl("-i") >> i; // get values of args with ()
	cmdl("-o") >> o;
	cmdl("-f") >> f;
	cout << "-i:" << i << endl;
	cout << "-o:" << o << endl;
	cout << "-f:" << f << endl;

	string na; // not in list!
	cmdl("-na") >> na; // empty string
	cout << "-na:" << na << endl;

	return 0;
}
