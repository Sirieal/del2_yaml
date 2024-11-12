#include "YamlParser.h" // Include the header file for the YamlParser class
#include <iostream> // Include the iostream library for input and output operations
#include <yaml-cpp/yaml.h> // Include the yaml-cpp library for parsing YAML files
using namespace std;
// Constructor definition
YamlParser::YamlParser(const string& filePath) : m_filePath(filePath) {
    // Constructor logic (currently empty)
}

// Method to get a string value from the YAML file based on a key
string YamlParser::getString(const string& key) {
    YAML::Node yaml = YAML::LoadFile(m_filePath); // Load the YAML file
    return yaml[key].as<string>(); // Return the value as a string
}

// Method to get an integer value from the YAML file based on a key
int YamlParser::getInt(const string& key) {
    YAML::Node yaml = YAML::LoadFile(m_filePath); // Load the YAML file
    return yaml[key].as<int>(); // Return the value as an integer
}

// Method to get a list of strings from the YAML file based on a key
vector<string> YamlParser::getStringList(const string& key) {
    YAML::Node yaml = YAML::LoadFile(m_filePath); // Load the YAML file
    vector<string> result; // Create a vector to store the result
    for (const auto& hobby : yaml[key]) { // Loop through each item in the list
        result.push_back(hobby.as<std::string>()); // Add the item to the result vector
    }
    return result; // Return the result vector
}
