//JAWABAN

//1.  pada pass pertama, membandingkan isi pada index 0 dan index 1, jika isi dari index 1 lebih besar dari index 0, maka isi dari index 0 dan 1 ditukar. berlanjut membandungkan isi pada index 1 dan 2. jika isi dari index 2 lebih besar dari index 1, maka isi dari kedua index ditukar. berlanjut hingga pembandingan n-1 dengan n-2. lalu lanjut ke pass kedua yaitu mengulang pembandingan isi dari index 0 dengan index ke 1 berurutan hingga ke index n-2. disini index n-1 tidak diikutkan dalam pembandingan karena nilai isi dari index n-1 merupakan nilai terbesar. maka setiap pass bertambah 1, pembanding akan mulai turun 1.
// Untuk menukar elemen, dibutuhkan sebuah wadah baru,  temp. jika isi dari index j+1 lebih kecil ari isi index j, nilai j akan dimaskkan ke dalam temp, lalu nilai j+1 dipindahkan ke dalam j, dan nilai j dikembalikan ke tempat j+1.

//2. algoritma tersebut membagi data dengan jarak(gap) bervariasi. misal pada pembagian pertama menggunakan gap 3, maka akan tebertuk 3 data yang terpisah. Tiga data tersebut lalu diurutkan menggunakan lgoritma insertion sort. Setelah ketiga data tersebut urut, akan dikembalikan lagi menjadi satu data yang utuh. Lalu akan dibagi lagi menggunakan gap yang berbeda dari pembagian yang sebelumnya dan diulang hingga banyak data yang sudah terurut. Lalu menggunakan algoritma insertion sort untuk mengurutkan data akhir.
//Untuk menukar elemen, dibutuhkan sebuah wadah baru,  temp. masukkan arr i ke dalam temp, dimana i perupakan j+1. bandingkan arr j dengan temp. jika temp lebih besar, maka data akan dikembalikan ke index 1. jika isi index i lebih kecil, isi index j akan dipindahkan ke i, lalu temp akan dipindahkan ke j.

//3. menggunakan algoritma shell sort jika data banyak dan algoritma insertion sort jika data tidak terlalu banyak. karena jika banyak data yang sudah berurutan proses yang terjadi akan berjalan lebih cepat dan tidak memerlukan banyak effort(lebih efisien)





#include <iostream>
using namespace std;

int nisrinasals[54]; 
int n;		 


void input(){ 
	while (true)
	{
		cout << "Masukkan banyaknya elemen pada array : "; 
		cin >> n;										   
		if (n <= 54)									   
			break;										   
		else
		{												
			cout << "\nArray dapat mempunyai maksimal 54 elemen. \n"; 
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukkan Elemen Array" << endl;
	cout << "=====================" << endl;
    cout << endl;

	for (int i = 0; i < n; i++)
	{										  
		cout << "Data ke-" << (i + 1) << ": "; 
		cin >> nisrinasals[i];						   
	}
}

void selectionSort() {
    for (int j = 0; j < n - 1; j++) {   //step 1
        int min_index = j;  //step 2a
        for (int i = j + 1; i < n; i++) {   //step 2b
            if (nisrinasals[i] < nisrinasals[min_index]) {  //step 2c
                min_index = i;
            }
        }
        if (min_index != j) {   //step 3
            int temp = nisrinasals[j];
            nisrinasals[j] = nisrinasals[min_index];
            nisrinasals[min_index] = temp;
        }
    }
}

void display(){
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "=================================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++)
	{
		cout << nisrinasals[j]; 
		if (j < n - 1)
		{
			cout << " -->";
		}
	}
	cout << endl;
	cout << endl;

	cout << " jumlah pass = " << n - 1 << endl;  
	cout << endl;
	cout << endl;
}

int main(){
	input();
    selectionSort();
	display();

	system("pause");
	return 0;
}