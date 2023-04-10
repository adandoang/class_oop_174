#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM = " << nim;
		cout << "\nNama = " << nama;
	}
};

class Matakuliah {
private:
	int sks;
	string kode;
	string namaMk;
public:
	void inputMk() {

		cout << "\nMasukan jumlah SKS = ";
		cin >> sks;
		cout << "\nMasukan kode MK = ";
		cin >> kode;
		cout << "\nMasukan nama MK = ";
		cin >> namaMk;
	}

	void tampilMk() {
		cout << "\nJumlah sks = " << sks;
		cout << "\nKode MK = " << kode;
		cout << "\nNama MK = " << namaMk << endl;
	}
};

int main() {
	Mahasiswa mhs;
	Matakuliah mk;

	cout << "Input data mahasiswa:" << endl;
	cout << "Masukkan NIM: ";
	cin >> mhs.nim;
	cout << "Masukkan nama: ";
	cin >> mhs.nama;


