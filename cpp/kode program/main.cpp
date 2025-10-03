#include "hospital.h"
using namespace std;

int main() {
    RumahSakit rs;

    // Data awal sebelum penambahan
    Dokter d0("dr. Citra", 45, "Anak", Jadwal("Senin", "09:00"));
    Pasien p0("Lina", 20, "Demam", RekamMedis(100, "Flu"));
    Perawat n0("Sari", 30, "Poli Umum");

    rs.tambahDokter(d0);
    rs.tambahPasien(p0);
    rs.tambahPerawat(n0);

    cout << "=== Data Rumah Sakit (sebelum) ===" << endl;
    rs.cetakSemua();

    // Data tambahan sesudah penambahan
    Dokter d1("dr. Andi", 40, "Jantung", Jadwal("Selasa", "08:00"));
    Dokter d2("dr. Budi", 50, "Saraf", Jadwal("Rabu", "10:00"));
    Dokter d3("dr. Rika", 38, "THT", Jadwal("Kamis", "13:00"));
    Dokter d4("dr. Yoga", 55, "Mata", Jadwal("Jumat", "15:00"));

    Pasien p1("Siti", 30, "Nyeri Dada", RekamMedis(101, "Penyakit Jantung"));
    Pasien p2("Agus", 25, "Sakit Kepala", RekamMedis(102, "Migrain"));
    Pasien p3("Budi", 40, "Asma", RekamMedis(103, "Asma Kronis"));
    Pasien p4("Maya", 35, "Infeksi Telinga", RekamMedis(104, "Otitis Media"));
    Pasien p5("Dian", 27, "Mata Merah", RekamMedis(105, "Konjungtivitis"));

    Perawat n1("Dewi", 28, "ICU");
    Perawat n2("Rina", 32, "UGD");
    Perawat n3("Tono", 29, "Rawat Inap");
    Perawat n4("Lusi", 26, "Kebidanan");

    // Tambahkan ke rumah sakit
    rs.tambahDokter(d1);
    rs.tambahDokter(d2);
    rs.tambahDokter(d3);
    rs.tambahDokter(d4);

    rs.tambahPasien(p1);
    rs.tambahPasien(p2);
    rs.tambahPasien(p3);
    rs.tambahPasien(p4);
    rs.tambahPasien(p5);

    rs.tambahPerawat(n1);
    rs.tambahPerawat(n2);
    rs.tambahPerawat(n3);
    rs.tambahPerawat(n4);

    cout << "\n=== Data Rumah Sakit (sesudah) ===" << endl;
    rs.cetakSemua();

    return 0;
}
