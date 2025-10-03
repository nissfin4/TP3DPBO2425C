from abc import ABC, abstractmethod

class Person(ABC):
    def __init__(self, nama: str, umur: int):
        self.nama = nama
        self.umur = umur

    def set_nama(self, nama: str):
        self.nama = nama

    def get_nama(self) -> str:
        return self.nama

    def set_umur(self, umur: int):
        self.umur = umur

    def get_umur(self) -> int:
        return self.umur

    @abstractmethod
    def cetak_info(self):
        pass
