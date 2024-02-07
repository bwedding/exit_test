# exit_test
Testing the exit handler in C++. Challenge is, Windows and Unix start processes differently.

Building works on my machine with:

```c++ --std=c++20 -o exit_test exit_test.cpp -Wno-deprecated-declarations```

*CTRL-C* gets you out of the infinite loop.
