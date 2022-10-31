#include <iostream>
#include <fstream>
#include <cstring>
#include <chrono>
#include <thread>
using namespace std;
const int CAPACITY = 10;

int ConvertDeg(int degNum);

int main() {
  char readVal[CAPACITY];
  char runVal[] = "run";
  char curr[CAPACITY];
  char high[CAPACITY];
  char low[CAPACITY];
  char humidity[CAPACITY];

  // opens 'readFile.txt' to see if running
  ifstream inFile("readFile.txt");
  if (inFile.is_open()){
    inFile.getline(readVal, CAPACITY);
    //compares string to 'run', runs if true
    if (strcmp(readVal, runVal) == 0) {
      int i = 0;
      inFile.close();
      inFile.clear();
      
      // closes readFile and opens f_to_c to convert data into Celsius
      ifstream inFile("f_to_c.txt");
      
      // reading in data (curr, high, low, humidity)
      if (inFile.is_open()){
        inFile.getline(curr, CAPACITY, ';');
        inFile.getline(high, CAPACITY, ';');
        inFile.getline(low, CAPACITY, ';');
        inFile.getline(humidity, CAPACITY, '\n');
        inFile.close();
        inFile.clear();
      }
      // if unable to open, error msg
      else {
        cout << "Couldnt open err 1" << endl;
      }
      // saving converted temps to file
      ofstream outFile("f_to_c.txt", ios::out);
      i = 0;
      if(outFile.is_open()){
        outFile << ConvertDeg(atoi(curr)) << ";";
        outFile << ConvertDeg(atoi(high)) << ";";
        outFile << ConvertDeg(atoi(low)) << ";";
        outFile << humidity << '\n';
        outFile.close();
        outFile.clear();
      }
      // if unable to open, error msg
      else {
        cout << "Could not open err 2" << endl;
      }
    }
  }
}

// function for converting fahrenheit to celsius
int ConvertDeg(int degNum){
  int endDeg = 0;
  endDeg = (degNum - 32) * 5/9;
  return endDeg;
}