#include <cmath>
#include <iostream>
#include <string>
using namespace std;

const string username = "Hacker";
const string password = "123";
const int number_of_attempts = 3;

//returns true if both matches
bool authentication(string entred_username, string entred_password){
  if(username != entred_username){
    return(false);
  }

  if(password != entred_password){
    return(false);
  }
  // if pasword and username match
  return(true);
}

int main() {
  string entred_username = "";
  string entred_password = "";

  for(int i = 0; i < number_of_attempts; i++){
    cout << "Type your username bellow\n";
    cin >> entred_username;
    cout << "Type your password bellow\n";
    cin >> entred_password;

    if(authentication(entred_username, entred_password)){
      cout << "Access has granted\n";
      return 0;
    }
    cout << "Access has restricted\n You have ";
    cout << 2-i;
    cout << " more attempts\n";
  }
  //if there is no more attemps
  cout << "You have no more attempts";
  return 0;

}