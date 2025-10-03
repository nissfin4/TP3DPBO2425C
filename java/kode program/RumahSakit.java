import java.util.ArrayList;

public class RumahSakit {
    private ArrayList<Dokter> daftarDokter = new ArrayList<>();
    private ArrayList<Pasien> daftarPasien = new ArrayList<>();
    private ArrayList<Perawat> daftarPerawat = new ArrayList<>();

    public void tambahDokter(Dokter d) { daftarDokter.add(d); }
    public void tambahPasien(Pasien p) { daftarPasien.add(p); }
    public void tambahPerawat(Perawat n) { daftarPerawat.add(n); }

    public void cetakSemua() {
        System.out.println("\n========== RUMAH SAKIT ==========");

        // Dokter
        System.out.println("\n-- Dokter --");
        System.out.printf("%-15s%-5s%-20s%-10s%-10s%n",
                "Nama", "Umur", "Spesialisasi", "Hari", "Waktu");
        System.out.println("-".repeat(60));
        for (Dokter d : daftarDokter) d.cetakInfo();
        System.out.println("-".repeat(60));

        // Jadwal Dokter
        System.out.println("\n-- Jadwal Dokter --");
        System.out.printf("%-15s%-10s%-10s%n", "Nama Dokter", "Hari", "Waktu");
        System.out.println("-".repeat(35));
        for (Dokter d : daftarDokter) d.cetakJadwalOnly();
        System.out.println("-".repeat(35));

        // Pasien
        System.out.println("\n-- Pasien --");
        System.out.printf("%-15s%-5s%-20s%-10s%-20s%n",
                "Nama", "Umur", "Penyakit", "RekamID", "Diagnosis");
        System.out.println("-".repeat(70));
        for (Pasien p : daftarPasien) p.cetakInfo();
        System.out.println("-".repeat(70));

        // Rekam Medis
        System.out.println("\n-- Rekam Medis --");
        System.out.printf("%-10s%-20s%n", "ID", "Diagnosis");
        System.out.println("-".repeat(30));
        for (Pasien p : daftarPasien) p.cetakRekamOnly();
        System.out.println("-".repeat(30));

        // Perawat
        System.out.println("\n-- Perawat --");
        System.out.printf("%-15s%-5s%-20s%n", "Nama", "Umur", "Departemen");
        System.out.println("-".repeat(40));
        for (Perawat n : daftarPerawat) n.cetakInfo();
        System.out.println("-".repeat(40));

        System.out.println("==================================");
    }
}
