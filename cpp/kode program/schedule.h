#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <iostream>
#include <string>
using namespace std;

class Jadwal {
private:
    string hari;
    string waktu;

public:
    Jadwal(string h = "", string w = "") : hari(h), waktu(w) {}

    string getHari() const { return hari; }
    string getWaktu() const { return waktu; }

    void setHari(const string& h) { hari = h; }
    void setWaktu(const string& w) { waktu = w; }

    void cetakJadwal() const {
        cout << hari << " " << waktu;
    }
};

#endif
