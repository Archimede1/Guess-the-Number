#include <iostream>
#include <ctime>
#include <string>
using namespace std;

string Guess_The_Number(int a, int b);

int main() {
  string game_1 = "Guess The Number";
  string exit = "Bye";
  cout << "Welcome to C++ Games" << endl << "Choose the Game Your Would Like the Play" << endl << "To Play Type One of the Choices {'Guess The Number'}: ";
  cin >> game_1;
  cin >> exit;
  if (cin >> game_1){
    cout << Guess_The_Number(1, 10) << endl;

  }
  else {
        cout << "New Games Will Be Coming Soon!" << endl << "Goodbye";

  }
}
string Guess_The_Number(int a, int b){
    srand((unsigned)time(0));
    int random;
    int x;
    cout << " Guess a Number Between " << a << " and " << b << ": " << endl;
    cin >> x;
    random = rand() % (b - a + 1) + a;
      if (x == random){
        cout << "Congrats You Guessed the Right Number" << endl;
      }
    
       else {
        cout << "HaHa, Wrong Answer" << endl;
        cout << Guess_The_Number(a, b) << endl;
              
      }
  return "Thanks For Playing, 'Run' to Play Again";
}
