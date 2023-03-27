#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;

// Base class
class StopwatchBase {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual void reset() = 0;
    virtual void displayTime() = 0;
};

// Derived class
class Stopwatch : public StopwatchBase {
private:
    steady_clock::time_point startTime, endTime;
    bool isRunning;

public:
    Stopwatch() {
        isRunning = false;
    }

    void start() {
        if (!isRunning) {
            isRunning = true;
            startTime = steady_clock::now();
        }
    }

    void stop() {
        if (isRunning) {
            isRunning = false;
            endTime = steady_clock::now();
        }
    }

    void reset() {
        isRunning = false;
    }

    void displayTime() {
        if (isRunning) {
            cout << "Stopwatch is still running." << endl;
        } else {
            duration<double> elapsedTime = duration_cast<duration<double>>(endTime - startTime);
            cout << "Elapsed time: " << elapsedTime.count() << " seconds." << endl;
        }
    }
};

int main() {
    Stopwatch sw;

    sw.start();
    this_thread::sleep_for(chrono::seconds(2));
    sw.stop();
    sw.displayTime();

    sw.reset();

    sw.start();
    this_thread::sleep_for(chrono::seconds(1));
    sw.stop();
    sw.displayTime();

    return 0;
}