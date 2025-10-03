public class Jadwal {
    private String hari;
    private String waktu;

    public Jadwal(String hari, String waktu) {
        this.hari = hari;
        this.waktu = waktu;
    }

    public String getHari() { return hari; }
    public String getWaktu() { return waktu; }

    public void setHari(String hari) { this.hari = hari; }
    public void setWaktu(String waktu) { this.waktu = waktu; }
}
