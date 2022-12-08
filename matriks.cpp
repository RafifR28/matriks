#include <iostream>
using namespace std;

const int MAX_MATRIX_SIZE = 100;

// Fungsi untuk menambahkan dua matriks
void addMatrices(int a[][MAX_MATRIX_SIZE], int b[][MAX_MATRIX_SIZE], int c[][MAX_MATRIX_SIZE], int m, int n) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      c[i][j] = a[i][j] + b[i][j];
    }
  }
}

// Fungsi untuk mengurangi dua matriks
void subtractMatrices(int a[][MAX_MATRIX_SIZE], int b[][MAX_MATRIX_SIZE], int c[][MAX_MATRIX_SIZE], int m, int n) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      c[i][j] = a[i][j] - b[i][j];
    }
  }
}

// Fungsi untuk melakukan perkalian matriks
void multiplyMatrices(int a[][MAX_MATRIX_SIZE], int b[][MAX_MATRIX_SIZE], int c[][MAX_MATRIX_SIZE], int m, int n, int p) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < p; j++) {
      c[i][j] = 0;
      for (int k = 0; k < n; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
}

// Fungsi untuk mencetak matriks
void printMatrix(int a[][MAX_MATRIX_SIZE], int m, int n) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  int a[MAX_MATRIX_SIZE][MAX_MATRIX_SIZE], b[MAX_MATRIX_SIZE][MAX_MATRIX_SIZE], c[MAX_MATRIX_SIZE][MAX_MATRIX_SIZE];
  int m, n;

  cout << "Masukkan ukuran matriks (m x n): ";
  cin >> m >> n;

  cout << "Masukkan elemen matriks A: " << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  cout << "Masukkan elemen matriks B: " << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> b[i][j];
    }
  }

  // Menambahkan matriks A dan B
  addMatrices(a, b, c, m, n);
  cout << "Hasil penambahan matriks A dan B: " << endl;
  printMatrix(c, m, n);

  // Mengurangi matriks A dan B
  subtractMatrices(a, b, c, m, n);
  cout << "Hasil pengurangan matriks A dan B: " << endl;
}

