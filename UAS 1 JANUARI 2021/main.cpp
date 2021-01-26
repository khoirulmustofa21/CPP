#include <iostream>

int main(){
	int i,jumlahData,inputData[100];
	int rataRata,jumlah,terbesar,terkecil;
	
	std::cout << "Masukan Jumlah Data : ";std::cin >> jumlahData; 
	
	for (i = 1; i <= jumlahData; i++){ // perulangan yang digunakan untuk input data array
		std::cout << "Masukan ke " << i << " : "; std::cin >> inputData[i];
		}

	//Terbesar
	terbesar = inputData[0];
	//proses perulangan untuk mencari nilai terbesar dan terkecil
	for (i = 1; i <= jumlahData; i++){
		if (inputData[i] > terbesar){ //pemilihan nilai terbesar
			terbesar = inputData[i];
		}
		else if (terkecil < inputData[i]){ //pemilihan nilai terkecil
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
	
		
		
	std::cout << "--------------------" << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << "Jumlah    : " << jumlah << std::endl;
	std::cout << "Rata-Rata : " << rataRata << std::endl;
	std::cout << "Terbesar  : " << terbesar << std::endl;
	std::cout << "Terkecil  : " << terkecil << std::endl;

}
