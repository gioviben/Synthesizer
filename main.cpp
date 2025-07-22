#include <iostream>

using namespace std;

#include <olcNoiseMaker.h>

int main() {

	wcout << "Synth part1" << endl;

	vector<wstring> devices = olcNoiseMaker<short>::Enumerate(); //chaimo metodo static Enumerate()

	for (auto d : devices) wcout << "Found Output Device:" << d << endl;







	return 0;
}