# Simple unit test project
This simple unit test project uses conan, gtest and gmock.

## Building
Run the command
```
  conan install --build=missing
```
This will automatically find use the declared dependencies (conantfile.txt) and builds them.

Build the project with
```
  mkdir build ; cd build ; cmake .. ; make
```
The resulting file is inside of the directory *bin*

## Running the test
The final file can be run with
```
./bin/run_test
```

## Edit the tests
The tests are located in *./src/main.cpp*
