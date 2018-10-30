#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;
//function prototype
string toLowerCase(string s);
int main() {

	ifstream fin;
	//opening the file
	fin.open("Linguisitc.txt");
	//checking to see if the file opened
	if (!fin.is_open()) {
		cout << "ERROR 404";
	}
	//declaring a string and a vector string
	string data;
	vector<string>myVec;
	
	// loop until end of file
	while (fin >> data) {
		//pushes all of the data from the text file in
		myVec.push_back(data);
	}
	//converts everything in the text file to lowercase
	for (int i = 0; i < myVec.size(); i++){
		myVec[i] = toLowerCase(myVec[i]);
	}
	//sorts the vector in alphabetical order
	sort(myVec.begin(), myVec.end());

	int vectorSize = myVec.size();
	//checks to see if the vector has something in it
	if (vectorSize == 0) {
		cout << "No Words To Count" << endl;
		return 1;
	}
	//prints out 
	cout << "The Word Frequencies Are\n" << endl;
	int wCount = 1;
	data = myVec[0];
	int count = 0;
	for (int i = 1; i < vectorSize; i++) {
		if (data != myVec[i]) {
			cout << data << setw(10) << wCount << "     ";
			wCount = 0;
			data = myVec[i];
			count++;
			if (count == 4) {
				cout << endl;
				count = 0;
			}
		}
		wCount++;
		
	}
	cout << data << ' ' << wCount << endl;
	return 0;
}
//lowercase function
string toLowerCase(string s){
		string r = s;
		for (int i = 0; i < r.size(); i++) {
			if (r[i] >= 'A' && r[i] <= 'Z')
				r[i] = tolower(r[i]);
			if (r[i] == '.')
				r[i] = ' ';
		}

			
		return r;
	}