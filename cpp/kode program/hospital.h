#ifndef HOSPITAL_H
#define HOSPITAL_H

#include "doctor.h"
#include "patient.h"
#include "nurse.h"
#include <vector>
#include <iomanip>
using namespace std;

class RumahSakit {
private:
    vector<Dokter> daftarDokter;
    vector<Pasien> daftarPasien;
    vector<Perawat> daftarPerawat;

public:
    void tambahDokter(const Dokter& d) { daftarDokter.push_back(d); }
    void tambahPasien(const Pasien& p) { daftarPasien.push_back(p); }
    void tambahPerawat(const Perawat& n) { daftarPerawat.push_back(n); }

    void cetakSemua() const {
        cout << "\n========== RUMAH SAKIT ==========" << endl;

        // Dokter
        cout << "\n-- Dokter --" << endl;
        cout << left << setw(15) << "Nama"
             << setw(5)  << "Umur"
             << setw(20) << "Spesialisasi"
             << setw(10) << "Hari"
             << setw(10) << "Waktu" << endl;
        cout << string(60, '-') << endl;
        for (auto& d : daftarDokter) d.cetakInfo();
        cout << string(60, '-') << endl;

        // Jadwal Dokter
        cout << "\n-- Jadwal Dokter --" << endl;
        cout << left << setw(15) << "Nama Dokter"
             << setw(10) << "Hari"
             << setw(10) << "Waktu" << endl;
        cout << string(35, '-') << endl;
        for (auto& d : daftarDokter) d.cetakJadwalOnly();
        cout << string(35, '-') << endl;

        // Pasien
        cout << "\n-- Pasien --" << endl;
        cout << left << setw(15) << "Nama"
             << setw(5)  << "Umur"
             << setw(20) << "Penyakit"
             << setw(10) << "RekamID"
             << setw(20) << "Diagnosis" << endl;
        cout << string(70, '-') << endl;
        for (auto& p : daftarPasien) p.cetakInfo();
        cout << string(70, '-') << endl;

        // Rekam Medis
        cout << "\n-- Rekam Medis --" << endl;
        cout << left << setw(10) << "ID"
             << setw(20) << "Diagnosis" << endl;
        cout << string(30, '-') << endl;
        for (auto& p : daftarPasien) p.cetakRekamOnly();
        cout << string(30, '-') << endl;

        // Perawat
        cout << "\n-- Perawat --" << endl;
        cout << left << setw(15) << "Nama"
             << setw(5)  << "Umur"
             << setw(20) << "Departemen" << endl;
        cout << string(40, '-') << endl;
        for (auto& n : daftarPerawat) n.cetakInfo();
        cout << string(40, '-') << endl;

        cout << "==================================" << endl;
    }
};

#endif
