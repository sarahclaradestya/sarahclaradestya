#include <stdio.h>

int main() {
	int A[11]; // membuar array dengan 11 elemen 
	int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
	int i, j = 0;
	
	// menginput data dan menyimpan nilai genap ke dalam array A
	printf("Data dalam dokumen:\n");
	for (i = 0; i < 11; i++) {
		printf("%d ", data[i]); // Mencetak data satu per satu
		if (data [i] % 2 == 0) {
			A[j] = data[i];
			j++;
		}
    }
    //Mencetak isi array A
    printf("\nIsi array A: ");
    for (i =0; i < j; i++) {
    	printf("%d ", A[i]);
	}
	printf("\n");
	
	return 0;
#include <stdio.h>

int main() {
    int nilai[10];
    
    // Input nilai mahasiswa
    printf("Masukkan 10 nilai mahasiswa:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Nilai mahasiswa %d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    // Cetak daftar nilai yang lulus
    printf("\nDaftar nilai mahasiswa yang lulus:\n");
    for (int i = 0; i < 10; ++i) {
        if (nilai[i] >= 60) {
            printf("Mahasiswa %d: %d\n", i + 1, nilai[i]);
        }
    }

    return 0;
}
