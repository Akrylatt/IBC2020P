#include <iostream>
#include <cmath>
using namespace std;

// loaded input {x0, y0}, .., {x8, y8}
int positions[8][2];

// loads input
void loadPositionFromInput(){
  for(int i=0; i<8; i++)
  {
    for (int j=0; j<2; j++)
    {
       cin>>positions[i][j];
    }
  }
}

//returns false if no queen beat any other in horizontal or vertical direction
bool checkPositions_HorizontalVertical(){
  for(int i = 0; i < 8; i++){
    
    // every coordinates should be presented exactly once time
    int count_x = 0;
    int count_y = 0;

    for(int j = 0; j < 8; j++){
      
      if(positions[j][0] == i){
        count_x++;
        
      }
      if(positions[j][1] == i){
        count_y++;
        
      }
    } 
    // if some coordinates is there more than once time it means 2 queens are on the same coordinate (x, y or both)
    if(count_x > 1 || count_y > 1){
      
      return(true);
    }
  }
  
  return(false);
}

// check diagola beating
bool checkPositions_Diagonal(){
  
  for(int i = 0; i < 8; i++){

    for(int j = 0; j < 8; j++){
      
      if(i == j){
        continue;
      }

      // if |x1 - x2| == |y1 - y2| queens are on the same diagonal
      if(abs(positions[i][0] - positions[j][0]) == abs(positions[i][1] - positions[j][1])){
        return(true);
      }
    }
    return(false);
  }
  
  return(false);
  
}

int main() {

  loadPositionFromInput();
  
  // in case they beat
  if(checkPositions_HorizontalVertical() || checkPositions_Diagonal()){
    cout << "YES";
    return 0;
  }

  // in case that it is valid positon
  cout << "NO";
  return 0;
 

}
