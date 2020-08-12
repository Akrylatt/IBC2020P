#include <iostream>
#include <cmath>
using namespace std;

int N;
int K;
int li;
int ri;

string pins = "";

//fill the string with N * "I"
void buildPins(){
  for(int i = 0; i < N; i++){
    pins += "I";
  }
}

int main() {

  cin >> N >> K;
  buildPins();
//for every K set the right number of pins to '.'
  for(int i = 0; i < K; i++){
    cin >> li >> ri;
    for(int j = li - 1; j < ri; j++){
      pins[j] = '.';
    }
  }

  cout << pins;
  
  return 0;
 

}
