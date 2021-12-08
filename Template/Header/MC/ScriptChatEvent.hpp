// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct ScriptChatEvent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTCHATEVENT
public:
    ScriptChatEvent() = delete;
#endif

public:
    MCAPI ScriptChatEvent(struct ScriptChatEvent const&);
    MCAPI ScriptChatEvent(struct ChatEvent const&, class Scripting::WeakLifetimeScope const&);
    MCAPI void copyTo(struct ChatEvent&, class Scripting::WeakLifetimeScope const&) const;
    MCAPI struct ScriptChatEvent& operator=(struct ScriptChatEvent&&);
    MCAPI struct ScriptChatEvent& operator=(struct ScriptChatEvent const&);
    MCAPI ~ScriptChatEvent();

protected:

private:

};