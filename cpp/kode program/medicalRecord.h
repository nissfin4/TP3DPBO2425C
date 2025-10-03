#ifndef MEDICALRECORD_H
#define MEDICALRECORD_H

#include <iostream>
#include <string>
using namespace std;

class RekamMedis {
private:
    int id;
    string diagnosis;

   
public:
    RekamMedis(int i = 0, string d = "") : id(i), diagnosis(d) {}

     //setter dan getter
    int getId() const { return id; }
    string getDiagnosis() const { return diagnosis; }

    void setId(int i) { id = i; }
    void setDiagnosis(const string& d) { diagnosis = d; }
};

#endif
