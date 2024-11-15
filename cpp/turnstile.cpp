/*
This application is a simple state machine in C++ that models a user going through a turnstile gate.
*/

// include the standard input/output library
#include <iostream>
// include the assert library for testing
#include <cassert>
#include <iostream>

// TODO  create a 'doctest' unit test for the handle_event

class StateMachine {
public:
    enum State { LOCKED, UNLOCKED };
    enum Event { COIN, PUSH };

    StateMachine() : state(LOCKED) {}

    void handle_event(Event event) {
        if (state == LOCKED && event == COIN) {
            state = UNLOCKED;
            std::cout << "Unlocked the turnstile\n";
        } else if (state == UNLOCKED && event == PUSH) {
            state = LOCKED;
            std::cout << "Locked the turnstile\n";
        } else if (state == LOCKED && event == PUSH) {
            std::cout << "The turnstile is already locked\n";
        } else if (state == UNLOCKED && event == COIN) {
            std::cout << "The turnstile is already unlocked\n";
        }
    }

    State getState() const {
        return state;
    }

private:
    State state;
};

void test() {
    StateMachine turnstile;

    assert(turnstile.getState() == StateMachine::LOCKED);

    turnstile.handle_event(StateMachine::PUSH);
    assert(turnstile.getState() == StateMachine::LOCKED);

    turnstile.handle_event(StateMachine::COIN);
    assert(turnstile.getState() == StateMachine::UNLOCKED);

    turnstile.handle_event(StateMachine::COIN);
    assert(turnstile.getState() == StateMachine::UNLOCKED);

    turnstile.handle_event(StateMachine::PUSH);
    assert(turnstile.getState() == StateMachine::LOCKED);

    turnstile.handle_event(StateMachine::PUSH);
    assert(turnstile.getState() == StateMachine::LOCKED);

    turnstile.handle_event(StateMachine::COIN);
    assert(turnstile.getState() == StateMachine::UNLOCKED);

    turnstile.handle_event(StateMachine::PUSH);
    assert(turnstile.getState() == StateMachine::LOCKED);
}

/*
The main function creates a Turnstile and calls 'handle_event' with a sequence of events.
*/
int main() {

    test();

    return 0;
}
