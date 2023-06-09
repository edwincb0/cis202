/*
File: main.cpp
Description: Final Exam Program Part 2
Created: 6/6/23
Author: Edwin Caraballo Berrios
Mail: edwinc0482@student.vvc.edu
*/

#include <iostream>
#include <string>
#include <vector>
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

// Method named minElevation that returns the minimum elevation
Mountain minElevation (vector<Mountain> mountains) {
    Mountain minMountain = mountains.at(0);
    for (Mountain mountain : mountains) {
        if (mountain.getElevation() < minMountain.getElevation()) {
            minMountain = mountain;
        }
    }
    return minMountain;
}

int main() {
    // 7 instances of Mountain objects
    Mountain chimborazo("Chimborazo", "Ecuador", 20549.0);
    Mountain matterhorn("Matterhorn", "Switzerland", 14692.0);
    Mountain olympus ("Olympus", "Greece (Macedonia)", 9573.0);
    Mountain everest ("Everest", "Nepal", 29029.0);
    Mountain mountMarcy ("Mount Marcy - Adirondacks", "United States", 5344.0);
    Mountain mountMitchell ("Mount Mitchell - Blue Ridge", "United States", 6684.0);
    Mountain zugspitze ("Zugspitze", "Switzerland", 9719.0);

    // Mountain objects are placed in a data structure
    vector<Mountain> mountainData; 
    mountainData.push_back(chimborazo);
    mountainData.push_back(matterhorn);
    mountainData.push_back(olympus);
    mountainData.push_back(everest);
    mountainData.push_back(mountMarcy);
    mountainData.push_back(mountMitchell);
    mountainData.push_back(zugspitze);

    // Iterate over the data structure & print out its details
    for (Mountain mountain : mountainData) {
        cout << "Mountain: " << mountain.getName() << endl;
        cout << "Country: " << mountain.getCountry() << endl;
        cout << "Elevation (in feet): " << mountain.getElevation() << endl;
        cout << "Elevation (in meters): " << mountain.toMeters() << endl;
    }

    return 0;
}