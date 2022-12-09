#include <iostream>
#include <windows.h>

using namespace std;

int MatriksA[50][50];
int MatriksB[50][50];
int HasilJumlah[50][50];
int HasilKurang[50][50];
int HasilKali[50][50];

void Input_Nilai_Matriks(int BarisA, int KolomA, int BarisB, int KolomB);
void Output_Nilai_Matriks(int BarisA, int KolomA, int BarisB, int KolomB);
int Penjumlahan_Matriks(int BarisA, int KolomA, int BarisB, int KolomB);
int Pengurangan_Matriks(int BarisA, int KolomA, int BarisB, int KolomB);
int Perkalian_Matriks(int BarisA, int KolomA, int BarisB, int KolomB);

int main()
{
	int error, pilihan, ulang;
	int b1, b2, k1, k2;
	do {
		system("cls");
		cout << "SELAMAT DATANG DI MATRIKS \n\n";
cout << "BY M DZIKRUL HAKAM \n";
cout << "Prodi D4 Manajmen Informatika A \n";
cout << "NIM : 19051397001 \n\n";
		cout << "\t\t\tPraktikum ALPRO 2 - Operasi Matriks\n" << endl;
		cout << "\nMasukkan Ordo Matriks A" << endl;
		cout << "Baris : ";
		cin >> b1;
		cout << "Kolom : ";
		cin >> k1;
		cout << "\nMasukkan Ordo Matriks B" << endl;
		cout << "Baris : ";
		cin >> b2;
		cout << "Kolom : ";
		cin >> k2;

		Input_Nilai_Matriks(b1, k1, b2, k2);
		system("cLs");
		Output_Nilai_Matriks(b1, k1, b2, k2);
		cout << endl;
		system("PAUSE");
		system("cls");
		cout << "\nAda 3 Operasi Aritmatika Matriks" << endl;
		cout << "\t1. Penjumlahan\n\t2. Pengurangan\n\t3. Perkalian"
			<< endl;
		cout << "Tentukan Pilihan Anda : ";
		cin >> pilihan;
		if (pilihan == 1)
			error = Penjumlahan_Matriks(b1, k1, b2, k2);
		else if (pilihan == 2)
			error = Pengurangan_Matriks(b1, k1, b2, k2);
		else if (pilihan == 3)
			error == Perkalian_Matriks(b1, k1, b2, k2);
		else
		{
			system("cls");
			cout << "Maaf Pilihan anda Tidak ada dalam Daftar" << endl;
			cout << "Mau Ulang Memilih ?\n\t1. Ya\n\t2. Tidak" << endl;
			cout << "Tentukan Pilihan : ";
			cin >> ulang;
		}
		if (error == -1)
		{
			system("cls");
			cout << "Maaf Elemen Matriks tidak sesuai untuk Operasi tersebut" << endl << endl;
			cout << "Program Akan Otomatis Mengulang ke Awal"
				<< endl << endl;
			system("Pause");
		}
	} while (error == -1 || ulang == 1);

	cout << "\nTerima Kasih\n" << endl;
	system("Pause");
	return 0;
}

void Input_Nilai_Matriks(int BarisA, int KolomA, int BarisB, int KolomB)
{
	int B, K;
	cout << "\nMasukkan Nilai dari Setiap Elemen Matriks A" << endl;
	for (B = 0; B < BarisA; B++)
	{
		for (K = 0; K < KolomA; K++)
		{
			cout << "Baris " << B << " Kolom " << K << " : ";
			cin >> MatriksA[B][K];
		}
	}
	cout << "\nMasukkan Nilai dari Setiap Elemen Matriks B" << endl;
	for (B = 0; B < BarisB; B++)
	{
		for (K = 0; K < KolomB; K++)
		{
			cout << "Baris " << B << " Kolom " << K << " : ";
			cin >> MatriksB[B][K];
		}
	}
}

void Output_Nilai_Matriks(int BarisA, int KolomA, int BarisB, int KolomB)
{
	int B, K;
	cout << "\nIsi dari Matriks A" << endl;
	for (B = 0; B < BarisA; B++)
	{
		for (K = 0; K < KolomA; K++)
		{
			cout << "\t" << MatriksA[B][K];
		}
		cout << endl;
	}
	cout << "\nIsi dari Matriks B" << endl;
	for (B = 0; B < BarisB; B++)
	{
		for (K = 0; K < KolomB; K++)
		{
			cout << "\t" << MatriksB[B][K];
		}
		cout << endl;
	}
}

//Operasi Penjumlahan Matriks
int Penjumlahan_Matriks(int BarisA, int KolomA, int BarisB, int KolomB)
{
	int B, K;
	if (BarisA == BarisB && KolomA == KolomB)
	{
		for (B = 0; B < BarisA; B++)
		{
			for (K = 0; K < KolomA; K++)
			{
				HasilJumlah[B][K] = MatriksA[B][K] + MatriksB[B][K];
			}
		}
		for (B = 0; B < BarisA; B++)
		{
			for (K = 0; K < KolomA; K++)
			{
				cout << "\t" << HasilJumlah[B][K];
			}
			cout << endl;
		}
	}

	else
		return -1;
}

//Operasi Pengurangan Matriks
int Pengurangan_Matriks(int BarisA, int KolomA, int BarisB, int KolomB)
{
	int B, K;
	if (BarisA == BarisB && KolomA == KolomB)
	{
		for (B = 0; B < BarisA; B++)
		{
			for (K = 0; K < KolomA; K++)
			{
				HasilJumlah[B][K] = MatriksA[B][K] - MatriksB[B][K];
			}
		}
		for (B = 0; B < BarisA; B++)
		{
			for (K = 0; K < KolomA; K++)
			{
				cout << "\t" << HasilKurang[B][K];
			}
			cout << endl;
		}
	}
	else
		return -1;
}

// Operasi Perkalian Matriks
int Perkalian_Matriks(int BarisA, int KolomA, int BarisB, int KolomB)
{
	int B, K, S; // S untuk Sementara
	int isi; // variabel isi untuk nilai perkalian sebelum dijumlah
	if (KolomA == BarisB)
	{
		for (B = 0; B < BarisB; B++)
		{
			for (K = 0; K < KolomA; K++)
			{
				HasilKali[B][K] = 0;
				for (S = 0; S < KolomA; S++)
				{
					isi = MatriksA[B][S] * MatriksB[S][K];
					HasilKali[B][K] += isi;
				}
			}
		}
		for (B = 0; B < BarisA; B++)
		{
			for (K = 0; K < KolomB; K++)
			{
				cout << "\t" << HasilKali[B][K];
			}
			cout << endl;
		}
	}
	else
		return -1;
}