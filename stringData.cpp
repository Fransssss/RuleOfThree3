// Fransiskus Agapa

#include "stringData.h"
#include <iostream>

using std::cout;
using std::endl;

// default constructor
stringData::stringData()
{
    cout << "= Default constructor =" << endl;
    _data = new string;                  // allocate new memory
    *_data = "NoString";                 // assign value
}

// set value
void stringData::SetText(const string &theText)
{
    cout << "= Set Value =" << endl;
    _data = new string;                 // allocate new memory
    *_data = theText;
}

// get value
string stringData::GetText() const
{
    cout << "= Get Value =" << endl << endl;
    string userText;
    userText = "[ \"" + *_data + "\" ]";
    return userText;
}

// copy constructor
stringData::stringData(const stringData &theData)
{
    cout << "= Copy constructor =" << endl;
    _data = new string;                 // allocate nwe memory
    *_data = *theData._data;            // assign to a given value
}

// copy assignment
stringData& stringData::operator=(const stringData &theData)
{
    cout << "= Copy Assignment =" << endl;
    if(this != &theData)
    {
        delete _data;                  // delete old value and its pointer
        _data = new string;            // allocate new memory
        *_data = *theData._data;       // assign given value
    }
    return *this;                      // return the value
}

// destructor
stringData::~stringData()
{
    cout << "= Destructor Called =" << endl;
    delete _data;                      // free allocated memory
}

