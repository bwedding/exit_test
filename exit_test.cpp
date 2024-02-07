#include <iostream>
#include <boost/process.hpp>

namespace bp = boost::process;

void exitHandler() {
    std::cout << "At exit handler. Restarting...\n";
    bp::child c("./exit_test");
    c.wait();
}

int main(int argc, char *argv[]) {
    const int result = std::atexit(exitHandler);
    std::cout << "Hello world\n";
    return 0; // Triggers atexit
}

