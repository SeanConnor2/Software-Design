#include"Vehicle.h"
#include<string>
#include<iostream>

using namespace std;

	//get functions
int vehicle::getDate() {
	return date;
}
int vehicle::getMiles() {
	return miles;
}
int vehicle::getId() {
	return id;
}
string vehicle::getName() {
	return name;
}
string vehicle::getPassengers() {
	return passengers;
}
string vehicle::getInsuraceName() {
	return insuranceName;
}
string vehicle::getInsuraceID() {
	return insuraceID;
}

//fuelcost function with default fuel cost at $2 per gallon
//20 Miles per gallon standard for every vehicle.
double vehicle::getFuelCost(double, double fuelCost) {
	double gallons;
	gallons  = miles / 20;
	return gallons * fuelCost;
}
//set functions
void vehicle::setDate(int date) {
	this->date = date;
}
void vehicle::setMiles(int miles) {
	this->miles = miles;
}
void vehicle::setId(int id) {
	this->id = id;
}
void vehicle::setName(string name) {
	this->name = name;
}
void vehicle::setPassengers(string passengers) {
	this->passengers = passengers;
}
void vehicle::getInsuraceName(string insuranceName) {
	this->insuranceName = insuranceName;
}
void vehicle::getInsuraceID(string insuraceID) {
	this->insuraceID = insuraceID;
}


//class content for content of vehicles

string content::getItems() {
	return items;
}
int content::getAmount() {
	return amount;
}
void content::setItems(string items) {
	this->items = items;
}
void content::setAmount(int amount) {
	this->amount = amount;
}
//class User

string user::getEmloyeeName() {
	return employeeName;
}
int user::getEmployeeID() {
	return employeeID;
}
void user::setEmployeeName(string employeeName) {
	this->employeeName = employeeName;
}
void user::setEmployeeID(int employeeID) {
	this->employeeID = employeeID;
}

