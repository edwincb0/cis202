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
    Mountain(string name, string country, double elevation) {   // Constructor
        this->name = name;
        this->country = country;
        this->elevation = elevation;
    }
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

    double toMeters() {
        return elevation / 3.2908;
    }

};



int main() {
    // 7 instances of Mountain objects
   Mountain chimborazo("Chimborazo", "Ecuador", 20549.0);
   Mountain matterhorn("Matterhorn", "Switzerland", 14692.0);
   Mountain olympus ("Olympus", "Greece (Macedonia)", 9573.0);
   Mountain everest ("Everest", "Nepal", 29029.0);
   Mountain mountMarcy ("Mount Marcy - Adirondacks", "United States", 5344.0);
   Mountain mountMitchell ("Mount Mitchell - Blue Ridge", "United States", 6684.0);
   Mountain zugspitze ("Zugspitze", "Switzerland", 9719.0);



    return 0;
}