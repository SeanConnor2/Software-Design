#include<iostream>
#include<string>

using namespace std;
//class vehicle, information about vehicles
class vehicle {
	int id;
	int date;
	int miles;
	double fuel;
	string insuranceName;	
	string insuraceID;
	string name;
	string passengers;
public:
	vehicle();
	//get functions
	int getDate();
	int getMiles();
	int getId();
	string getName();
	string getPassengers();
	string getInsuraceName();
	string getInsuraceID();
	//fuelcost function with default fuel cost at $2
	double getFuelCost(double, double fuelCost = 2.00);
	//set functions
	void setDate(int date);
	void setMiles(int miles);
	void setId(int id);
	void setName(string name);
	void setPassengers(string passengers);
	void getInsuraceName(string insuranceName);
	void getInsuraceID(string insuraceID);
};
//class content for content of vehicles
class content {
	string items;
	int amount;
public:
	content();
	string getItems();
	int getAmount();
	void setItems(string items);
	void setAmount(int amount);
};
//class User
class user {
	string employeeName;
	int employeeID;
public:
	string getEmloyeeName();
	int getEmployeeID();
	void setEmployeeName(string employeeName);
	void setEmployeeID(int employeeID);
};
