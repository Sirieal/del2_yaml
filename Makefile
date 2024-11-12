

# Compiler
CXX = g++
CXXFLAGS = -std=c++17 -I/usr/include/yaml-cpp # Set the C++ standard and yaml-cpp include directory

# Libraries
LDFLAGS = -lyaml-cpp

# Executable name
EXEC = yaml_parser

# Source files
SOURCES = main.cpp YamlParser.cpp

# Object files (derived from source files)
OBJECTS = $(SOURCES:.cpp=.o)

# Target to build the executable
all: $(EXEC)

# Link object files to create the executable
$(EXEC): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(EXEC) $(LDFLAGS)

# Compile source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJECTS) $(EXEC)
