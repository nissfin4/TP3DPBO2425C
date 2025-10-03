public class Main {
    public static void main(String[] args) {
        RumahSakit rs = new RumahSakit();

        // Data awal
        Dokter d0 = new Dokter("dr. Citra", 45, "Anak", new Jadwal("Senin", "09:00"));
        Pasien p0 = new Pasien("Lina", 20, "Demam", new RekamMedis(100, "Flu"));
        Perawat n0 = new Perawat("Sari", 30, "Poli Umum");

        rs.tambahDokter(d0);
        rs.tambahPasien(p0);
        rs.tambahPerawat(n0);

        System.out.println("=== Data Rumah Sakit (sebelum) ===");
        rs.cetakSemua();

        // Data tambahan
        Dokter d1 = new Dokter("dr. Andi", 40, "Jantung", new Jadwal("Selasa", "08:00"));
        Dokter d2 = new Dokter("dr. Budi", 50, "Saraf", new Jadwal("Rabu", "10:00"));
        Dokter d3 = new Dokter("dr. Rika", 38, "THT", new Jadwal("Kamis", "13:00"));
        Dokter d4 = new Dokter("dr. Yoga", 55, "Mata", new Jadwal("Jumat", "15:00"));

        Pasien p1 = new Pasien("Siti", 30, "Nyeri Dada", new RekamMedis(101, "Penyakit Jantung"));
        Pasien p2 = new Pasien("Agus", 25, "Sakit Kepala", new RekamMedis(102, "Migrain"));
        Pasien p3 = new Pasien("Budi", 40, "Asma", new RekamMedis(103, "Asma Kronis"));
        Pasien p4 = new Pasien("Maya", 35, "Infeksi Telinga", new RekamMedis(104, "Otitis Media"));
        Pasien p5 = new Pasien("Dian", 27, "Mata Merah", new RekamMedis(105, "Konjungtivitis"));

        Perawat n1 = new Perawat("Dewi", 28, "ICU");
        Perawat n2 = new Perawat("Rina", 32, "UGD");
        Perawat n3 = new Perawat("Tono", 29, "Rawat Inap");
        Perawat n4 = new Perawat("Lusi", 26, "Kebidanan");

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

        System.out.println("\n=== Data Rumah Sakit (sesudah) ===");
        rs.cetakSemua();
    }
}
