#include <iostream>
#include <fstream>
#include <map>
#include <string>

/**************************************
Solving:
  1. Use a hash table to store the number of occurrences of 0-9
  2. Traverse the numbers
  3. Split the natural numbers, and count the number of occurrences of each digit
Time Complexity:
  O(n)
Space Complexity:
  O(1)
**************************************/

int main(int argc, char **argv)
{
    // read file
    int x;
    std::ifstream inFile;
    inFile.open("1_input.txt"); //open a file to perform read operation using file object
    if (inFile.is_open()){ //checking whether the file is open
        std::string tp;
        while(getline(inFile, tp)){ //read data from file object and put it into string.
            x = std::stoi(tp);
        }
        inFile.close(); //close the file object.
    }
    // core code
    std::map<int, int> m;
    for(int j = 0; j < 10; j++){
        m[j] = 0;
    }
    for(int i=1; i <= x; i++){
        int cur = i;
        while(cur != 0){
            m[cur%10] += 1;
            cur /= 10;
        }
    }
    // write file
    std::ofstream outFile("1_output.txt");
    for(int j = 0; j < 10; j++){
        outFile << m[j] << std::endl;
    }
    outFile.close();
    return 0;
}
