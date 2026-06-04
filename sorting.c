#include "Produk.h" //Menghubungkan file header Produk

void selectionSortProfit(Produk data[], int n)
{
    for (int i = 0; i < n - 1; i++) //Perulangan utama sorting
    {
        int max = i; //Anggap indeks saat ini profit terbesar

        for (int j = i + 1; j < n; j++) //Cari profit terbesar berikutnya
        {
            if (data[j].totalProfit > data[max].totalProfit) //Bandingkan profit
            {
                max = j; //Simpan indeks profit terbesar
            }
        }

        Produk temp = data[i]; //Simpan data sementara untuk swap(menukar posisi)
        data[i] = data[max];   //Tukar posisi data
        data[max] = temp;      //Selesaikan pertukaran
    }
}
