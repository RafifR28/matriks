#include <iostream>
using namespace std;

int main()
{
    // Deklarasi variabel
    int matriks1[10][10], matriks2[10][10], hasil[10][10], hasil2[10][10];
    int pilihan, baris, kolom;

    // Input jumlah baris dan kolom
    cout << "Masukkan jumlah baris matriks: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> kolom;

    // Input elemen matriks pertama
    cout << "Masukkan elemen matriks pertama: " << endl;
    for (int i = 0; i < baris; i++)
    {
        cout << "Masukkan element for baris ke-" << i+1 << ": ";
        for (int j = 0; j < kolom; j++)
        {
            //cout << "Masukkan Elemen Matriks A [" << i << "][" << j << "] : ";
            cin >> matriks1[i][j];
        }
    }

    // Input elemen matriks kedua
    cout << "Masukkan elemen matriks kedua: " << endl;
    for (int i = 0; i < baris; i++)
    {
        cout << "Masukkan element for baris ke-" << i+1 << ": ";
        for (int j = 0; j < kolom; j++)
        {
            //cout << "Masukkan Elemen Matriks A [" << i << "][" << j << "] : ";
            cin >> matriks2[i][j];
        }
    }
    do
    {
        // Tampilkan menu operasi
        cout << "\nPilih operasi yang ingin dilakukan:" << endl;
        cout << "1. Penambahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Transpos" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan [1-4] : ";
        cin >> pilihan;

        // Lakukan operasi sesuai pilihan user
        switch (pilihan)
        {
        case 1:
            cout << "Hasil penambahan: " << endl;
            for (int i = 0; i < baris; i++)
            {
                cout << "[ ";
                for (int j = 0; j < kolom; j++)
                {
                    hasil[i][j] = matriks1[i][j] + matriks2[i][j];
                    cout << hasil[i][j] << " ";
                }
                cout << "]\n";
            }
            break;

        case 2:
            cout << "Hasil pengurangan: " << endl;
            for (int i = 0; i < baris; i++)
            {
                cout << "[ ";
                for (int j = 0; j < kolom; j++)
                {
                    hasil[i][j] = matriks1[i][j] - matriks2[i][j];
                    cout << hasil[i][j] << " ";
                }
                cout << "]\n";
            }
            break;

        case 3:
            cout << "Hasil perkalian: " << endl;
            for (int i = 0; i < baris; i++)
            {
                cout << "[ ";
                for (int j = 0; j < kolom; j++)
                {
                    hasil[i][j] = matriks1[i][j] * matriks2[i][j];
                    cout << hasil[i][j] << " ";
                }
                cout << "]\n";
            }
            break;

        case 4:
            cout << "Hasil Transpose: " << endl;
            for (int i = 0; i < baris; i++)
            {
                cout << "[ ";
                for (int j = 0; j < kolom; j++)
                {
                    hasil[i][j] = matriks1[j][i];
                    hasil2[i][j] = matriks2[j][i];
                    cout << hasil[i][j] << " ";
                    cout << hasil2[i][j] << " ";
                }
                cout << "]\n";
            }
            break;

        default:
            cout << "Anda tidak memilih pilihan yang tersedia";
        }

    } while (pilihan != 5);

    // Tampilkan hasil operasi
    /*for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }*/

    return 0;
}
