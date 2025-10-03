public class Pasien extends Person {
    private String penyakit;
    private RekamMedis rekam;

    public Pasien(String nama, int umur, String penyakit, RekamMedis rekam) {
        super(nama, umur);
        this.penyakit = penyakit;
        this.rekam = rekam;
    }

    @Override
    public void cetakInfo() {
        System.out.printf("%-15s%-5d%-20s%-10d%-20s%n",
                nama, umur, penyakit, rekam.getId(), rekam.getDiagnosis());
    }

    public void cetakRekamOnly() {
        System.out.printf("%-10d%-20s%n", rekam.getId(), rekam.getDiagnosis());
    }
}
