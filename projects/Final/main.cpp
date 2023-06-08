/*
File: main.cpp
Description: Final Exam Program Part 2
Created: 6/6/23
Author: Edwin Caraballo Berrios
Mail: edwinc0482@student.vvc.edu
*/

#include <iostream>
#include <string>
using namespace std;

class Mountain {
private:
    string name;
    string country;
    double elevation;

public: 
    void setName(string newName);           // Mutator
    void setCountry(string newCountry);     // Mutator
    void setElevation(double newElevation); // Mutator
    string getName();                       // Accessor
    string getCountry();                    // Accessor
    double getElevation();                  // Accessor

    // Setters
    void Mountain::setName(string newName) {
        name = newName;
    }

    void Mountain::setCountry(string newCountry) {
        country = newCountry;
    }

    void Mountain::setElevation(double newElevation) {
        elevation = newElevation;
    }

    // Getters
    string getName() {
        return name;
    }

    string getCountry() {
        return country;
    }

    double getElevation() {
        return elevation;
    }


};



int main() {



    return 0;
}