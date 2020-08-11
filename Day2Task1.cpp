#include <iostream>

using namespace std;


int currentMinimalPathDistance = 10000000;
int firstCity = 0;

int findShortestPath_4(){

  const int numberOfCities = 4;

  int distances[numberOfCities][numberOfCities];
      for (int i = 0; i < numberOfCities; ++i) {
          for (int j = 0; j < numberOfCities; ++j) {
              scanf("%i", &distances[i][j]);
          }
      }

  for(int secondCity = 1; secondCity <= numberOfCities - 1; secondCity++){
    for(int thirdCity = 1; thirdCity <= numberOfCities - 1; thirdCity++){
      if(thirdCity == secondCity){
        
        continue;
      }
      for(int fourthCity = 1; fourthCity <= numberOfCities - 1; fourthCity++){
        if(fourthCity == thirdCity || fourthCity == secondCity){
          
          continue;
        }
          
          int currentPathDistance = 0;
          currentPathDistance += distances[firstCity][secondCity];
          currentPathDistance += distances[secondCity][thirdCity];
          currentPathDistance += distances[thirdCity][fourthCity];        
          currentPathDistance += distances[fourthCity][firstCity];
          if(currentPathDistance < currentMinimalPathDistance){
            currentMinimalPathDistance = currentPathDistance;
          }
        }
      }
    }
  
  return currentMinimalPathDistance;
}

int findShortestPath_5(){

  const int numberOfCities = 5;

  int distances[numberOfCities][numberOfCities];
      for (int i = 0; i < numberOfCities; ++i) {
          for (int j = 0; j < numberOfCities; ++j) {
              scanf("%i", &distances[i][j]);
          }
      }

  for(int secondCity = 1; secondCity <= numberOfCities - 1; secondCity++){
    for(int thirdCity = 1; thirdCity <= numberOfCities - 1; thirdCity++){
      if(thirdCity == secondCity){
        
        continue;
      }
      for(int fourthCity = 1; fourthCity <= numberOfCities - 1; fourthCity++){
        if(fourthCity == thirdCity || fourthCity == secondCity){
          
          continue;
        }
        for(int fifthCity = 1; fifthCity <= numberOfCities - 1; fifthCity++){
          if(fifthCity == fourthCity || fifthCity == thirdCity || fifthCity == secondCity){
            
            continue;
          }

          
          int currentPathDistance = 0;
          currentPathDistance += distances[firstCity][secondCity];
          currentPathDistance += distances[secondCity][thirdCity];
          currentPathDistance += distances[thirdCity][fourthCity];
          currentPathDistance += distances[fourthCity][fifthCity];
          currentPathDistance += distances[fifthCity][firstCity];
          if(currentPathDistance < currentMinimalPathDistance){
            currentMinimalPathDistance = currentPathDistance;
          }
        }
      }
    }
  }
  return currentMinimalPathDistance;
}

int findShortestPath_6(){

  const int numberOfCities = 6;

  int distances[numberOfCities][numberOfCities];
      for (int i = 0; i < numberOfCities; ++i) {
          for (int j = 0; j < numberOfCities; ++j) {
              scanf("%i", &distances[i][j]);
          }
      }

  for(int secondCity = 1; secondCity <= numberOfCities - 1; secondCity++){
    for(int thirdCity = 1; thirdCity <= numberOfCities - 1; thirdCity++){
      if(thirdCity == secondCity){
        
        continue;
      }
      for(int fourthCity = 1; fourthCity <= numberOfCities - 1; fourthCity++){
        if(fourthCity == thirdCity || fourthCity == secondCity){
          
          continue;
        }
        for(int fifthCity = 1; fifthCity <= numberOfCities - 1; fifthCity++){
          if(fifthCity == fourthCity || fifthCity == thirdCity || fifthCity == secondCity){
            
            continue;
          }

            for(int sixthCity = 1; sixthCity <= numberOfCities - 1; sixthCity++){
            if(sixthCity == fourthCity || sixthCity == thirdCity || sixthCity == secondCity || sixthCity == fifthCity){
              
              continue;
            }

            
            int currentPathDistance = 0;
            currentPathDistance += distances[firstCity][secondCity];
            currentPathDistance += distances[secondCity][thirdCity];
            currentPathDistance += distances[thirdCity][fourthCity];
            currentPathDistance += distances[fourthCity][fifthCity];
            currentPathDistance += distances[fifthCity][sixthCity];
            currentPathDistance += distances[sixthCity][firstCity];
            if(currentPathDistance < currentMinimalPathDistance){
              currentMinimalPathDistance = currentPathDistance;
            }
          }
        }
      }
    }
  }
  return currentMinimalPathDistance;
}


int main(){

    int numberOfCities = 0;

    int input = 0;

    cin >> input;

    if(input == 4){

      cout << findShortestPath_4();
      return 0;
    }

    if(input == 5){
      cout << findShortestPath_5();
      return 0;
    }

    if(input == 6){
      cout << findShortestPath_6();
      return 0;
    }
    cout << "We cannot count this number of cities yet \n";

    return 0;

}
