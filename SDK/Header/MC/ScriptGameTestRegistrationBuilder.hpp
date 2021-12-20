// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptGameTestRegistrationBuilder {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTGAMETESTREGISTRATIONBUILDER
public:
    class ScriptGameTestRegistrationBuilder& operator=(class ScriptGameTestRegistrationBuilder const&) = delete;
    ScriptGameTestRegistrationBuilder(class ScriptGameTestRegistrationBuilder const&) = delete;
    ScriptGameTestRegistrationBuilder() = delete;
#endif

public:
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptGameTestRegistrationBuilder> batch(std::string);
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptGameTestRegistrationBuilder> maxAttempts(int);
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptGameTestRegistrationBuilder> maxTicks(int);
    MCAPI class ScriptGameTestRegistrationBuilder& operator=(class ScriptGameTestRegistrationBuilder&&);
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptGameTestRegistrationBuilder> padding(int);
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptGameTestRegistrationBuilder> required(bool);
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptGameTestRegistrationBuilder> requiredSuccessfulAttempts(int);
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptGameTestRegistrationBuilder> rotate(bool);
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptGameTestRegistrationBuilder> setupTicks(int);
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptGameTestRegistrationBuilder> structureName(std::string);
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptGameTestRegistrationBuilder> tag(std::string);
    MCAPI ~ScriptGameTestRegistrationBuilder();

protected:

private:

};