#include <iostream>
using namespace std;

int main()
{
    // Deklarasi variabel
    int matriks1[100][100], matriks2[100][100], hasil[100][100], hasil2[100][100];
    int pilihan, baris, kolom;

    // Input jumlah baris dan kolom
    cout << "Masukkan jumlah baris matriks: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> kolom;

    // Input elemen matriks pertama
    cout << "\n|===Masukkan elemen matriks pertama===|" << endl;
    for (int i = 0; i < baris; i++)
    {
        cout << "Masukkan element baris dan kolom ke-" << i + 1 << ": \n";
        for (int j = 0; j < kolom; j++)
        {
            cout << "Masukkan Elemen Matriks A [" << i << "][" << j << "] : ";
            cin >> matriks1[i][j];
        }
    }

    // Input elemen matriks kedua
    cout << "\n|===Masukkan elemen matriks kedua===|" << endl;
    for (int i = 0; i < baris; i++)
    {
        cout << "Masukkan element baris dan kolom ke-" << i + 1 << "\n";
        for (int j = 0; j < kolom; j++)
        {
            cout << "Masukkan Elemen Matriks B [" << i << "][" << j << "] : ";
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
        system("cls");
        // Lakukan operasi sesuai pilihan user
        switch (pilihan)
        {
        case 1:
            cout << "Input Matriks yang diinput tadi : " << endl;
            for (int i = 0; i < baris; i++)
            {
                //cout << "[";
                for (int j = 0; j < kolom; j++)
                {
                    cout << matriks1[i][j] << " ";
                    cout << matriks2[i][j] << " ";
                    cout << endl;
                }
                //cout << "]";
                cout << endl;
            }
            cout << "Hasil penambahan: " << endl;
            for (int i = 0; i < baris; i++)
            {
                //cout << "[ ";
                for (int j = 0; j < kolom; j++)
                {
                    hasil[i][j] = matriks1[i][j] + matriks2[i][j];
                    cout << hasil[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 2:
        cout << "Input Matriks yang diinput tadi : " << endl;
            for (int i = 0; i < baris; i++)
            {
                //cout << "[";
                for (int j = 0; j < kolom; j++)
                {
                    cout << matriks1[i][j] << " ";
                    cout << matriks2[i][j] << " ";
                    cout << endl;
                }
                //cout << "]";
                cout << endl;
            }
            cout << "Hasil pengurangan: " << endl;
            for (int i = 0; i < baris; i++)
            {
                //cout << "[ ";
                for (int j = 0; j < kolom; j++)
                {
                    hasil[i][j] = matriks1[i][j] - matriks2[i][j];
                    cout << hasil[i][j] << " ";
                }
                //cout << "]\n";
            }
            break;

        case 3:
        cout << "Input Matriks yang diinput tadi : " << endl;
            for (int i = 0; i < baris; i++)
            {
                //cout << "[";
                for (int j = 0; j < kolom; j++)
                {
                    cout << matriks1[i][j] << " ";
                    cout << matriks2[i][j] << " ";
                    cout << endl;
                }
                //cout << "]";
                cout << endl;
            }
            cout << "Hasil perkalian: " << endl;
            for (int i = 0; i < baris; i++)
            {
                //cout << "[ ";
                for (int j = 0; j < kolom; j++)
                {
                    hasil[i][j] = matriks1[i][j] * matriks2[i][j];
                    cout << hasil[i][j] << " ";
                }
                //cout << "]\n";
            }
            break;

        case 4:
        cout << "Input Matriks yang diinput tadi : " << endl;
            for (int i = 0; i < baris; i++)
            {
                //cout << "[";
                for (int j = 0; j < kolom; j++)
                {
                    cout << matriks1[i][j] << " ";
                    cout << matriks2[i][j] << " ";
                    cout << endl;
                }
                //cout << "]";
                cout << endl;
            }
            cout << "Hasil Transpose: " << endl;
            for (int i = 0; i < baris; i++)
            {
                //cout << "[ ";
                for (int j = 0; j < kolom; j++)
                {
                    hasil[i][j] = matriks1[j][i];
                    hasil2[i][j] = matriks2[j][i];
                    cout << hasil[i][j] << " "<<endl;
                    cout << hasil2[i][j] << " "<<endl;
                }
                //cout << "]\n";
            }
            break;

        case 5:
            cout << "Anda Keluar dari Program" << endl;
            break;

        default:
            cout << "Pilihan tidak tersedia" << endl;
            break;
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
