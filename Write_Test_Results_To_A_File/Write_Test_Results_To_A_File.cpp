// Write_Test_Results_To_A_File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "String.h"
using namespace std;

int main() {

    char test_string[40];
    cout << "enter a string to test with" << endl;
    cin >> test_string;
    String Test(test_string);

    int len = Test.Length();
    cout << "Length is : " << len << endl;

    int index;
    cout << "Enter an index to find the character at the location" << endl;
    cin >> index;
    char at_index;
    at_index = Test.CharacterAt(index);
    cout << "Character at index " << index << " is " << at_index << endl;

    char other_string[40];
    cout << "enter another string to test with" << endl;
    cin >> other_string;
    String Other(other_string);

    bool equal;
    equal = Test.EqualTo(Other);
    cout << boolalpha << "The two strings are equal? " << equal << noboolalpha << endl;

    char first_append_string[40];
    cout << "enter another string to test with" << endl;
    cin >> first_append_string;
    String First_Append(first_append_string);

    char second_append_string[40];
    cout << "enter another string to test with" << endl;
    cin >> second_append_string;
    String Second_Append(second_append_string);

    First_Append.Append(Second_Append);
    cout << "Appending the second string to the first string results : " << First_Append.CStr() << endl;

    char first_prepend_string[40];
    cout << "enter another string to test with" << endl;
    cin >> first_prepend_string;
    String First_Prepend(first_prepend_string);

    char second_prepend_string[40];
    cout << "enter another string to test with" << endl;
    cin >> second_prepend_string;
    String Second_Prepend(second_prepend_string);

    First_Prepend.Prepend(Second_Prepend);
    cout << "Prepending the second string to the first string results : " << First_Prepend.CStr() << endl;

    char upper_string[40];
    cout << "enter a string with uppercase to test with" << endl;
    cin >> upper_string;
    String Upper(upper_string);

    Upper.ToLower();
    cout << "The string in all lowercase is : " << Upper.CStr() << endl;

    char lower_string[40];
    cout << "enter a string with lowercase to test with" << endl;
    cin >> lower_string;
    String Lower(lower_string);

    Lower.ToUpper();
    cout << "The string in all uppercase is : " << Lower.CStr() << endl;

    char find_in_string[40];
    cout << "enter a string with another string inside it" << endl;
    cin >> find_in_string;
    String Find_In(find_in_string);

    char find_string[40];
    cout << "enter the string inside of the pervious" << endl;
    cin >> find_string;
    String Find(find_string);

    int location;
    location = Find_In.Find(Find);
    if (location == -1) {
        cout << "Find string not found inside the string" << endl;
    }
    else {
        cout << "The first index for the find string is : " << location << endl;
    }

    int start_at;
    cout << "Enter an index for the find function to start at" << endl;
    cin >> start_at;
    location = Find_In.Find(start_at, Find);
    if (location == -1) {
        cout << "Find string not found inside the string" << endl;
    }
    else {
        cout << "The first index for the find string after the start index is : " << location << endl;
    }

    char original_string[40];
    cout << "enter a string with another string in it" << endl;
    cin >> original_string;
    String Original(original_string);

    char find_string_2[40];
    cout << "enter the string that was in the previous" << endl;
    cin >> find_string_2;
    String Find_2(find_string_2);

    char replace_string[40];
    cout << "enter a string to replace the find string" << endl;
    cin >> replace_string;
    String Replace(replace_string);

    Original.Replace(Find_2, Replace);
    cout << "The string after the find string is replaced is : " << Original.CStr() << endl;

    String Read_Write = String();
    cout << "enter a string for the program to read from the console" << endl;
    Read_Write.ReadFromConsole();
    Read_Write.WriteToConsole();

    char first_equality_string[40];
    cout << "enter a string to test with" << endl;
    cin >> first_equality_string;
    String Equal(first_equality_string);

    char second_equality_string[40];
    cout << "enter a string to test with" << endl;
    cin >> second_equality_string;
    String Equal_2(second_equality_string);

    bool equality;
    equality = Equal.operator==(Equal_2);
    cout << boolalpha << "The two strings are equal? : " << equality << noboolalpha << endl;

    equality = Equal.operator!=(Equal_2);
    cout << boolalpha << "The two strings are not equal? : " << equality << noboolalpha << endl;

    char first_assignment_string[40];
    cout << "enter a string to test with" << endl;
    cin >> first_assignment_string;
    String Assign(first_assignment_string);

    char second_assignment_string[40];
    cout << "enter a string to test with" << endl;
    cin >> second_assignment_string;
    String Assign_2(second_assignment_string);

    Assign.operator=(Assign_2);
    cout << "The value assigned was : " << Assign.CStr() << endl;
    cout << "The value that did the assigning was : " << Assign_2.CStr() << endl;

    char index_string[40];
    cout << "enter a string to test with" << endl;
    cin >> index_string;
    String Index(index_string);

    int index_operator;
    cout << "enter an index to check" << endl;
    cin >> index_operator;
    cout << "The value in the index is : " << Index.operator[](index_operator) << endl;

    char greater_string[40];
    cout << "enter a string to test with" << endl;
    cin >> greater_string;
    String Greater(greater_string);

    char less_string[40];
    cout << "enter a string to test with" << endl;
    cin >> less_string;
    String Less(less_string);

    bool less_than;
    bool greater_than;
    less_than = Greater.operator<(Less);
    greater_than = Greater.operator>(Less);
    cout << boolalpha << "The first string entered is less than the second? : " << less_than << noboolalpha << endl;
    cout << boolalpha << "The first string entered is greater than the second? : " << greater_than << noboolalpha << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
