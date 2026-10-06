# Modul 6 — V.1 Latihan Tracing

## 1. Trace Table (hasil penelusuran manual)

| Baris | Kolom | baris * kolom | total_baris | total_keseluruhan |
|------:|------:|--------------:|------------:|------------------:|
| 1 | 1 | 1 | 1 | 0 |
| 1 | 2 | 2 | 3 | 0 |
| 1 | 3 | 3 | 6 | 0 |
| **Setelah baris 1** | – | – | – | **6** |
| 2 | 1 | 2 | 2 | 6 |
| 2 | 2 | 4 | 6 | 6 |
| 2 | 3 | 6 | 12 | 6 |
| **Setelah baris 2** | – | – | – | **18** |
| 3 | 1 | 3 | 3 | 18 |
| 3 | 2 | 6 | 9 | 18 |
| 3 | 3 | 9 | 18 | 18 |
| **Setelah baris 3** | – | – | – | **36** |

Keterangan:
- Nilai `total_keseluruhan` pada baris "Setelah baris N" terjadi setelah pernyataan
  `total_keseluruhan += total_baris;` dieksekusi.
- `total_keseluruhan` masih 0 selama perulangan dalam berjalan karena baru bertambah
  di luar perulangan dalam.

## 2. Prediksi (sebelum menjalankan program)

- Total baris 1 = 1+2+3 = **6**
- Total baris 2 = 2+4+6 = **12**
- Total baris 3 = 3+6+9 = **18**
- Total keseluruhan = 6+12+18 = **36**

## 3. Hasil Eksekusi (gcc -Wall -Wextra, tanpa warning)

```
Total baris 1: 6
Total baris 2: 12
Total baris 3: 18
Total keseluruhan: 36
```

## 4. Perbandingan

| Prediksi | Aktual | Status |
|----------|--------|--------|
| Total baris 1 = 6 | 6 | Sesuai |
| Total baris 2 = 12 | 12 | Sesuai |
| Total baris 3 = 18 | 18 | Sesuai |
| Total keseluruhan = 36 | 36 | Sesuai |

Seluruh hasil aktual sama dengan prediksi.

## 5. Mengapa `total_baris` harus diinisialisasi nol pada awal setiap baris

`total_baris` berperan sebagai accumulator per baris. Nilainya hanya bertahan di dalam satu
iterasi perulangan luar. Jika `total_baris = 0;` diletakkan di luar perulangan luar
(atau dihapus sama sekali), maka:

- Baris 1: total_baris = 0 → menjadi 6
- Baris 2: total_baris masih 6 → ditambah 2, 4, 6 → menjadi 18 (bukan 12)
- Baris 3: total_baris masih 18 → ditambah 3, 6, 9 → menjadi 36 (bukan 18)

Akibatnya nilai dari baris sebelumnya ikut terbawa, sehingga `total_baris` tidak lagi
mewakili jumlah baris itu saja, dan `printf("Total baris %d: %d")` menampilkan angka
yang salah.

Perbandingan dengan `total_keseluruhan`:

| Jenis accumulator | Lokasi inisialisasi | Alasan |
|-------------------|---------------------|--------|
| `total_baris` | Di dalam perulangan luar, sebelum perulangan dalam | Menghitung ulang tiap baris |
| `total_keseluruhan` | Sebelum perulangan luar | Akumulasi semua baris, hanya perlu sekali nol |

## 6. Jumlah iterasi

Perulangan luar 3 kali, perulangan dalam 3 kali pada setiap baris.
Jumlah eksekusi blok terdalam = 3 x 3 = 9 iterasi.