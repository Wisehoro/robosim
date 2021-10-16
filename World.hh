#pragma once


#include <cmath>
#include <iostream>
#include <robot.hh>
#include <vector>
using namespace std;
class Square {
private: 
    double x, y, land_elevation, sea_elevation;
    string terrain_type;
public:
    Square(double x=0, double y=0, double land_elevation=-100, double sea_elevation=0, string terrain_type="water") : x(x), y(y), land_elevation(land_elevation), sea_elevation(sea_elevation), terrain_type(terrain_type) {}
};

class world {
private:
    const double size_x, size_y;
    vector<robot> robots_in_world;
    vector<beacon> beacons_in_world;
    vector<vector<Square>> world_map;
public:
    world(double size_x=1000, double size_y=1000) : size_x(size_x), size_y(size_y) {

    }

    friend void draw_world(world a){}
  /*
    friend world Coordinates_Matrix(world a) {
    for (int loop_1=0; loop_1<a.size; loop_1++){
        for (int loop_2=0; loop_2<3; loop_2++)
        {
            if (loop_2 = 1){
                a.Coordinates[loop_1][loop_2]={a.X_elevation};
            }
            if (loop_2 = 2){
                a.Coordinates[loop_1][loop_2]={a.Y_elevation};
            }
            if (loop_2 = 3){
                a.Coordinates[loop_1][loop_2]={a.Z_elevation};
            }
        }
        
    }
    return 0;
  }
  */
  
    


  /* 
  make a class of unit of land (square) variables of elevation of land, water, air, etc.
  then make a mtrix of the squares within the world class
  include the draw function: 
  array of robots & beacons
  */
};




int main() {
 cout<<"hi"<<endl;
}