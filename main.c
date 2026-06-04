#include <stdio.h>
#include "Produk.h"

/* ===== PROTOTYPE ===== */
void selectionSortProfit(Produk data[], int n);
void cariProduk(Produk data[], int n);
void top3ProdukTerbaik(Produk data[], int n);
void hapusProduk(Produk data[], int *n);

/* ===== QUEUE PROTOTYPE ===== */
void initQueue(Queue *q);
void enqueue(Queue *q, Produk p);
void printQueue(Queue *q);

/* ================= HEADER ================= */
void header()
{
    printf("\n+==============================================================+\n");
    printf("|           Selamat Datang di Program Optimasi Produk          |\n");
    printf("|              (Greedy Algorithm + Data Structure)             |\n");
    printf("+==============================================================+\n");
}

/* ================= MENU ================= */
void menu()
{
    printf("\n+----------------------- MENU UTAMA --------------------------+\n");
    printf("| 1. Input Produk                                             |\n");
    printf("| 2. Tampilkan Data                                           |\n");
    printf("| 3. Top 3 Produk Terlaris                                    |\n");
    printf("| 4. Cari Produk                                              |\n");
    printf("| 5. Hapus Produk                                             |\n");
    printf("| 6. Antrian Produk (Queue)                                   |\n");
    printf("| 0. Keluar                                                   |\n");
    printf("+-------------------------------------------------------------+\n");
}

/* ================= FOOTER ================= */
void exitScreen()
{
    printf("\n+==============================================================+\n");
    printf("|                           TERIMA KASIH                       |\n");
    printf("|                SEMOGA BISNIS ANDA SEMAKIN SUKSES             |\n");
    printf("+==============================================================+\n");
}

int main()
{
    Produk data[MAX];
    int n = muatData(data);

    if(n < 0) n = 0;

    /* ===== QUEUE INIT ===== */
    Queue q;
    initQueue(&q);

    printf("\n[SUCCESS] Data berhasil dimuat: %d produk\n", n);

    int pilih;

    do
    {
        header();
        menu();

        printf("\nPilih menu : ");
        scanf("%d", &pilih);

        printf("\n");

        switch(pilih)
        {
            case 1:
                printf("+---------------- INPUT PRODUK ----------------+\n");
                tambahProduk(data, &n);
                simpanData(data, n);

                /* MASUK QUEUE */
                enqueue(&q, data[n - 1]);

                printf("Produk berhasil ditambahkan & masuk antrian\n");
                break;

            case 2:
                printf("+---------------- DATA PRODUK -----------------+\n");
                tampilkanProduk(data, n);
                break;

            case 3:
                printf("+------------- TOP 3 PRODUK -------------------+\n");
                top3ProdukTerbaik(data, n);
                break;

            case 4:
                printf("+-------------- CARI PRODUK -------------------+\n");
                cariProduk(data, n);
                break;

            case 5:
                printf("+-------------- HAPUS PRODUK ------------------+\n");
                hapusProduk(data, &n);
                simpanData(data, n);
                printf("[OK] Data berhasil dihapus & disimpan\n");
                break;

            case 6:
                printf("+-------------- ANTRIAN PRODUK ----------------+\n");
                printQueue(&q);
                break;

            case 0:
                exitScreen();
                break;

            default:
                printf("Error Menu tidak valid!\n");
        }

        printf("\n");

    } while(pilih != 0);

    return 0;
}
