// Copyright (C) 2020 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on December 2020
// This program prints all integers from 1000 to 2000
//      with 5 integers per line


#include <iostream>

int main() {
    // this function prints integers from 1000 to 2000
    int counter = 1000;

    // no input

    // process + output
    for (counter = 1000; counter < 2000 + 1; counter++) {
        if ((counter + 1) % 5 == 0) {
            std::cout << counter << " " << std::endl;
        } else {
            std::cout << counter << " ";
        }
    }
}
