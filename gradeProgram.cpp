// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/11/28
// Gets the user input for a level mark
// Then uses IF ELSE statements to
// Determine the middle percentage. Uses return
// Statements to return the value back to main()
// To be then displayed

#include <iostream>
#include <string>

// To calculate the mark
std::string Calc_Mark(std::string mark) {
    // To return the values of the marks back
    if (mark == "4+") {
        return "97.5";
    } else if (mark == "4") {
        return "90.5";
    } else if (mark == "4-") {
        return "83";
    } else if (mark == "3+") {
        return "78";
    } else if (mark == "3") {
        return "74.5";
    } else if (mark == "3-") {
        return "71";
    } else if (mark == "2+") {
        return "68";
    } else if (mark == "2") {
        return "64.5";
    } else if (mark == "2-") {
        return "61";
    } else if (mark == "1+") {
        return "58";
    } else if (mark == "1") {
        return "54.5";
    } else if (mark == "1-") {
        return "51";
    } else if (mark == "R") {
        return "-50";
    // If the input isn't one of those answers,
    // It is invalid and will be returned as -1
    } else {
        return "-1";
    }
}

int main() {
    // Variables for the mark and percentage
    std::string userMark;
    std::string percentage;

    // Title
    std::cout << "The Grade Program!\n";

    // User Input for the mark
    std::cout << "Please enter your level mark: ";
    std::cin >> userMark;

    // Return statement to get the values back
    percentage = Calc_Mark(userMark);

    // To make sure the input is valid. If the input is invalid,
    // It will be returned as -1
    if (percentage == "-1") {
        std::cout << "Please enter a valid mark!\n";
    } else {
        std::cout << "The middle percentage is " << percentage << "%\n";
    }
}
