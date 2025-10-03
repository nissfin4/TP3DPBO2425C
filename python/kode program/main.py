from hospital import RumahSakit
from doctor import Dokter
from patient import Pasien
from nurse import Perawat
from schedule import Jadwal
from medical_record import RekamMedis

if __name__ == "__main__":
    rs = RumahSakit()

    # Data awal
    d0 = Dokter("dr. Citra", 45, "Anak", Jadwal("Senin", "09:00"))
    p0 = Pasien("Lina", 20, "Demam", RekamMedis(100, "Flu"))
    n0 = Perawat("Sari", 30, "Poli Umum")

    rs.tambah_dokter(d0)
    rs.tambah_pasien(p0)
    rs.tambah_perawat(n0)

    print("=== Data Rumah Sakit (sebelum) ===")
    rs.cetak_semua()

    # Data tambahan
    d1 = Dokter("dr. Andi", 40, "Jantung", Jadwal("Selasa", "08:00"))
    d2 = Dokter("dr. Budi", 50, "Saraf", Jadwal("Rabu", "10:00"))
    d3 = Dokter("dr. Rika", 38, "THT", Jadwal("Kamis", "13:00"))
    d4 = Dokter("dr. Yoga", 55, "Mata", Jadwal("Jumat", "15:00"))

    p1 = Pasien("Siti", 30, "Nyeri Dada", RekamMedis(101, "Penyakit Jantung"))
    p2 = Pasien("Agus", 25, "Sakit Kepala", RekamMedis(102, "Migrain"))
    p3 = Pasien("Budi", 40, "Asma", RekamMedis(103, "Asma Kronis"))
    p4 = Pasien("Maya", 35, "Infeksi Telinga", RekamMedis(104, "Otitis Media"))
    p5 = Pasien("Dian", 27, "Mata Merah", RekamMedis(105, "Konjungtivitis"))

    n1 = Perawat("Dewi", 28, "ICU")
    n2 = Perawat("Rina", 32, "UGD")
    n3 = Perawat("Tono", 29, "Rawat Inap")
    n4 = Perawat("Lusi", 26, "Kebidanan")

    rs.tambah_dokter(d1)
    rs.tambah_dokter(d2)
    rs.tambah_dokter(d3)
    rs.tambah_dokter(d4)

    rs.tambah_pasien(p1)
    rs.tambah_pasien(p2)
    rs.tambah_pasien(p3)
    rs.tambah_pasien(p4)
    rs.tambah_pasien(p5)

    rs.tambah_perawat(n1)
    rs.tambah_perawat(n2)
    rs.tambah_perawat(n3)
    rs.tambah_perawat(n4)

    print("\n=== Data Rumah Sakit (setelah) ===")
    rs.cetak_semua()
