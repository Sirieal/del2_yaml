#ifndef YAML_PARSER_H
#define YAML_PARSER_H

#include <string> // Include the string library for handling strings
#include <vector> // Include the vector library for handling dynamic arrays
using namespace std;
// Declaration of the YamlParser class
class YamlParser {
public:
    // Constructor that takes a file path and initializes the parser
    explicit YamlParser(const string& filePath);
    
    // Method to get a string value from the YAML file based on a key
    string getString(const string& key);
    
    // Method to get an integer value from the YAML file based on a key
    int getInt(const string& key);
    
    // Method to get a list of strings from the YAML file based on a key
    vector<string> getStringList(const string& key);

private:
    string m_filePath; // Member variable to store the file path
};

#endif // YAML_PARSER_H
