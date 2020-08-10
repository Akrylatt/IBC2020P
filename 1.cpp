#include <cmath>
#include <iostream>
#include <string>
using namespace std;

//coordinates
float ax = 0;
float ay = 0;
float bx = 0;
float by = 0;
float cx = 0;
float cy = 0;

//distances
float ab = 0;
float bc = 0;
float ac = 0;

// just load input
void load_input(){
  cin >> ax >> ay >> bx >> by >> cx >> cy;
}

//returns an arean between two points
float count_distance(float x1, float y1, float x2, float y2){
  // formula for counting distance of two points 
  return (sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)));
}

// returns true if is triangle, false if points lyes in one line
bool is_triangle() {
  // if the distance between two vertexes is bigger than sum of other two legs it is not a triangle
  if((ab + bc) <= ac){
    return(false);
  }
  // must be checked two times 
  if((ac + bc) <= ab){
    return(false);
  }
  //it is a triangle
  return(true);
}

//returns area of the triangle based on the herons formula
float triangle_area(){
  float s = (ab + bc + ac)/2;
  return(sqrt(s*(s-ab)*(s-bc)*(s-ac)));
}

int main() {
  //reads input
  load_input();
  
  //sets distances between points
  ab = count_distance(ax, ay, bx, by);
  bc = count_distance(bx, by, cx, cy);
  ac = count_distance(ax, ay, cx, cy);

  //if it is a triangle
  if (is_triangle()){

    cout << triangle_area();
    cout << "j^2";
    return 0;
  }

  //if not
  cout << "Coordinates you entered cannot create a triangle";

}