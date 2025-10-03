#ifndef PATIENT_H
#define PATIENT_H

#include "person.h"
#include "medicalRecord.h"
#include <iomanip>
using namespace std;

class Pasien : public Person {
private:
    string penyakit;
    RekamMedis rekam;

public:
    Pasien(string n = "", int u = 0, string p = "", RekamMedis r = RekamMedis())
        : Person(n, u), penyakit(p), rekam(r) {}

    void setPenyakit(const string& p) { penyakit = p; }
    string getPenyakit() const { return penyakit; }

    void setRekam(RekamMedis r) { rekam = r; }
    RekamMedis getRekam() const { return rekam; }

    void cetakInfo() const override {
        cout << left << setw(15) << nama
             << setw(5)  << umur
             << setw(20) << penyakit
             << setw(10) << rekam.getId()
             << setw(20) << rekam.getDiagnosis()
             << endl;
    }


    void cetakRekamOnly() const {
        cout << left << setw(10) << rekam.getId()
             << setw(20) << rekam.getDiagnosis()
             << endl;
    }
};


#endif
