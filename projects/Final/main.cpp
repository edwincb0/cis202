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
    void setName(string mountainName);
    void setCountry(string country);
    void setElevation(double elevation);



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