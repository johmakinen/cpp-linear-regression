#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>

struct CSVRow {
    float f1;
    float f2;
    float y;
};

struct LRModel {
    float w1;
    float w2;
    float b;
};

// Function to read the data
std::vector<CSVRow> readCSV(const std::string& filename) {
    std::vector<CSVRow> data;      // Vector to store the data
    std::ifstream file(filename);  // Open the file

    // Check if the file is open
    if (!file.is_open()) {
        std::cerr << "Error: Could not open the file." << filename << std::endl;
        return data;
    }

    std::string line;  // Variable to store the line
    int i = 0;
    while (std::getline(file, line)) {
        std::istringstream iss(line);  // Create a string stream from the line
        std::string f1, f2, y;
        if (i == 0) {
            std::getline(iss, f1, ',');
            std::getline(iss, f2, ',');
            std::getline(iss, y, ',');
            std::cout << f1 << ", " << f2 << ", " << y << std::endl;
            i++;
            continue;
        }

        if (std::getline(iss, f1, ',') && std::getline(iss, f2, ',') &&
            std::getline(iss, y, ',')) {
            CSVRow row;
            row.f1 = std::stof(f1); 
            row.f2 = std::stof(f2);
            row.y = std::stof(y);
            data.push_back(row);
        }
    }
    file.close();
    return data;

}

LRModel trainModel(const std::vector<CSVRow>& data){
// b = (X^T * X)^-1 * X^T * y
return LRModel();
}