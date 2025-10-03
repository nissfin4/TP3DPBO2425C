public class Perawat extends Person {
    private String departemen;

    public Perawat(String nama, int umur, String departemen) {
        super(nama, umur);
        this.departemen = departemen;
    }

    @Override
    public void cetakInfo() {
        System.out.printf("%-15s%-5d%-20s%n", nama, umur, departemen);
    }
}
