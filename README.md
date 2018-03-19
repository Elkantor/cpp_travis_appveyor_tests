[![Build Status](https://travis-ci.org/Elkantor/cpp_travis_appveyor_tests.svg?branch=master)](https://travis-ci.org/Elkantor/cpp_travis_appveyor_tests)
[![Build status](https://ci.appveyor.com/api/projects/status/986oo67uj2pmt6e9?svg=true)](https://ci.appveyor.com/project/Elkantor/cpp-travis-test)


# cpp_travis_appveyor_tests
> A template project to show how to configure and perform tests using Travis CI and/or AppVeyor for the continuous integration.

## Installing / Getting started

First, clone this repository wherever you want:

```shell
git clone https://github.com/elkantor/cpp_travis_appveyor_tests
cd cpp_travis_appveyor_tests
```

Next, you can launch the generate.bat file inside the tools folder, if you are on Windows, and if you have the MinGW tools configured (gcc, g++...) and the Ninja build system.
If not, no worries, you can simply run the following command, cmake will use the best build system depending of you OS (you must at least have Visual Studio installed on Windows):

```shell
cmake -B../build -H.. -DCMAKE_BUILD_TYPE:STRING=Release
```

Once the generation is done, you can build the project.
You can use the build.bat file inside the tools folder, if you are on Windows, or you can type the command below:

```shell
cmake --build ../build --config Release
```

Now, you can run the tests of this simple Project by launching the run_tests.bat file (on Windows), or by typing the following command (on Linux or OSX):

```shell
../build/test/bin/Release/Test
```

To test this project on Travis CI and/or on AppVeyor, simply fork this repository, create a new account on each plateform by signing in with your github account, and then enable your forked repository.
The next commit you'll submit will automaticly fired the test project's build (which is inside the test folder, at the root of this repository).


## Licensing

The MIT License

Copyright (C) 2018 - Victor Gallet <victor.gallet@hotmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
