from person import Person
from schedule import Jadwal
from patient import Pasien

class Dokter(Person):
    def __init__(self, nama: str, umur: int, spesialisasi: str, jadwal: Jadwal):
        super().__init__(nama, umur)
        self.spesialisasi = spesialisasi
        self.jadwal = jadwal
        self.pasien_list = []

    def set_spesialisasi(self, spesialisasi: str):
        self.spesialisasi = spesialisasi

    def get_spesialisasi(self) -> str:
        return self.spesialisasi

    def set_jadwal(self, jadwal: Jadwal):
        self.jadwal = jadwal

    def get_jadwal(self) -> Jadwal:
        return self.jadwal

    def tambah_pasien(self, pasien: Pasien):
        self.pasien_list.append(pasien)

    def cetak_info(self):
        print(f"{self.nama:<15}{self.umur:<5}{self.spesialisasi:<20}{self.jadwal.get_hari():<10}{self.jadwal.get_waktu():<10}")

    def cetak_jadwal_only(self):
        print(f"{self.nama:<15}{self.jadwal.get_hari():<10}{self.jadwal.get_waktu():<10}")
