from person import Person
from medical_record import RekamMedis

class Pasien(Person):
    def __init__(self, nama: str, umur: int, penyakit: str, rekam: RekamMedis):
        super().__init__(nama, umur)
        self.penyakit = penyakit
        self.rekam = rekam

    def set_penyakit(self, penyakit: str):
        self.penyakit = penyakit

    def get_penyakit(self) -> str:
        return self.penyakit

    def set_rekam(self, rekam: RekamMedis):
        self.rekam = rekam

    def get_rekam(self) -> RekamMedis:
        return self.rekam

    def cetak_info(self):
        print(f"{self.nama:<15}{self.umur:<5}{self.penyakit:<20}{self.rekam.get_id():<10}{self.rekam.get_diagnosis():<20}")

    def cetak_rekam_only(self):
        print(f"{self.rekam.get_id():<10}{self.rekam.get_diagnosis():<20}")
