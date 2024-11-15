/*
This module contains a C++ 11 class that provides random welcome messages.
The class is in the namespace 'Util'.
The  DocTest' unit test for the methods of the selected class is in the file 'test_util.cpp'.
*/

// import the library for vector
#include <vector>
// import the library for string
#include <string>

namespace Util {
/*
Create a class named 'Greeter'
Details:
- Contains a static method named 'GetRandomGreeting' with the following features:
    - The method should return a random greeting message from a List of strings.
    - The list of strings should contain 5 different greetings.
*/
class Greeter {
public:
    static std::string GetRandomGreeting() {
        // create a vector of strings
        std::vector<std::string> greetings = {
            "Hello, World!",
            "Welcome to the C++ World!",
            "Greetings from C++!",
            "Hello, C++!",
            "Welcome to the C++ Programming World!"
        };
        // return a random greeting message
        return greetings[rand() % greetings.size()];
    }   

}