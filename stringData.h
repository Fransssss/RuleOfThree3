// Fransiskus Agapa

#ifndef RULEOFTHREE3_STRINGDATA_H
#define RULEOFTHREE3_STRINGDATA_H

#include "string"

using std::string;

class stringData
{
private:
    string* _data;
public:
    stringData();                                          // default constructor
    void SetText(const string& theText);                   // set value
    string GetText() const;                                // get value
    stringData(const stringData& theData);                 // copy constructor
    stringData& operator=(const stringData& theData);      // copy assignment
    ~stringData();                                         // destructor
};

#endif //RULEOFTHREE3_STRINGDATA_H
