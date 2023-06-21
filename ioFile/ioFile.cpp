#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	//membuaka file dalam mode menulis 
	ofstream outfile;
	//menunjukkan ke sebuah nama file 
	outfile.open("contohfile.txt");

	cout << ">= menulis file, \'q\' untuk keluar" << endl;

	