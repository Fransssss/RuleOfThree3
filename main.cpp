// Fransiskus Agapa
// 9/8/22
// Practices make improvement - Have Fun !!!
// :)

// ================
// learn how rule of three works
// ================

#include <iostream>
#include "stringData.h"

using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::string;

int main()
{
    cout << endl;
    string userText;                              // text from user

    // default constr
    cout << "1st class object" << endl;
    stringData stText;                            // default constr called
    cout << stText.GetText() << endl;

    // set and get value
    cout << endl << "Input a text: ";
    while(userText.size() == 0)                  // keep asking while no input from user
    {
        getline(cin, userText);
    }
    cout << endl;
    stText.SetText(userText);
    cout << stText.GetText() << endl << endl;

    // copy constructor
    cout << "2nd class object" << endl;
    stringData ndText = stText;
    cout << ndText.GetText() << endl;

    // set and get
    cout << endl << "Input another text: ";
    userText = "";                              // reset value
    while(userText.size() == 0)
    {
        getline(cin, userText);
    }
    cout << endl;
    ndText.SetText(userText);
    cout << ndText.GetText() << endl << endl;

    // copy assignment
    stringData rdText;
    rdText = ndText;                          // copy assignment called
    cout << rdText.GetText() << endl;

    // set and get value
    userText = "";                           // reset value
    cout << endl << "Input another text: ";
    while(userText.size() == 0)
    {
        getline(cin, userText);
    }
    cout << endl;
    rdText.SetText(userText);
    cout << rdText.GetText() << endl << endl;

    return 0;
}
