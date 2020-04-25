#include <iostream>
#include <mutex>
#include <functional>
#include <atomic>

using namespace std;

class FizzBuzz {
private:
    int n;
    int counter;
    std::mutex mut;
    std::condition_variable cv;
public:
    FizzBuzz(int num): n{num}, counter {1} {}

    void run (function<bool(int&)> test, function<void(int)> print)
    {
        while (counter <= n)
        {
            std::unique_lock<mutex> lock(mut);
            cv.wait(lock, [test, this]() -> bool {
                return (counter <= n || test(counter));
            });
            if (counter > n)
            {
                break;
            }
            print(counter);
            counter++;
            lock.unlock();
            cv.notify_one();
        }
    }

    // printFizz() outputs "fizz".
    void fizz(function<void()> printFizz) {
        run([](int& counter) -> bool {
            return (counter % 3 == 0 && counter % 5 != 0);
        }, [printFizz](int i){
            printFizz();
        });
    }

    // printBuzz() outputs "buzz".
    void buzz(function<void()> printBuzz) {
        run([](int& counter) -> bool {
            return (counter % 5 == 0 && counter % 3 != 0);
        }, [printBuzz](int counter){
            printBuzz();
        });
    }

    // printFizzBuzz() outputs "fizzbuzz".
	void fizzbuzz(function<void()> printFizzBuzz) {
        run([](int& counter) -> bool {
            return (counter % 5 == 0 && counter % 3 == 0);
        }, [printFizzBuzz](int counter){
            printFizzBuzz();
        });
    }

    // printNumber(x) outputs "x", where x is an integer.
    void number(function<void(int)> printNumber) {
        run([](int& counter) -> bool {
            return (counter % 5 != 0 || counter % 3 != 0);
        }, printNumber);
    }
};