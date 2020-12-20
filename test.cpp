#include "EventQueue.h"
#include <iostream>

class ExampleListener : public Listener {
    void listenTo(std::shared_ptr<Event> e) {
        if(e->getEventID() == "EXAMPLEEVENT") {
            std::cout << "EXAMPLEEVENT has been handled by ExampleListener" << std::endl;
        }else {
            //this isn't an event this listener cares about, ignore
        }
    }
};

class ExampleEventType : public Event {
    std::string getEventID() {
        return "EXAMPLEEVENT";
    }
};

int main() {
    EventQueue queue = EventQueue();
    std::shared_ptr<ExampleListener> listener (new ExampleListener());
    std::shared_ptr<ExampleEventType> exampleEvent (new ExampleEventType());
    queue.addEventListener(listener);
    queue.callEvent(exampleEvent);
}

