#ifndef EVENTTYPE_H
#define EVENTTYPE_H

#include <string>
#include <vector>
class EventType {
    public:
        virtual std::string getEventID() = 0;
};
#endif