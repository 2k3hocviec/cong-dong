#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <unordered_map>
#include "Function.cpp"
#include "Student.cpp"
using namespace std;

class Console {
public:
    void Start();
    vector<Student> get_information();
    bool check_information(vector<Student>& other);
    void print_information(vector<Student>& a);
};