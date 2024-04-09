#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string str = "Hello World";
    
    // Using std::transform to convert each character to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    cout << "Original String: Hello World" << std::endl;
    cout << "Lowercase String: " << str << std::endl;

    return 0;
}