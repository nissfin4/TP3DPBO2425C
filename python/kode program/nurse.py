from person import Person

class Perawat(Person):
    def __init__(self, nama: str, umur: int, departemen: str):
        super().__init__(nama, umur)
        self.departemen = departemen

    def set_departemen(self, departemen: str):
        self.departemen = departemen

    def get_departemen(self) -> str:
        return self.departemen

    def cetak_info(self):
        print(f"{self.nama:<15}{self.umur:<5}{self.departemen:<20}")
