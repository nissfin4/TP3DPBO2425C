class Jadwal:
    def __init__(self, hari: str = "", waktu: str = ""):
        self.hari = hari
        self.waktu = waktu

    def get_hari(self) -> str:
        return self.hari

    def get_waktu(self) -> str:
        return self.waktu

    def set_hari(self, hari: str):
        self.hari = hari

    def set_waktu(self, waktu: str):
        self.waktu = waktu

    def cetak_jadwal(self):
        print(f"{self.hari} {self.waktu}")
