import java.util.ArrayList;

public class Dokter extends Person {
    private String spesialisasi;
    private Jadwal jadwal;
    private ArrayList<Pasien> pasienList = new ArrayList<>();

    public Dokter(String nama, int umur, String spesialisasi, Jadwal jadwal) {
        super(nama, umur);
        this.spesialisasi = spesialisasi;
        this.jadwal = jadwal;
    }

    public void tambahPasien(Pasien p) { pasienList.add(p); }

    @Override
    public void cetakInfo() {
        System.out.printf("%-15s%-5d%-20s%-10s%-10s%n",
                nama, umur, spesialisasi, jadwal.getHari(), jadwal.getWaktu());
    }

    public void cetakJadwalOnly() {
        System.out.printf("%-15s%-10s%-10s%n", nama, jadwal.getHari(), jadwal.getWaktu());
    }
}
