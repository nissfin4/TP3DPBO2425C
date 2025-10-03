public class RekamMedis {
    private int id;
    private String diagnosis;

    public RekamMedis(int id, String diagnosis) {
        this.id = id;
        this.diagnosis = diagnosis;
    }

    public int getId() { return id; }
    public String getDiagnosis() { return diagnosis; }

    public void setId(int id) { this.id = id; }
    public void setDiagnosis(String diagnosis) { this.diagnosis = diagnosis; }
}
