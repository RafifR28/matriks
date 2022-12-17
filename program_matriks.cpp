/*Menentukan oprasi pada matriks yang ber ordo 2x2 yang diketahui yaitu:
1. Penjumlahan Matriks
2. Pengurangan Matriks
3. Perkalian Matriks
4. Determinan Matriks */

#include <iostream> //library yang digunakan untuk input dan output, jika tidak ada library ini maka program tidak dapat berjalan untuk input dan output

using namespace std; // menggunakan namespace std agar tidak perlu menuliskan std::cout atau std::cin

int main() // fungsi utama yang akan dijalankan pertama kali saat program dijalankan
{
	do // untuk melakukan perulangan do-while
	{

		int ar1[5][5], ar2[5][5], ar3[5][5]; // ar adalah matriks
		int a, b, c, d, x, y, z, m, pil, jumlah;
		int da, db, dc, dd, de, df, dg, dh, di, det;
		char ulang;

		cout << "|--------========MENGHITUNG OPERASI MATRIKS========--------|\n\n";
		cout << "=======================================================================\n";
		cout << "|-----------------------Rafif Ramadan---------------------------------|\n";
		cout << "|----------------------A11.2021.13380---------------------------------|";

		cout << "\nPILIH OPERASI YANG ANDA INGINKAN TENTANG MATRIKS DIBAWAH INI : \n"; // MENAMPILKAN SUATU PERHITUNGAN SEBUAH MATRIKS
		cout << "\n[1] PENJUMLAHAN\n";
		cout << "\n[2] PENGURANGAN\n";
		cout << "\n[3] PERKALIAN\n";
		cout << "\n[4] DETERMINAN\n";
		cout << "\nAnda Memilih Angka : ";
		cin >> pil;

		switch (pil) // menggunakan switch-case untuk memilih operasi yang akan dijalankan
		{
		case 1: // Penjumlahan
			system("cls");
			cout << "\n|--------========MENGHITUNG PENJUMLAHAN MATRIKS========--------|\n";
			cout << "\nMasukkan data matriks pertama pilihan anda\n";
			cout << "Masukkan untuk baris 1 : ";
			cin >> a;
			cout << "Masukkan untuk kolom 1 : ";
			cin >> b;

			cout << "\nMasukkan data matriks kedua pilihan anda\n";
			cout << "Masukkan untuk baris 2 : ";
			cin >> c;
			cout << "Masukkan untuk kolom 2 : ";
			cin >> d;

			if (a != c || b != d)
			{
				cout << "Ordo Matriks tidak sama\n";
				break;
			}
			cout << "\nMasukkan angka pertama pada matriks\n";
			for (x = 0; x < a; x++) // perulangan untuk input matriks pertama
			{
				for (y = 0; y < b; y++)
				{
					cout << "Matriks satu "
						 << "[" << x << "]"
						 << "[" << y << "]"
						 << " :";
					cin >> ar1[x][y];
				}
			}

			cout << "\nMatriks satu :\n";
			for (x = 0; x < a; x++) // perulangan untuk menampilkan matriks pertama
			{
				for (y = 0; y < b; y++)
				{
					cout << ar1[x][y] << " ";
				}
				cout << "\n\n";
			}

			cout << "\nMasukkan angka kedua pada matriks\n";
			for (x = 0; x < c; x++) // perulangan untuk input matriks kedua
			{
				for (y = 0; y < d; y++)
				{
					cout << "Matriks dua "
						 << "[" << x << "]"
						 << "[" << y << "]"
						 << " : ";
					cin >> ar2[x][y];
				}
			}
			cout << "\nMatriks dua :\n";
			for (x = 0; x < c; x++) // perulangan untuk menampilkan matriks kedua
			{
				for (y = 0; y < d; y++)
				{
					cout << ar2[x][y] << " ";
				}
				cout << "\n\n";
			}
			cout << "-------------------------------\n||========Hasil Operasi========||\n\n";
			for (x = 0; x < a; x++) // perulangan untuk menampilkan hasil operasi penjumlahan matriks
			{
				for (y = 0; y < b; y++)
				{
					ar3[x][y] = ar1[x][y] + ar2[x][y];
					cout << ar3[x][y] << " ";
				}
				cout << "\n\n";
			}
			system("pause");
			system("cls");
			break;

		case 2: // Pengurangan
			system("cls");
			cout << "\n|--------========MENGHITUNG PENGURANGAN MATRIKS========--------|\n";
			cout << "\nMasukkan data matriks pertama pilihan anda\n";
			cout << "Masukkan untuk baris 1 : ";
			cin >> a;
			cout << "Masukkan untuk kolom 1 : ";
			cin >> b;

			cout << "\nMasukkan data matriks kedua pilihan anda\n";
			cout << "Masukkan untuk baris 2 : ";
			cin >> c;
			cout << "Masukkan untuk kolom 2 : ";
			cin >> d;

			cout << "\nMasukkan angka pertama pada matriks \n";
			if (a != c || b != d)
			{
				cout << "Ordo Matriks tidak sama\n";
				break;
			}
			for (x = 0; x < a; x++) // perulangan untuk input matriks pertama
			{
				for (y = 0; y < b; y++)
				{
					cout << "Matriks satu "
						 << "[" << x << "]"
						 << "[" << y << "]"
						 << " :";
					cin >> ar1[x][y];
				}
			}

			cout << "\nMatriks satu :\n";
			for (x = 0; x < a; x++) // perulangan untuk menampilkan matriks pertama
			{
				for (y = 0; y < b; y++)
				{
					cout << ar1[x][y] << " ";
				}
				cout << "\n\n";
			}

			cout << "\nMasukkan angka kedua pada matriks \n";
			for (x = 0; x < c; x++) // perulangan untuk input matriks kedua
			{
				for (y = 0; y < d; y++)
				{
					cout << "Matriks dua "
						 << "[" << x << "]"
						 << "[" << y << "]"
						 << " :";
					cin >> ar2[x][y];
				}
			}
			cout << "\nMatriks dua :\n";
			for (x = 0; x < c; x++) // perulangan untuk menampilkan matriks kedua
			{
				for (y = 0; y < d; y++)
				{
					cout << ar2[x][y] << " ";
				}
				cout << "\n\n";
			}
			cout << "-------------------------------\n||========Hasil Operasi========||\n\n";
			for (x = 0; x < a; x++) // perulangan untuk menampilkan hasil operasi pengurangan matriks
			{
				for (y = 0; y < b; y++)
				{
					ar3[x][y] = ar1[x][y] - ar2[x][y];
					cout << ar3[x][y] << " ";
				}
				cout << "\n\n";
			}
			system("pause");
			system("cls");
			break;

		case 3: // perkalian
			system("cls");
			cout << "\n|--------========MENGHITUNG PERKALIAN MATRIKS========--------|\n";
			cout << "\nMasukkan data matriks pertama pilihan anda\n";
			cout << "Masukkan untuk baris 1 : ";
			cin >> a;
			cout << "Masukkan untuk kolom 1 : ";
			cin >> b;

			cout << "\nMasukkan data matriks kedua pilihan anda\n";
			cout << "Masukkan untuk baris 2 : ";
			cin >> c;
			cout << "Masukkan untuk kolom 2 : ";
			cin >> d;

			cout << "\nMasukkan angka pertama pada matriks \n";
			if (a != c || b != d)
			{
				cout << "Ordo Matriks tidak sama\n";
				break;
			}
			for (x = 0; x < a; x++) // perulangan untuk input matriks pertama
			{
				for (y = 0; y < b; y++)
				{
					cout << "Matriks satu "
						 << "[" << x << "]"
						 << "[" << y << "]"
						 << " :";
					cin >> ar1[x][y];
				}
			}

			cout << "\nMatriks satu :\n";
			for (x = 0; x < a; x++) // perulangan untuk menampilkan matriks pertama
			{
				for (y = 0; y < b; y++)
				{
					cout << ar1[x][y] << " ";
				}
				cout << "\n\n";
			}

			cout << "\nMasukkan angka kedua pada matriks \n";
			for (x = 0; x < c; x++) // perulangan untuk input matriks kedua
			{
				for (y = 0; y < d; y++)
				{
					cout << "Matriks dua "
						 << "[" << x << "]"
						 << "[" << y << "]"
						 << " :";
					cin >> ar2[x][y];
				}
			}
			cout << "\nMatriks dua :\n";
			for (x = 0; x < c; x++) // perulangan untuk menampilkan matriks kedua
			{
				for (y = 0; y < d; y++)
				{
					cout << ar2[x][y] << " ";
				}
				cout << "\n\n";
			}
			for (x = 0; x < a; x++) // perulangan untuk melakukan proses perkalian matriks
			{
				for (y = 0; y < d; y++)
				{
					jumlah = 0;
					for (z = 0; z < c; z++)
					{
						jumlah = jumlah + ar1[x][z] * ar2[z][y]; // Z itu mengambarkan suatu titik untuk menampilkan hasil dari perkalian [X][y].
						ar3[x][y] = jumlah;
					}
				}
			}
			cout << "-------------------------------\n||=======Hasil Operasi========||\n\n"
				 << endl;
			for (x = 0; x < a; x++) // perulangan untuk menampilkan hasil operasi perkalian matriks
			{
				for (y = 0; y < d; y++)
				{
					cout << ar3[x][y] << " ";
				}
				cout << "\n\n";
			}
			system("pause");
			system("cls");
			break;

		case 4: // Determinan
			system("cls");
			cout << "\n|--------========MENGHITUNG DETERMINAN MATRIKS YANG ANDA PILIH========--------|\n";
			cout << "\n\nPILIH OPRASI YANG ANDA INGINKAN TENTANG MATRIKS :\n";
			cout << "[1]. Ordo 2x2\n";
			cout << "[2]. Ordo 3x3\n";
			cout << "\nPilihan Ordo Yang Anda Ingin Inputkan  :";
			cin >> pil;

			switch (pil)
			{
			case 1: // Ordo 2x2
				cout << "\nMasukan Inputan Variable Anda" << endl;
				cout << "[1,1]:";
				cin >> da;
				cout << "[1,2]:";
				cin >> db;
				cout << "[2,1]:";
				cin >> dc;
				cout << "[2,2]:";
				cin >> dd;

				det = (da * dd) - (db * dc);
				cout << "\n--------------" << endl;
				cout << "Hasil determinan =";
				cout << det;

				break;

			case 2: // Ordo 3x3
				cout << "\nMasukan Inputan Variable Anda" << endl;
				cout << "[1,1]: ";
				cin >> da;
				cout << "[1,2]: ";
				cin >> db;
				cout << "[1,3]: ";
				cin >> dc;
				cout << "[2,1]: ";
				cin >> dd;
				cout << "[2,2]: ";
				cin >> de;
				cout << "[2,3]: ";
				cin >> df;
				cout << "[3,1]: ";
				cin >> dg;
				cout << "[3,2]: ";
				cin >> dh;
				cout << "[3,3]: ";
				cin >> di;

				det = (da * de * di) + (db * df * dg) + (dc * dd * dh) - (dc * de * dg) - (db * dd * di) - (da * df * dh); // Rumus determinan
				cout << "\n-------------" << endl;
				cout << "Hasil Determinan = ";
				cout << det;
				break;
			default:
				cout << "\nTidak ada pilihan coba untuk RUNNING kembali perogram anda!!" << endl;
			}
		}
		cout << "\n\nJika Anda Ingin Mengulang Tuliskan Huruf Y =";
		cin >> ulang;			 // inputan untuk mengulang program
	} while ("\n\nUlang" < "Y"); // perulangan untuk mengulang program
}
