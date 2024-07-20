
#include <iostream>
#include "utils.h"


int main() {
    std::string filename = "data.csv";
    std::vector<CSVRow> data = readCSV(filename);

    // Print the first 5 rows of data
    for (int i = 0; i < 5; i++) {
        std::cout << data[i].f1 << ", " << data[i].f2 << ", " << data[i].y
                  << std::endl;
    }
}