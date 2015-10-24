# C++ development environment in Vagrant
C++ development environment ready to use for TDD sessions.
It creates a virtual machine based on ubuntu/trusty64.
**Characteristics**: 1GB of RAM, 2 CPUs.

## Packages
* *build-essential*, *gcc-4.9*, *g++-4.9*, *make*, *cmake*, *git*, *vim*
* *[cppunit](http://sourceforge.net/projects/cppunit/)*, useful for unit testing
* *[gtest](https://github.com/google/googletest)* (googletest), useful for unit testing
* *[Catch](https://github.com/philsquared/Catch/)*, useful for unit testing.

## Usage
* *git clone https://github.com/alebaffa/scc-tdd-cpp*
* *cd /scc-tdd-cpp*
* *vagrant up* :if everything is fine you should see in the console the result of a simple test run with Catch
```
==> default: All tests passed (4 assertions in 1 test case)
==> default: ******************************
==> default: Enjoy your TDD session in C++!
==> default: ******************************
```
* *vagrant ssh*
* *cd /tdd_cpp* : this is the development folder where you can code. **It is syncronized with your local folder where you git cloned this repository**, so that you can **code locally using your favorite IDE and compile using Vagrant**.
  * it contains the file *catch.hpp* :the Catch header file needed for using Catch in your unit tests
