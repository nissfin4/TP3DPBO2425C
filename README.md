# TP3DPBO2425C
Tugas praktikum 3

Janji:
Saya Nisrina Safinatunnajah dengan NIM 2410093 mengerjakan Tugas Praktikum 3 dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

flow kode, penjelasan alur, dan penjelasan diagram:

Dalam program ini terdapat beberapa kelas utama, yaitu Person, Dokter, Pasien, Perawat, Jadwal, RekamMedis, dan RumahSakit.

Kelas Person berfungsi sebagai kelas dasar. Kelas ini menyimpan atribut umum yang dimiliki semua orang di rumah sakit, yaitu nama dan umur. Method yang tersedia adalah setNama() dan getNama() untuk mengatur dan mengambil nama, setUmur() dan getUmur() untuk umur, serta cetakInfo() yang bersifat abstrak dan akan diimplementasikan ulang pada setiap kelas turunannya.

Kelas Dokter merupakan turunan dari Person. Selain mewarisi atribut nama dan umur, kelas ini memiliki atribut tambahan berupa spesialisasi, kemudian sebuah objek Jadwal yang menyimpan informasi hari dan waktu praktik dokter, serta daftar pasien yang ditangani. Method yang tersedia antara lain tambahPasien() untuk menambahkan pasien ke daftar, cetakInfo() untuk menampilkan informasi lengkap seorang dokter beserta spesialisasi dan jadwalnya, dan cetakJadwalOnly() untuk menampilkan nama dokter dengan jadwal praktiknya saja.

Kelas Pasien juga merupakan turunan dari Person. Atribut tambahan pada kelas ini adalah penyakit dan sebuah objek RekamMedis yang menyimpan identitas rekam medis serta diagnosis pasien. Method yang dimiliki antara lain cetakInfo() untuk menampilkan informasi lengkap pasien beserta penyakit dan rekam medisnya, dan cetakRekamOnly() untuk menampilkan ID serta diagnosis rekam medis saja.

Kelas Perawat adalah turunan lain dari Person. Atribut tambahan pada kelas ini adalah departemen, yang menunjukkan bagian rumah sakit tempat perawat bertugas. Method utama yang dimiliki adalah cetakInfo() untuk menampilkan informasi perawat.

Selain itu, ada kelas pendukung yaitu Jadwal dan RekamMedis. Kelas Jadwal berisi atribut hari dan waktu, serta method getter dan setter untuk masing-masing atribut. Kelas ini digunakan untuk mengatur jadwal praktik seorang dokter. Sedangkan kelas RekamMedis berisi atribut id dan diagnosis, serta method getter dan setter untuk keduanya. Kelas ini digunakan untuk menyimpan informasi medis dari seorang pasien.

Seluruh data rumah sakit dikelola oleh kelas RumahSakit. Di dalam kelas ini terdapat tiga daftar, yaitu daftar dokter, daftar pasien, dan daftar perawat. Method yang dimiliki adalah tambahDokter(), tambahPasien(), dan tambahPerawat() untuk menambahkan data baru ke dalam daftar, serta cetakSemua() yang digunakan untuk menampilkan seluruh data rumah sakit secara terstruktur, mulai dari dokter, jadwal, pasien, rekam medis, hingga perawat.

Dari desain tersebut terlihat bahwa program menggunakan inheritance melalui hubungan Person sebagai induk dengan Dokter, Pasien, dan Perawat sebagai anak. Hal ini merupakan contoh hierarchical inheritance, karena satu kelas dasar diturunkan ke lebih dari satu kelas turunan. Program juga menerapkan composition, contohnya dokter yang memiliki jadwal praktik (Dokter memiliki Jadwal) dan pasien yang memiliki rekam medis (Pasien memiliki RekamMedis). Selain itu, kelas RumahSakit juga menunjukkan composition karena memiliki daftar dokter, pasien, dan perawat.

Alur program:
Alur program dimulai dengan membuat sebuah objek rumah sakit. Setelah itu, data awal berupa satu dokter, satu pasien, dan satu perawat ditambahkan, lalu seluruh data ditampilkan sebagai kondisi sebelum penambahan. Selanjutnya, program menambahkan beberapa data tambahan berupa dokter, pasien, dan perawat baru, kemudian kembali menampilkan seluruh data sebagai kondisi sesudah penambahan. 


Diagram:

![diagram](TP3.drawio.png)

Dokumentasi cpp:

![cpp](Screenshot1818.png)
![cpp](Screenshot1819.png)
![cpp](Screenshot1820.png)
![cpp](Screenshot1821.png)

Dokumentasi python:
![python](Screenshot1822.png)
![python](Screenshot1823.png)
![python](Screenshot1824.png)
![python](Screenshot1825.png)

Dokumentasi java: 
![java](Screenshot1826.png)
![java](Screenshot1827.png)
![java](Screenshot1828.png)
![java](Screenshot1829.png)

