#include <iostream>
using namespace std;

int main(){
	int i,jumlahData,inputData[100];
	int rataRata,jumlah,terbesar,terkecil;
	
	cout << "Masukan Jumlah Data : ";cin >> jumlahData; 
	
	for (i = 1; i <= jumlahData; i++){ // perulangan yang digunakan untuk input data array
		cout << "Masukan ke " << i << " : "; cin >> inputData[i];
		}

	//Terbesar
	terkecil = inputData[1];
	terbesar = inputData[1];
	//proses perulangan untuk mencari nilai terbesar dan terkecil
	for (i = 1; i <= jumlahData; i++){
		if (inputData[i] > terbesar){ //pemilihan nilai terbesar
			terbesar = inputData[i];
		}
		else if (inputData[i] < terkecil){ //pemilihan nilai terkecil
			terkecil = inputData[i];
		}	
	}		

	//proses penjumlahan untuk nilai jumlah	
	jumlah = 0;
	for (i = 1; i <= jumlahData; i++){
		jumlah = jumlah + inputData[i];
		}
		
	//proses mencari nilai rata-rata
	rataRata = jumlah/jumlahData;
	
		
		
	cout << "--------------------" << endl;
	cout << "--------------------" << endl;
	cout << "Jumlah    : " << jumlah << endl; //menampilkann hasil nilai penjumlahan 
	cout << "Rata-Rata : " << rataRata << endl; //menampilan hasil nilai rata-rata 
	cout << "Terbesar  : " << terbesar << endl; //menampilkan hasil nilai terbesar
	cout << "Terkecil  : " << terkecil << endl; //menampilkan hasil nilai terkecil
	
return 0;
}
