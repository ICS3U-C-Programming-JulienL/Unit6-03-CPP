// Copyright (c) 2023 Julien Lamoureux All rights reserved.

// Created By: Julien Lamoureux
// Date: December 17, 2023
// This program display the minimum of 10 values

#include <time.h>
#include <array>
#include <cstdlib>
#include <iostream>
#include <random>

int minValue(std::array<int, 10> listOfNumbers) {
    // initialize min to 100 and set array size to 9
    int min = 100;

    // use a for each loop when aNum < listOfNumbers
    for (int aNum : listOfNumbers) {
        // if aNum < min, make aNum the min
        if (aNum < min) {
            min = aNum;
        }
    }

    // return the min
    return min;
}

int main() {
    // declare variables
    int randNum, counter, min;

    // declare constants
    const int MAX = 100;
    const int MIN = 0;
    const int ARRAY_SIZE = 10;

    // declare randomNumbers
    std::array<int, 10> randomNumbers;

    // tell the user what the program does
    std::cout << "This program display the minimum of the following values"
              << std::endl;

    // use a for loop when counter < ARRAY_SIZE
    for (counter = 0; counter < ARRAY_SIZE; counter++) {
        // initialize seed
        std::random_device rseed;

        std::mt19937 rgen(rseed());  // mersenne_twister

        std::uniform_int_distribution<int> idist(MIN, MAX);  // [0,100]

        // generate a random number between 0 and 100
        randNum = idist(rgen);

        // append randomNumbers to the random number
        randomNumbers[counter] = randNum;

        // display randomNumbers
        std::cout << randomNumbers[counter] << std::endl;
    }

    // call the min value function
    min = minValue(randomNumbers);

    // display the minimum value
    std::cout << "The minimum value is  "
              << min << std::endl;
}
