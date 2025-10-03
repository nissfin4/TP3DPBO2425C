#ifndef NURSE_H
#define NURSE_H

#include "person.h"
#include <iomanip>
using namespace std;

class Perawat : public Person {
private:
    string departemen;


    
public:
    Perawat(string n = "", int u = 0, string d = "")
        : Person(n, u), departemen(d) {}
//setter dan getter
    void setDepartemen(const string& d) { departemen = d; }
    string getDepartemen() const { return departemen; }

    void cetakInfo() const override {
        cout << left << setw(15) << nama
             << setw(5)  << umur
             << setw(20) << departemen
             << endl;
    }
};

#endif
