#include <phpcpp.h>
#include "Tracer.h"
//#include "NoopTracer.h"
//#include "ChildMaster.h"
//#include "bubleSort.h"
//#include "print.h"
//#include "_test.h"
//#include "testClass.h"
//#include "ISpan.h"
#include "NoopSpan.h"
#include "NoopTracer.h"


#include "IReporter.h"
#include "UdpReporter.h"
#include "SpanContext.h"

/**
*  tell the compiler that the get_module is a pure C function
*/
extern "C" {

    /**
    *  Function that is called by PHP right after the PHP process
    *  has started, and that returns an address of an internal PHP
    *  strucure with all the details and features of your extension
    *
    *  @return void*   a pointer to an address that is understood by PHP
    */
    PHPCPP_EXPORT void *get_module()
    {
        /* Some globals init */
        GlobalInit();

        // static(!) Php::Extension object that should stay in memory
        // for the entire duration of the process (that's why it's static)
        static Php::Extension extension("tracer-cpp", "1.0");

        Php::Class<Tracer> TracerClass("Tracer");
        TracerClass.method<&Tracer::init>("init", Php::Static, {
            Php::ByVal("serviceName",Php::Type::String,true),
            Php::ByVal("settings",Php::Type::Array,false)
        });
        TracerClass.method<&Tracer::getTracer>("getTracer", Php::Static, {});
        TracerClass.method<&Tracer::startSpan>("startSpan", Php::Static, {
            Php::ByVal("operationName",Php::Type::String,true),
            Php::ByVal("options",Php::Type::Array,false)
        });
        TracerClass.method<&Tracer::getCurrentSpan>("getCurrentSpan", Php::Static, {});
        TracerClass.method<&Tracer::finishSpan>("finishSpan", Php::Static, {
            Php::ByVal("span",Php::Type::Object,true),
        });
        TracerClass.method<&Tracer::inject>("inject", Php::Static, {
            Php::ByVal("context",Php::Type::Object,true),
            Php::ByVal("format",Php::Type::String,true),
            Php::ByRef("carrier",Php::Type::String,true),
        });
        TracerClass.method<&Tracer::extract>("extract", Php::Static, {
            Php::ByVal("format",Php::Type::String,true),
            Php::ByVal("carrier",Php::Type::String,true),
        });
        TracerClass.method<&Tracer::flush>("flush", Php::Static, {});
        TracerClass.method<&Tracer::addTags>("addTags", Php::Static, {
            Php::ByVal("tags",Php::Type::Array,true),
        });
        TracerClass.method<&Tracer::addLogs>("addLogs", Php::Static, {
            Php::ByVal("logs",Php::Type::Array,true),
        });
        extension.add(std::move(TracerClass));

        /*todo - try to leave only abstract interface*/
        //{
            //Php::Class<ITracer> ITracerClass("ITracer");
            //ITracerClass.method("print",{});
            //extension.add(std::move(ITracerClass));

            //Php::Class<NoopTracer> NoopTracerClass("NoopTracer");
            //NoopTracerClass.method<&NoopTracer::print>("print",{});
            //extension.add(NoopTracerClass);
        //}

        //Php::Interface ITracerInterface("ITracer");
        Php::Class<NoopTracer> NoopTracerClass("NoopTracer");
        //NoopTracerClass.implements(ITracerInterface);
        extension.add(std::move(NoopTracerClass));
        Php::Class<JaegerTracer> JaegerTracerClass("JaegerTracer");
        //JaegerTracerClass.implements(ITracerInterface);
        extension.add(std::move(JaegerTracerClass));
        //extension.add(std::move(ITracerInterface));

        Php::Class<SpanContext> SpanContextClass("SpanContext");
        extension.add(std::move(SpanContextClass));

        Php::Interface ISpanInterface("ISpan");
        ISpanInterface.method("addTags", {});
        ISpanInterface.method("addLogs", {});
        Php::Class<NoopSpan> NoopSpanClass("NoopSpan");
        NoopSpanClass.implements(ISpanInterface);
        NoopSpanClass.method<&NoopSpan::addTags>("addTags", {});
        NoopSpanClass.method<&NoopSpan::addLogs>("addLogs", {});
        Php::Class<JaegerSpan> JaegerSpanClass("JaegerSpan");
        JaegerSpanClass.implements(ISpanInterface);
        JaegerSpanClass.method<&JaegerSpan::addTags>("addTags", {});
        JaegerSpanClass.method<&JaegerSpan::addLogs>("addLogs", {});
        extension.add(std::move(ISpanInterface));
        extension.add(std::move(JaegerSpanClass));
        extension.add(std::move(NoopSpanClass));

        // return the extension
        return extension;
    }
}
