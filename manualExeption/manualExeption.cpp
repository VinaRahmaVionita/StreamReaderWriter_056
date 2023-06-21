#include <iostream>
using namespace std;

int main()
{
	try {
		cout << " selamat belajar di prodi TI UMY" << endl;
		throw 0.5; //melemparkan sebuah integer maka 
		cout << "pernyataan tidak akan di eksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan di eksekusi 
		cout << "pengecualian akan di eksekusi" << endl;
	}
	catch (...) {
		//jika selain integer maka blok ini akan di eksekusi
		cout << " default pengecualian diexsekusi" << endl;
	}

	return 0;
}