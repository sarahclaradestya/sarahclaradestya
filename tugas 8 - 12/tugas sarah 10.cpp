#include <stdio.h>

int main() {
  // Deklarasikan dan inisialisasi array A dan B
  int A[12] = {12, 17, 15, 11, 25, 12, 14, 9, 8, 7, 6, 5};
  int B[12] = {4, 3, 2, 1, 0, 10, 11, 12, 13, 14, 15, 16};

  // Deklarasikan array C dengan ukuran maksimum 24
  int C[24];

  // Deklarasikan variabel untuk menyimpan indeks array C
  int index = 0;

  // Loop untuk menyalin nilai dari array A ke array C
  for (int i = 0; i < 12; i++) {
    // Jika elemen array A lebih besar dari 10
    if (A[i] > 10) {
      // Salin elemen ke array C
      C[index] = A[i];
      // Tingkatkan indeks array C
      index++;
    }
  }

  // Loop untuk menyalin nilai dari array B ke array C
  for (int i = 0; i < 12; i++) {
    // Jika elemen array B lebih besar dari 10
    if (B[i] > 10) {
      // Salin elemen ke array C
      C[index] = B[i];
      // Tingkatkan indeks array C
      index++;
    }
  }

  // Cetak isi array C
  printf("Isi array C adalah:\n");
  for (int i = 0; i < index; i++) {
    printf("%d ", C[i]);
  }
  printf("\n");

  return 0;
}
