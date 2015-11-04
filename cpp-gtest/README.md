# Simple unit test project
This simple unit test project uses biicode, gtest and gmock.

## Building
Run the command
```
  bii buzz
```
This will automatically find dependencies (*bii deps* and *bii find*), import and build everything.

For only a plain build run
```
  bii build
```
The resulting file is inside of the directory *bin*

## Running the test
The final file can be run with
```
./bin/user_cpp-gtest_main
```

## Edit the tests
The tests are located in *./main.cpp*
