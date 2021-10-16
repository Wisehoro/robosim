#pragma once

#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14159265358

class vec_3d {
private:
	double x_component;
	double y_component;
	double z_component;
public:
	vec_3d(double x=0, double y=0, double z=0) : x_component(x), y_component(y), z_component(z) {};
	vec_3d friend operator+(vec_3d& a, vec_3d& b) {
		return vec_3d(a.x_component+b.x_component, a.y_component+b.y_component, a.z_component+b.z_component);
	}
	friend vec_3d operator-(vec_3d& a, vec_3d& b) {
		return vec_3d(a.x_component-b.x_component, a.y_component-b.y_component, a.z_component-b.z_component);
	}
	friend vec_3d operator-(vec_3d& a) {
		return vec_3d(-a.x_component, -a.y_component, -a.z_component);
	}
	friend ostream& operator<<(ostream& s, vec_3d& a) {
		return s << "(" << a.x_component << ", " << a.y_component << ", " << a.z_component << ")"; 
	}
	friend istream& operator>>(istream& s, vec_3d& a) {
		return s >> a.x_component >> a.y_component >> a.z_component;
	}
	double getX() const {
		return x_component;
	} double getY() const {
		return y_component;
	} double getZ() const {
		return z_component;
	}
	double angleXZ() const {
		return atan2(y_component, x_component);
	}
	double angleXY() const {
		return atan2(z_component, x_component);
	}
	double angleXZdegree() const {
		return (180/PI)*atan2(y_component, x_component);
	}
	double angleXYdegree() const {
		return (180/PI)*atan2(z_component, x_component);
	}
	double mag() const {
		return sqrt((x_component*x_component)+(y_component*y_component)+(z_component*z_component));
	}
	double magsq() const {
		return (x_component*x_component)+(y_component*y_component)+(z_component*z_component);
	}

};
double dot(vec_3d& a, vec_3d& b) {
	return (a.getX()*b.getX() + a.getY()*b.getY() + a.getZ()*b.getZ());
}
