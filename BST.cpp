#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <string>
#include <cctype>
#include "morse_tree.h"

// Programming Assignment 3 - Data Strcutures 001
// Abdul Wahab

using namespace std;
 
struct theTree
{
        string letter;
        string code;
};
 
int main()
{

BST tree; string message; char* morse_code = new char; char reply;
theTree array[27] = {{"E", ". "}, {"T", "- "},    {"I", ".. "},   {"A", ".- "},   {"N", "-. "},   {"M", "-- "},
{"S", "... "},  {"U", "..- "},  {"R", ".-. "},  {"W", ".-- "},  {"D", "-.. "},  {"K", "-.- "},
{"G", "--. "},  {"O", "--- "},  {"H", ".... "}, {"V", "...- "}, {"F", "..-. "}, {"L", ".-.. "},
{"P", ".--. "}, {"J", ".--- "}, {"B", "-... "}, {"X", "-..- "},
{"C", "-.-. "}, {"Y", "-.-- "}, {"Z", "--.. "}, {"Q", "--.- "}, {" ", "---- "}};
 
tree.Insert("0", "");
 
for(int i = 0; i < 27; i++)
  {
    tree.Insert(array[i].letter, array[i].code);
  }
 
   // do
  // {
  // cout << "Enter your original message to encode: ";
  // getline(cin, message);
  // int line = message.length();
 
                // for(int i = 0; i < line; i++)
                // {
                        // message[i] = toupper(message[i]);
                        // char c = message[i];
                        // if(c == ' ')
                                // cout << "/ ";
                        // tree.Encode(c);
                // }
                // cout << endl;
       
                /* cout << "Enter your Morse code separated by '/' and end it by '*' : ";
                cin.getline(morse_code, 100, '*');
                char* token = strtok(morse_code, "/");
                while(token != NULL)
                {
                        cout << endl << "Decoding: " << token << endl;
                        string new_code = token;
                        tree.Decode(new_code);
                        token = strtok(NULL, "/");
                }
                cout << "Continue: ";
                cin >> reply; cin.ignore(); cout << endl; */
        }while(reply == 'y');
 
        
       
        return 0;
}
