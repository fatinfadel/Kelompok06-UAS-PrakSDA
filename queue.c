#include <stdio.h>
#include "Produk.h"

void initQueue(Queue *q)
 {
    q->front = 0;
    q->rear = 0;
 } // Inisiasi pembuatan antrian

void enqueue(Queue *q, Produk p)
 {
    if(q->rear >= MAX)
      {
         printf("[QUEUE FULL]\n");
         return;
      } // Penambahan antrian dengan pengecekan terlebih dahulu

    q->data[q->rear] = p;
    q->rear++;
 } // Lokasi produk dan antrian seterusnya

void printQueue(Queue *q)
 {
   if(q->front == q->rear)
     {
        printf("Queue kosong\n");
        return;
     } // Antrian kosong

    for(int i = q->front; i < q->rear; i++) // Perulangan untuk menampilkan data
 {
        printf("%d. %s | Terjual: %d | Total: %.0f\n",
            i + 1,
            q->data[i].nama,
            q->data[i].jumlahTerjual,
            q->data[i].totalProfit);
    }
}
