#ifndef LOG_H
#define LOG_H
#include "Tag.h"

class Log
{
private:
    int64_t _timestamp;
    std::vector<Tag*> _fields;
public:
    static const int LOGS_THRESHOLD = 50;
    Log(std::vector<Tag*>& logs, const Php::Value& timestamp = nullptr);
    Log(const Log&) = delete;
    ~Log();
};

#endif /* LOG_H */

