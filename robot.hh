#pragma once

#include <iostream>
#include <string>
#include "vec3d.hh"

using namespace std;

class object {
private:
    string name;
    vec_3d loc;

public:
    object(string n, double x=0, double y=0) : name(n), loc(x, y) {}
    void print() {
        cout << name << " at " << loc << endl;
    }
};

class robot : public object {};
class beacon : public object {};