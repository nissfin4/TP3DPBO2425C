#ifndef DOCTOR_H
#define DOCTOR_H

#include "person.h"
#include "schedule.h"
#include "patient.h"
#include <iomanip>
#include <vector>
using namespace std;

class Dokter : public Person {
private:
    string spesialisasi;
    Jadwal jadwal;
    vector<Pasien> pasienList;

   
public:
    Dokter(string n = "", int u = 0, string s = "", Jadwal j = Jadwal())
        : Person(n, u), spesialisasi(s), jadwal(j) {}
//setter dan getter
    void setSpesialisasi(const string& s) { spesialisasi = s; }
    string getSpesialisasi() const { return spesialisasi; }

    void setJadwal(Jadwal j) { jadwal = j; }
    Jadwal getJadwal() const { return jadwal; }

    void tambahPasien(const Pasien& p) { pasienList.push_back(p); }

    void cetakInfo() const override {
        cout << left << setw(15) << nama
             << setw(5)  << umur
             << setw(20) << spesialisasi
             << setw(10) << jadwal.getHari()
             << setw(10) << jadwal.getWaktu()
             << endl;
    }
       
    void cetakJadwalOnly() const {
        cout << left << setw(15) << nama
             << setw(10) << jadwal.getHari()
             << setw(10) << jadwal.getWaktu()
             << endl;
    }
};


#endif
