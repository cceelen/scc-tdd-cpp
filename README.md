# Linux development environment in Vagrant
This repository provides a simple vagrant setup that creates a C++ and Python development environment (based upon ubuntu/vivid64) ready to use for TDD sessions.

**Configuration**: 64bit, RAM 1GB, 2 CPUs.

## Requirements
* [PowerShell](https://technet.microsoft.com/en-us/library/hh847837.aspx) - On Windows you really want to have this instead of cmd.exe
* [chocolatey](https://chocolatey.org/) - To install the following tools easily
* [VirtualBox](https://www.virtualbox.org/) - Latest version is great. Previous versions should run just fine.
* [Vagrant](https://www.vagrantup.com/downloads.html)
* [Git](https://www.git-scm.com)

## Installation on Windows
* Chocolatey:
  * open a powershell instance in Windows in administration mode.
  * paste and run the following command:
```
iex ((new-object net.webclient).DownloadString('https://chocolatey.org/install.ps1'))
```
  * close the shell
* All other tools:
  * open a new powershell instance in administration mode.
  * run the following command:
```
cinst git virtualbox vagrant
```
  * Configure GIT to use a consistent line break strategy:
```
git config --global core.autocrlf true
```

## Linux Packages
* *build-essential*, *gcc-4.9*, *g++-4.9*, *make*, *cmake*, *git*, *vim*, *libboost-all-dev*
* *[cppunit](http://sourceforge.net/projects/cppunit/)*, useful for unit testing
* *[gtest](https://github.com/google/googletest)* (googletest), useful for unit testing
* *[Catch](https://github.com/philsquared/Catch/)*, useful for unit testing.
* [biicode](https://www.biicode.com) Optional C++ dependency manager.
Use this if you do not want to write [Makefile](https://www.gnu.org/software/make/) or [cMake](https://cmake.org/) files by hand. It also allows you to cleanly isolate system libraries from dependencies required just by your project. So give it a try!

## Running the VM
* Open a powershell and find yourself a nice directory to work in.
* Clone this repository:
```
git clone https://github.com/cceelen/scc-tdd-cpp.git
```
* enter the directory *scc-tdd-cpp*
* start the virtual machine:
```
vagrant up
```
if everything is fine you should see in the console the result of a simple test run with Catch
```
==> default: All tests passed (4 assertions in 1 test case)
==> default: ******************************
==> default: Enjoy your TDD session in C++!
==> default: ******************************
```
* Now you can ssh to the VM instance.
  * if you have putty installed then connect to:
    * hostname: 127.0.0.1
    * port: 2222
    * user/password: vagrant
  * or use *vagrant ssh* otherwise
* Directory */tdd_cpp* : this is the development folder where you can code. This folder is actually imported from the Windows file system. You can therefore **code using the IDE on the host machine** and **compile using the virtual machine**.
  * it contains the file *catch.hpp* :the Catch header file needed for using Catch in your unit tests
  * :warning: Warning: Hard links or symbolic links you are often using under Linux do not work in this directory. Windows does not support them.

## Shutdown / Cleanup
* To shutdown for later usage please use:
```
vagrant suspend
```
This will allow you to use *vagrant up* to restart the VM instance.
* To destroy the VM instance and delete all files inside use:
```
vagrant destroy -f
```
:warning: this will delete everything stored on the Linux file system and remove the virtual machine instance.

## CPP Project Setups
This repository includes 2 flavors of C++ setups that are already configured.

[cpp-gtest](./cpp-gtest/README.md) contains a setup using biicode as a dependency and build system configured for running with *gtest*, *gmock* and *boost*.

[cpp-catch](./cpp-catch/README.md) contains a setup using a simple cmake setup as a build system and a ready configuration for running unit tests with *catch*. *boost* integration might require some small hacking.

[python-unittest](./python-unittest) contains a minimal python setup to run basic unit test.

## Golang Setup
The latest version of [Go](https://golang.org/) (1.5.3) is installed (in _/usr/local/go_).

*$GOPATH* = /tdd_cpp/golang. As standard Go development, the Go projects must be under _$GOPATH/src_.

The standard [testing library](https://golang.org/pkg/testing/) is installed.

## Trouble Shooting

In case that your network requires a proxy configuration have to set the following variables in powershell *every time* before you want launch Chocolatey or vagrant:
```
$env:http_proxy = "http://yourproxy"
$env:https_proxy = "https://yourproxy"
$env:ftp_proxy = "ftp://yourproxy"
```
For vagrant you also have to install the proxy-conf plugin:
```
vagrant plugin install vagrant-proxyconf
```
And you have to uncomment and complete the proxy configuration in the [Vagrantfile](./Vagrantfile#L69):
```
if Vagrant.has_plugin?("vagrant-proxyconf")
  config.proxy.http     = "http://yourproxy"
  config.proxy.https    = "http://yourproxy"
  config.proxy.no_proxy = "localhost,127.0.0.1"
end
```
