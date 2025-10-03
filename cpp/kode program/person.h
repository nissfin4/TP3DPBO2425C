#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

// Digunakan untuk inheritance ke Dokter, Pasien, dan Perawat
class Person {
protected:
    string nama;
    int umur;

   
public:
    Person(string n = "", int u = 0) : nama(n), umur(u) {}
 //setter dan getter
    void setNama(const string& n) { nama = n; }
    string getNama() const { return nama; }

    void setUmur(int u) { umur = u; }
    int getUmur() const { return umur; }

    virtual void cetakInfo() const = 0; 
    virtual ~Person() {}
};

#endif
