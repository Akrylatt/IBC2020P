#include <iostream>
#include <algorithm>
#include <iostream>
#include <list>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <chrono>

using namespace std;

template <typename T>
bool contains(std::list<T> & listOfElements, const T & element)
{
    // Find the iterator if element in list
    auto it = std::find(listOfElements.begin(), listOfElements.end(), element);
    //return if iterator points to end or not. It points to end then it means element
    // does not exists in list
    return it != listOfElements.end();
}

int main(){
  
  srand (time(NULL));

  int numberOfExperiments = 10000;

  auto t0 = chrono::high_resolution_clock::now();

  for(int k = 2; k < 366; k++){
    int positive = 0;
    
    for(int j = 0; j < numberOfExperiments; j++){

      std::list<int> dates;

      for(int i = 0; i < k; i++){
        int r = rand() % 366 + 1;
        
        if(!contains(dates, r)){
          dates.push_back(r);
        }
        else{
          positive = positive + 1;
          break;
        }
      }
    }
   /* float probability = (positive * 100/numberOfExperiments);
    cout << k;
    cout << ": ";
    cout << probability;
    cout << "\n";*/
  }

  auto t1 = chrono::high_resolution_clock::now();

  auto duration = chrono::duration_cast<std::chrono::nanoseconds>( t1 - t0 ).count();

  cout << "Time: " << duration / 1000000000 << " s\n";

    return 0;

}
