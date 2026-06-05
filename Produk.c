#include <stdio.h>
#include <string.h>
#include "Produk.h"

// Menambahkan data produk baru 
void tambahProduk(Produk data[], int *n)
{
    // Mengecek apakah kapasitas data sudah penuh
    if(*n >= MAX)
    {
        printf("\nError Data sudah penuh!\n");
        return;
    }

    printf("\n[INPUT PRODUK]\n");

    // Input nama produk
    printf("Nama Produk        : ");
    scanf(" %[^\n]", data[*n].nama);

    // Input harga produk
    printf("Harga              : ");
    scanf("%f", &data[*n].harga);

    // Input jumlah produk yang terjual
    printf("Jumlah Terjual     : ");
    scanf("%d", &data[*n].jumlahTerjual);

    // Input profit per barang
    printf("Profit per barang  : ");
    scanf("%f", &data[*n].profit);

    // Menghitung total profit
    data[*n].totalProfit = data[*n].profit * data[*n].jumlahTerjual;

    // Menambahkan produk ke antrian
    enqueue(&q, data[*n]);

    // Menambah jumlah data
    (*n)++;

    printf("\nProduk berhasil ditambahkan\n");
}

/* Menampilkan seluruh data produk */
void tampilkanProduk(Produk data[], int n)
{
    // Mengecek apakah data kosong
    if(n == 0)
    {
        printf("\nData kosong!\n");
        return;
    }

    printf("\n+================================================================================+\n");
    printf("|                               DATA PRODUK                                     |\n");
    printf("+--------------------------------------------------------------------------------+\n");
    printf("| No | Nama Produk           | Harga   | Terjual | Profit  | Total Profit       |\n");
    printf("+--------------------------------------------------------------------------------+\n");

    // Menampilkan data produk satu per satu
    for(int i = 0; i < n; i++)
    {
        printf("| %-2d | %-20.20s | %-7.0f | %-7d | %-7.0f | %-18.0f |\n",
            i + 1,
            data[i].nama,
            data[i].harga,
            data[i].jumlahTerjual,
            data[i].profit,
            data[i].totalProfit);
    }

    printf("+--------------------------------------------------------------------------------+\n");
}

/* Menyimpan data produk ke file */
void simpanData(Produk data[], int n)
{
    // Jika tidak ada data maka proses dihentikan
    if(n <= 0)
        return;

    // Membuka file untuk ditulis
    FILE *fp = fopen("produk.txt", "w");

    // Mengecek apakah file berhasil dibuka
    if(fp == NULL)
    {
        printf("\nError Gagal membuka file!\n");
        return;
    }

    // Menyimpan seluruh data produk ke file
    for(int i = 0; i < n; i++)
    {
        fprintf(fp, "%s;%f;%d;%f;%f\n",
                data[i].nama,
                data[i].harga,
                data[i].jumlahTerjual,
                data[i].profit,
                data[i].totalProfit);
    }

    // Menutup file setelah selesai digunakan
    fclose(fp);

    printf("\nYEAY!!! Data berhasil disimpan ke produk.txt\n");
}

/* Memuat data produk dari file */
int muatData(Produk data[])
{
    // Membuka file untuk dibaca
    FILE *fp = fopen("produk.txt", "r");

    int n = 0;

    // Jika file tidak ditemukan
    if(fp == NULL)
        return 0;

    // Membaca seluruh data dari file
    while(fscanf(fp,
                 " %49[^;];%f;%d;%f;%f",
                 data[n].nama,
                 &data[n].harga,
                 &data[n].jumlahTerjual,
                 &data[n].profit,
                 &data[n].totalProfit) == 5)
    {
        n++;
    }

    // Menutup file
    fclose(fp);

    // Mengembalikan jumlah data yang berhasil dibaca
    return n;
}

/* Menghapus produk berdasarkan nomor yang dipilih */
void hapusProduk(Produk data[], int *n)
{
    // Mengecek apakah data kosong
    if(*n == 0)
    {
        printf("\n[INFO] Data kosong!\n");
        return;
    }

    int index;

    // Meminta nomor produk yang akan dihapus
    printf("\nMasukkan nomor produk yang ingin dihapus: ");
    scanf("%d", &index);

    // Memvalidasi nomor yang dimasukkan
    if(index < 1 || index > *n)
    {
        printf("\n[ERROR] Nomor tidak valid!\n");
        return;
    }

    index--;

    // Menggeser data setelah produk yang dihapus
    for(int i = index; i < *n - 1; i++)
    {
        data[i] = data[i + 1];
    }

    // Mengurangi jumlah data
    (*n)--;

    printf("\nYEAY!!! Produk berhasil dihapus\n");
}
