/*
Chapter 2 Exercise 7 - Ocean Levels
File Name: Chapter2Exercise7.cpp
Kason Steiner
09/2024

Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:
• The number of millimeters higher than the current level that the ocean’s level will be in 5 years.
• The number of millimeters higher than the current level that the ocean’s level will be in 7 years.
• The number of millimeters higher than the current level that the ocean’s level will be in 10 years.
Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so that the user can enter the number of the number of millimeters the ocean level rises per year..
*/  

#include <iostream>

using namespace std;
int main() { 

double riseRate = 1.5;
double year;
  
year = riseRate * 5;
cout << "In 5 years the ocean's level will increase by " << year << " millimeters.\n";

year= riseRate * 7;
cout << "In 7 years the ocean's level will increase by " << year<< " millimeters.\n";

year = riseRate * 13;
cout << "In 13 years the ocean's level will increase by " << year << " millimeters.\n";
  

  return 0;
}