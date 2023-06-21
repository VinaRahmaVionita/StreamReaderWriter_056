#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string namafile;

	cout << "masukkan nama file : ";
	cin >> namafile;

	//membuaka file dalam mode menulis 
	ofstream outfile;
	//menunjukkan ke sebuah nama file 
	outfile.open(namafile + ".txt", ios::out);

	cout << ">= menulis file, \'q\' untuk keluar" << endl;

	
