#ifndef PRODUK_H
#define PRODUK_H

#define MAX 100

typedef struct
{
    char nama[50];
    float harga;
    int jumlahTerjual;
    float profit;
    float totalProfit;
} Produk; // Menyimpan data produk

typedef struct {
    Produk data[MAX];
    int top;
} Stack; // Menyimpan riwayat produk yang dihapus

typedef struct {
    Produk data[MAX];
    int front;
    int rear;
} Queue; // Menyimpan antrian produk

void tambahProduk(Produk data[], int *n);          // Menambah produk baru
void tampilkanProduk(Produk data[], int n);        // Menampilkan semua produk
void selectionSortProfit(Produk data[], int n);    // Mengurutkan produk berdasarkan profit
void cariProduk(Produk data[], int n);             // Mencari produk berdasarkan nama
void top3ProdukTerbaik(Produk data[], int n);      // Menampilkan 3 produk terbaik
void simpanData(Produk data[], int n);             // Menyimpan data ke file
int muatData(Produk data[]);                        // Memuat data dari file
void hapusProduk(Produk data[], int *n);           // Menghapus produk

void initStack(Stack *s);                          // Inisialisasi stack
void pushStack(Stack *s, Produk p);                // Menambah data ke stack
void printStack(Stack *s);                         // Menampilkan isi stack

void initQueue(Queue *q);                          // Inisialisasi queue
void enqueue(Queue *q, Produk p);                  // Menambah data ke antrian
void printQueue(Queue *q);                         // Menampilkan isi antrian

#endif
