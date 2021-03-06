#include <iostream>
#include "ITracer.h"
#include "Tracer.h"
using namespace OpenTracing;

ITracer::~ITracer()
{
#ifdef EXTENDED_DEBUG
    {
        std::ostringstream ss;
        ss << this;
        Tracer::file_logger.PrintLine("\t\t~ITracer addr: " + ss.str());
    }
#endif
}
