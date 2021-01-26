//#include <iostream>
//#include <algorithm>
//#include <array>


/*
using namespace std;

float jumlah_data;
float bilangan[100];
int i,j,k,bilangan2;

int main(){
    cout << "Masukan Jumlah Data : ";
    cin >> jumlah_data;
    
    //perulangan jumlah data
    for (i = 1; i <= jumlah_data; i++){
        cout << "Bilangan ke " << i << " : ";
        cin >> bilangan[i];
    }
    
    //pengurutan:
    for (j = 1; j <= jumlah_data; j++){
        for (k = 1; k <= jumlah_data; k++){
            
            if (bilangan[j] > bilangan[k]){
                bilangan2 = bilangan[j];
                bilangan[j] = bilangan[k];
                bilangan[k] = bilangan2;
            }
        }
    }

    //Menampilkan
    cout << "----------------------" << endl;
    cout << "Diurutkan besar ke kecil : ";
    
    for (j = 1; j <= jumlah_data; j++){
        cout <<" "<< bilangan[j];

    }
}
*/

//
//
//int main(){
//    int i,j,k,jumlah_data,angka;
//const size_t arraySize = 100;
//
//
//    std::cout << "Masukan Jumlah Data : ";
//    std::cin >> jumlah_data;
//    
//    //perulangan jumlah data
//    for (i = 1; i <= jumlah_data; i++){
//        std::cout << "Bilangan ke " << i << " : ";
//        std::cin >> angka[i];
//    }
//
//    std::sort(angka.begin(), angka.end());
//    printArray(angka);
//
//}

// C++ program to demonstrate default behaviour of
// sort() in STL.
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//	/*Here we take two parameters, the beginning of the
//	array and the length n upto which we want the array to
//	be sorted*/
//	sort(arr, arr + n);
//
//	cout << "\nArray after sorting using "
//			"default sort is : \n";
//	for (int i = 0; i < n; ++i)
//		cout << arr[i] << " ";
//
//	return 0;
//}


#include<iostream>
using namespace std;
int main()
{
  int Nilai[20];
  int i, j, N, l;
  int temp, U, Imaks;
  cout<<"Masukkan Banyak Bilangan : ";
  cin>>N;
  for(i=0; i<N; i++)
  {
    cout<<"Elemen ke-"<<i<<" : ";
    cin>>Nilai[i];
  }
  
  //Proses Cetak Sebelum diurutkan
  cout<<"\nData sebelum diurut : ";
  for(i=0; i<N; i++)
    cout<<Nilai[i];
  
  //Proses Pengurutan
  U=N-1;
  for(i=0; i<=N-2; i++)
  {
    Imaks = i;
    for(j=i+1; j<=U; j++)
    {
      if(Nilai[j] > Nilai[Imaks])
        Imaks = j;
    }
    temp = Nilai[i];
    Nilai[i] = Nilai[Imaks];
    Nilai[Imaks] = temp;
    cout<<endl;
    for(l=0; l<N; l++)
      cout<<Nilai[l];
  }
  cout<<"\nData Setelah di urut : ";
  for(i=0; i<N; i++)
    cout<<Nilai[i];
}