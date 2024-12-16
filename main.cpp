#include "AUList.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include "BST.h"
#include <vector>

using namespace std;



int main() {
    BST bst;

    // This opens the CSV file
    std::ifstream inputFile("/Users/codyshay/Documents/project/project/Dd5e_monsters.csv");

    // Checks if the file is open or gives an error
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file." << std::endl;
        return 1; // Return an error code
    }

    std::string line;
    // This will read each line from the file
    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        std::vector<std::string> columns;
        std::string column;
        // Split the line into columns using comma
        while (std::getline(iss, column, ',')) {
            columns.push_back(column);
        }

        if (columns.size() == 4) {
            bst.insert(columns[0], columns[1], columns[2], columns[3]);
        }
    }

    inputFile.close();

    bst.inorderTraversal();

    return 0;
}
            
    
//    // Insert elements into the BST
//    int elements[] = {5, 3, 7, 2, 4, 6, 8};
//    for (int element : elements) {
//        bst.insert(element);
//    }
//
//    // Perform in-order traversal
//    std::cout << "In-order traversal: ";
//    bst.inorderTraversal();
//
//    return 0;
//}




//
//
//
//
//AUList csvtoAUList(std::string csvfile) {
//    std::cout << "test 2" << std::endl;
//
//    AUList retCCList;
//    ifstream ReadFile(csvfile.c_str()); // Convert std::string to const char*
//    
//    if (!ReadFile.is_open()) {
//        cerr << "file not open!" << endl;
//    }
//    std::cout << "test 3" << std::endl;
//
//
//
//    string line, curvalue;
//    getline(ReadFile, line); // throw away the first line (column names)
//    while (getline(ReadFile, line)) {
//        stringstream ss(line); // turn the line into a string-stream
//        int fielditer = 0;
//        CCFraudRecord newrec;
//
//        while (getline(ss, curvalue, ',')) { // Separate each variable per sample from the comma separator
//            switch (fielditer) { // We need to explicitly convert values to the appropriate type (stoi=integer, stod=double)
//                case 0: newrec.name = curvalue; break;
//                case 1: newrec.size = curvalue; break;
//                case 2: newrec.HP = curvalue; break;
//                case 3: newrec.armor = curvalue; break;
//
//            }
//            fielditer++;
//        }
//        retCCList.PutItem(newrec);
//    }
//    return retCCList;
//}
//
//int main(int argc, char** argv) {
//	std::cout<< "test 1" <<std::endl;
//	AUList CCFraudData=csvtoAUList("/Users/codyshay/Documents/project/project/creditcard_balanced.csv");
//	//AUList dndData=csvtoAUList("/Users/codyshay/Documents/project/project/Dd5e_monsters.csv");
//	CCFraudData.PrintList();
//	//dndData.PrintList();
//}
