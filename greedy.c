#include <stdio.h>
#include "Produk.h"

 void top3ProdukTerbaik(Produk data[], int n)
   {
     if(n == 0) // Informasi ketersediaan barang
      {
        printf("\n[INFO] Data kosong!\n");
        return;
      }

 selectionSortProfit(data, n);
 int batas = (n < 3) ? n : 3; // Batasan data yang diurutkan


printf("\n+================================================+\n");

printf("| RANK | NAMA PRODUK | TOTAL PROFIT      |\n");
    printf("+================================================+\n"); // Tampilan field pada layar

 
 for(int i = 0; i < batas; i++) // Pencarian data dengan batasan 3
     {
       printf("| %-4d | %-18.18s | %-17.0f |\n",
       i+1,// Ranking
       data[i].nama,
       data[i].totalProfit);
     }
    printf("+================================================+\n");
}
