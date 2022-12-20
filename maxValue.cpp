// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Created on: December 15, 2022
// This program generates 10 random numbers from
//  0 - 100 and then finds and displays the highest / max
// number of all of them


#include <iostream>
#include <random>
#include <array>


// Declared Constant at global scope (for function)
const int MAX_ARRAY_SIZE = 10;


// This function finds and returns the max value of an array
int FindMaxValue(std::array<int, MAX_ARRAY_SIZE> randomIntegerList) {
    // Declared Variable
    int listMaxNumber = 0;

    // Goes through each index of the array to determine the highest number
    for (int counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        // Checks if the index of the list is higher than
        // the placeholder value for the highest number
        if (randomIntegerList[counter] > listMaxNumber) {
            // Assigns the placeholder variable to the number
            // in the index of the array
            listMaxNumber = randomIntegerList[counter];
        }
    }

    // Returns the max number of the list to the array
    return listMaxNumber;
}


int main() {
    // Declared Constants
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;

    // Declared Array with size of 10
    std::array<int, MAX_ARRAY_SIZE> arrayOfIntegers;

    // Declared Variables
    int randomNumber, maxNumber;

    // Generates 10 random numbers and adds them to an array
    // Displays what number and where it was added to (to console)
    for (int counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        // Generates a random number (from 0-100)
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(MIN_NUM, MAX_NUM);

        // Holds the random number (in variable)
        randomNumber = idist(rgen);

        // Adds the random number to the array
        arrayOfIntegers[counter] = randomNumber;

        // Displays what number and where it was added to in the array
        std::cout << arrayOfIntegers[counter]
                  << " added to the array at position " << counter << std::endl;
    }

    // Calls function to find the max number in the array
    maxNumber = FindMaxValue(arrayOfIntegers);

    // Displays the highest number in the array to the console
    std::cout << "\nThe average of the numbers: " << maxNumber << std::endl;
}
