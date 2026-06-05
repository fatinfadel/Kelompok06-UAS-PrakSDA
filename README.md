# UAS_SDA-
Pengembangan Sistem Optimasi Pemilihan Produk Terbaik Berbasis Data Penjualan Menggunakan Algoritma Greedy

## Deskripsi Program
Program ini merupakan aplikasi berbasis bahasa C yang digunakan untuk membantu pengguna dalam mengelola data produk dan menentukan produk terbaik berdasarkan total profit yang diperoleh.

Program menerapkan beberapa konsep Struktur Data dan Algoritma, yaitu:
- Array
- Queue
- Stack
- Greedy Algorithm
- Selection Sort
- Linear Search
- File Handling

## Fitur Program
### 1. Input Produk
Menambahkan data produk ke dalam sistem.

### 2. Tampilkan Data
Menampilkan seluruh data produk yang tersimpan.

### 3. Top 3 Produk Terbaik
Menampilkan 3 produk dengan total profit tertinggi menggunakan pendekatan Greedy.

### 4. Cari Produk
Mencari produk berdasarkan nama.

### 5. Hapus Produk
Menghapus data produk dari sistem.

### 6. Antrian Produk
Menampilkan daftar produk yang masuk ke dalam Queue.

## Struktur Data yang Digunakan
### Array
Digunakan untuk menyimpan seluruh data produk.

### Queue
Digunakan untuk mengelola antrian produk yang masuk.

### Stack
Digunakan untuk implementasi riwayat data.

## Algoritma yang Digunakan
### Greedy
Memilih produk dengan total profit tertinggi sebagai produk terbaik.

### Selection Sort
Mengurutkan data produk berdasarkan total profit.

### Linear Search
Mencari produk berdasarkan nama produk.

### File Handling
Menyimpan dan memuat data produk dari file `produk.txt`.


## Cara Menjalankan Program
### Menggunakan GCC

Compile program:

```bash
gcc main.c -o produk
```

Jalankan program:

```bash
./produk
```

Untuk Windows:

```bash
gcc main.c -o produk.exe
produk.exe
```

## Menu Program
```text
1. Input Produk
2. Tampilkan Data
3. Top 3 Produk Terbaik
4. Cari Produk
5. Hapus Produk
6. Antrian Produk
0. Keluar
```

## Contoh Penggunaan
Input:
```text
Nama Produk       : Laptop
Harga             : 7000000
Jumlah Terjual    : 10
Profit per Barang : 1000000
```

Perhitungan:
```text
Total Profit = Profit × Jumlah Terjual
             = 1.000.000 × 10
             = 10.000.000
```

Output Top Produk:
```text
RANK | NAMA PRODUK | TOTAL PROFIT

1    | Laptop      | 10000000
2    | Printer     | 5000000
3    | Mouse       | 2000000
```

---
## SDGs yang Didukung

### SDGs 9 – Industry, Innovation, and Infrastructure

Project ini membantu:

* Meningkatkan efisiensi pengolahan data penjualan.
* Mendukung pengambilan keputusan berbasis data.
* Mendorong pemanfaatan teknologi dalam pengelolaan usaha kecil dan menengah.

---



