public abstract class Person {
    protected String nama;
    protected int umur;

    public Person(String nama, int umur) {
        this.nama = nama;
        this.umur = umur;
    }

    public void setNama(String nama) { this.nama = nama; }
    public String getNama() { return nama; }

    public void setUmur(int umur) { this.umur = umur; }
    public int getUmur() { return umur; }

    public abstract void cetakInfo();
}
