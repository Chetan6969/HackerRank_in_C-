#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
     // Create a stringstream object to operate on the input string
    stringstream ss(str);
    
    // Create a vector to store the parsed integers
    vector<int> integers;
    
    // Temporary variables to store each integer as it's parsed
    int num;
    
    // Loop through the stringstream to extract integers
    while (ss >> num) {
        // Push each parsed integer into the vector
        integers.push_back(num);
        
        // Check if the next character is a comma and discard it
        if (ss.peek() == ',') {
            ss.ignore();
        }
    }
    
    // Return the vector of parsed integers
    return integers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}