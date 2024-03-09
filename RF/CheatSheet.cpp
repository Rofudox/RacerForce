
//How to compile
/* Compiling scripts:
    Standard compiling: g++ script.cpp -o script_name
    Multi files compiling (linking files): g++ main.cpp functions.cpp -o script_name

Running scripts:
    ./script_name

Adding own scripts: (MUST BE INCLUDED IN THE FILE WITH main() {}
    #include "my_script.hpp";
    OR
    #include "my_script.h";

Scripts.cpp, .h information:
    .cpp files should include the functionality and logic
    .h   files should include the functions from .cpp files and the arguments from the functions

    script.cpp could have:
        double average(double num1, double num2) {
            return (num1 + num2) /2:
        }

    script.h should then have:
        double average(double num1, double num2);

Adding build in functions for C++:
    #include <iostream>
*/

//Variables and types
/*
Variables shortlist:
    int: integers
    double: floating-point numbers
    char: individual characters
    string: sequence of characters
    bool: true/false

Datatypes:
    - signed
    - unsigned
    - short
    - long
    const: (cannot be changed during runtime)
        const double quarter = 0.23;

Casting types:
    double weight1;
    int weight2;

    weight1 = 123.41;
    weight2 = (int) weight1;
        
*/

//Input and Output
/*
Input and output:
    print to terminal:
        std::cout << "The message";
    
    take input from user:
        double weight1;
        std::cout << "Tell me your weight";
        std::cin >> weight1;

    printing it out:
        std::cout << "Your weight is: " << weight1;

Logical Operators(OP):
    And: &&
    Or : ||
    Not: !(exp)
    Equ: eq1 == eq2

*/

//Loop types
/*
If statements:
    if (cond OP cond) {
        something happens
    }
    
    else if (cond OP cond) {
        something else happens
    }


While loops:
    while (cond1 OP cond2) {
        The loop will continue cond1 meets cond2
    }


For loops:
    for (int i = 0; i < 10; i++) {
        The loop will continue until i == 10
    }

Switch cases:
    Will need a variable to check against, best if limited outcome of a whileloop and if statement combined
        can also be an expression:

    int my_variable; (The expression)
    switch (my_variable) {
        case 1:
            something happens;
            break;
        case 2:
            something happens;
            break;
        .
        .
        .
        default:
            something happens, if expression doesn't match my_variable
*/

//Vectors and Arrays
/* 
Vectors:
    Vectors are kinda like lists:
    an int vector:
        std::vector<int> even = {2, 4, 6, 8, 10};

    Vectors have the functions:
        even.push_back(12);
        even.pop_back(10);
        even.size();

Arrays:
Arrays start with index 0 
    int fav_num[4]; 
        This will create an int array with size of 4
    int fav_num[] = {2, 3, 4, 5};
        This will create an int array of size 4 with specific values to start.
*/

//Functions and arguments
/*
 Functions: 
    void hello(std::string input) {
        This creates the function hello, that takes a string and has no return values
    }

    bool palindrome(std::string text) {
        This creates the function palindrome, which takes a string and has a bool as return value
    }

Inlining:
    to inline a function means to insert the functions body the the function is called.
    This should often be done in the .h files

    EXCAMPEL:
        main.cpp will have:
            int main() {

                std::cout << function("string");
            }
        script.cpp will have:
            #include <string>
            std::string function(std::string S_1, std::string S_2) {

                some functionality;
            }

        script.h will have:
           
           inline
           std::string function(std::string S_1) {
                
                some functionality
           }
*/

//Arguments
/*
Default Arguments:
     Declaration
        void intro(std::string name, std::string lang = "C++");

     Definition
        void intro(std::string name, std::string lang) {
            std::cout << "Hi, my name is " << name << " and I'm learning " << lang << ".\n";
        }

    NOTE:
        If the first argument is default but the second isn't, then both arguments are still needed.
        If the second argument is false, then only the first arugment is needed.

Function overloading:

    void function(char let) {
        std::cout << " " << let << " ";

    the same function name can be reused:

    void function(int num) {
        std::cout << " " << num << " ";


Template functions:
    Functions with anonymous variables, this will generally slow compiletime, but is effective in runtime. 
        
    Inside of a .h file, we can write the logic from the same .cpp file:

         template <typename T>
         T get_smallest(T num1, T num2) {
  
            return num2 < num1? num2 : num1;
         }
    We can then use the template inside of main.cpp:

        int main() {
            std::cout << get_smallest(100, 500);
            std::cout << get_smallest(223.4, 21.12);
        }

*/

//Classes
/* 
Classes should be created, in the .h files:
    
    script.h:
        #include <string>

        class Song_name {
            std::string title;

        public:
            void add_title(std::string new_title);
            std::string get_title();
        };

The logic and methods should then be created in the .cpp files

    script.cpp:
        #include "script.h"

        void Song::add_title(std::string new_title) {
            title = new_title;
        }

        std::string Song::get_title() {
            return title;
        }

To instantiate a class in the main file and then printing the value:

    main.cpp:
        #include "script.h"
        int main() {
            Song newSong;
            newSong.add_title("I like BB");

            std::cout << newSong.get_title();

 */

//Constructors
/*
    A short excample of how constructors are made in C++:

Inside of main.cpp:

    #include <iostream>
    #include "script.h"

    int main() {
      Song back_to_black("Back to Black", "Amy Winehouse");
      std::cout << back_to_black.get_title() << "\n";
      std::cout << back_to_black.get_artist();
    }

Inside of script.h:

    #include <string>
    class Song {
      std::string title;
      std::string artist;
    public:
      Song(std::string new_title, std::string new_artist);
      std::string get_title();
      std::string get_artist();
    };

Inside of script.cpp:

    #include "script.hpp"
    Song::Song(std::string new_title, std::string new_artist)
      : title(new_title), artist(new_artist) {}
    std::string Song::get_title() {
      return title;
    }
    std::string Song::get_artist() {
      return artist;
    }

*/

//Deconstructors
/*
To clean up after a function or constructor we can use the ~ symbol infront of a class:
    in the .h script:
        
        public:
            Song(std::string new_title, std::string new_artist);
            ~Song();

    in the .cpp script:

    Song::Song(std::string new_title, std::string new_artist)
        : title(new_title), artist(new_artist) {}
    Song::~Song() {
        std::cout << "Goodbye " << title;
    }
*/

//Reference
/*
References(adresses) are made as:
    int  Val_1 = 10;
    int &Val_2 = Val_1;

in function parameters, we can make refs as:
    void swap(int &i, int &j) {
    int temp = i;
    i = j;
    j = temp;
    }
in function:
    int T(int &i) {
    i = i *3
    return i;
    }
the function will return i and reuse the new value if called again. 

To get the adress of a variable in hexadecimal:
    std::cout << &i;
*/

//Pointers
/*
Pointers can hold the types: int, double, char and bool (not strings)
int* number;

To make a ref to a pointer:
    int v_1 = 2;
    int* p_1 = &v_1;

    to print the value of p_1:
    std::cout << *p_1;

Nullpointers in C++:
    Nullpointers provides typesafe pointers with empty pointers:

    int* p_1 = nullptr;

*/

//Memory allocation
/*
To dynamicaly allocate memory during runtime there are 2 options:
    
    To allocate v_1
    v_1 = new int[num];

    To free the memory
    delete v_1;

*/

//File I/O
/*
To read/write from texts:
    #include <iostream>
    #include <string>
    #include <fstream>

    ifstream inFile; <-- The decleration

    int main() {
        inFile.open("docu.txt");
        if (inFile.fail())
            cout:: endl << "file not found" << endl;
        else{
            while (!inFile.eof()) { 
                getline(inFile, str);
                cout << str << endl;
            }
            inFile.close();
        } return (0);
    }
        
*/

//Writing to file
/*
Excample how to write to files:
    #include <fstream>
    using namespace std;
    ofstream outFile;
    float a = 4.3f, b = 2.2f;
    
    int main() {
        outFile.open("text.txt");
        if (outFile.fail())
            std::cout << endl << "file 404" << endl;
        else {
            outFile << "a = " << a << endl;
            outFile.close();
            }
            return (0);
    }
*/