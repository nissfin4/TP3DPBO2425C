from doctor import Dokter
from patient import Pasien
from nurse import Perawat

class RumahSakit:
    def __init__(self):
        self.daftar_dokter = []
        self.daftar_pasien = []
        self.daftar_perawat = []

    def tambah_dokter(self, d: Dokter):
        self.daftar_dokter.append(d)

    def tambah_pasien(self, p: Pasien):
        self.daftar_pasien.append(p)

    def tambah_perawat(self, n: Perawat):
        self.daftar_perawat.append(n)

    def cetak_semua(self):
        print("\n========== RUMAH SAKIT ==========")

        # Dokter
        print("\n-- Dokter --")
        print(f"{'Nama':<15}{'Umur':<5}{'Spesialisasi':<20}{'Hari':<10}{'Waktu':<10}")
        print("-" * 60)
        for d in self.daftar_dokter:
            d.cetak_info()
        print("-" * 60)

        # Jadwal Dokter
        print("\n-- Jadwal Dokter --")
        print(f"{'Nama Dokter':<15}{'Hari':<10}{'Waktu':<10}")
        print("-" * 35)
        for d in self.daftar_dokter:
            d.cetak_jadwal_only()
        print("-" * 35)

        # Pasien
        print("\n-- Pasien --")
        print(f"{'Nama':<15}{'Umur':<5}{'Penyakit':<20}{'RekamID':<10}{'Diagnosis':<20}")
        print("-" * 70)
        for p in self.daftar_pasien:
            p.cetak_info()
        print("-" * 70)

        # Rekam Medis
        print("\n-- Rekam Medis --")
        print(f"{'ID':<10}{'Diagnosis':<20}")
        print("-" * 30)
        for p in self.daftar_pasien:
            p.cetak_rekam_only()
        print("-" * 30)

        # Perawat
        print("\n-- Perawat --")
        print(f"{'Nama':<15}{'Umur':<5}{'Departemen':<20}")
        print("-" * 40)
        for n in self.daftar_perawat:
            n.cetak_info()
        print("-" * 40)

        print("==================================")
