#include <iostream>
#include <exception>
//untuk objek exception yang akan digunakan 
#include <array>
//untuk objek array yang akan kita gunakan 

using namespace std;
int main()
{
	cout << "awal progam" << endl; //penanda 1:...
	try {
		array<int, 3> data = { 3, 5, 7 };
		//pesan array integer 3 elemen
		cout << data.at(5) << endl;
		//memanggil array elemen ke 5
	}
	catch (exception& e) {
		//penangkap menggunakan objek exception
		cout << e.what() << endl;
		//akan di eksekusi karna array data hanya memiliki 3 elemen
	}
	cout << "baris progam yang terakhir" << endl;
	//penanda 2: bahwa progam berjalan tanpa berhenti meskipun terjdi kesalahan
	return 0;
}