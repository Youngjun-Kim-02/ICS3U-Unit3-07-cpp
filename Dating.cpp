// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program checks if your age is acceptable to date my grandchild

#include <iostream>

int main() {
    // this function checks if your age is acceptable to date my grandchild
    std::string ageAsString;
    int ageAsNumber;
    
    // input
    std::cout << "Enter your age: ";
    std::cin >> ageAsString;
    std::cout << "" << std::endl;
    
    // process
    try {
        ageAsNumber = std::stoi(ageAsString);
        if (ageAsNumber < 25)
            // output
            std::cout << "You are too young!";
        else if (ageAsNumber > 40)
            // output
            std::cout << "You are too old!";
        else
        std::cout << "You are accepted to date my grandchild.";
    } catch (std::invalid_argument) {
        std::cout << "That was not valid input.";
    }
}
