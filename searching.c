#include <stdio.h>
#include <string.h>
#include "Produk.h" // Menghubungkan file header Produk

void cariProduk(Produk data[], int n)
{
    char key[50]; // Menyimpan nama produk yang dicari

    printf("\nMasukkan nama produk: ");
    scanf(" %[^\n]", key); // Input nama produk

    for (int i = 0; i < n; i++) // Mencari produk satu per satu
    {
        if (strcmp(data[i].nama, key) == 0) // Cek apakah nama cocok
        {
            printf("\n================ PRODUK DITEMUKAN ================\n");
            printf("Nama Produk   : %s\n", data[i].nama);
            printf("Harga         : %.0f\n", data[i].harga);
            printf("Terjual       : %d\n", data[i].jumlahTerjual);
            printf("Profit/item   : %.0f\n", data[i].profit);
            printf("Total Profit  : %.0f\n", data[i].totalProfit);
            printf("==================================================\n");
            return; // Keluar jika produk ditemukan
        }
    }

    printf("\nProduk tidak ditemukan!\n"); // Jika tidak ada yang cocok
}
