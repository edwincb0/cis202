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
    Mountain(string name, string country, double elevation)  // Constructor initializes name, country, & elevation of Mountain object
        : name(name), country(country), elevation(elevation) {}
    
    // Setters
    void setName(string newName) {
        name = newName;
    }

    void setCountry(string newCountry) {
        country = newCountry;
    }

    void setElevation(double newElevation) {
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

    double toMeters() {     // Convertion
        return elevation / 3.2908;
    }

};

// Method named minElevation that returns the minimum elevation
Mountain minElevation (vector<Mountain> mountains) {
    Mountain minMountain = mountains.at(0);                         // This assumes that the 1st mountain has the minimum elevation
    for (Mountain mountain : mountains) {                           // Iterates over each mountain
        if (mountain.getElevation() < minMountain.getElevation()) { // If current mountain elevation is less than the minimum elevation,
            minMountain = mountain;                                 // then we update it
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
        cout << endl;   // Makes the code more clear & visible 
    }

    // Prints out elevation & name of shortest mountain
    Mountain minElevMountain = minElevation(mountainData);
    cout << "The Shortest Mountain is: " << minElevMountain.getName() << endl;
    cout << "Elevation (in feet): " << minElevMountain.getElevation() << endl;
    cout << "Elevation (in meters): " << minElevMountain.toMeters() << endl;

    return 0;
}