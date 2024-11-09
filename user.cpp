// User.cpp
#include "User.h"

User::~User() = default;

void User::setName(const std::string& name) {
    this->name = name;
}

void User::setGoal(const std::string& goal) {
    //Defines the user goal of the plan, it also decleares if is extreme, moderate or normal weightloss
    this->goal = goal;
}

void User::setSplit(std::array<double, 3>split){
    //Defines how the user wants to devide the macronutrients
}

void User::findMaintenance(double calories, double weight, double height) {
    // Finds the average calories the user most eat
}

double User::findBulkCals(double calories, string goal) {
    // Implementation goes here
    return bulkCals; // Placeholder return
}

double User::findDeficitCals(double calories, string goal) {
    return deficitCals; // La suma de las calorías normales más lo que quiere subir
}
