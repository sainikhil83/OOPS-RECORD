#include <iostream>
#include <csignal>
#include <cstdlib>
using namespace std;
void signalHandler(int signum) {
    cout << "\nInterrupt signal (" << signum << ") received." << endl;
    cout << "Exiting program safely..." << endl;
    exit(signum);
}
int main() {
    signal(SIGINT, signalHandler);
    cout << "Press Ctrl+C to trigger signal handling..." << endl;
    while (true) {
        cout << "thulasi" << endl;
        for (int i = 0; i < 50; i++);
    }
    return 0;
}
