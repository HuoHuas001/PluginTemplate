// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"
#include "NavigationScriptActorComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptNavigationFloatComponent : public NavigationScriptActorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTNAVIGATIONFLOATCOMPONENT
public:
    class ScriptNavigationFloatComponent& operator=(class ScriptNavigationFloatComponent const&) = delete;
    ScriptNavigationFloatComponent(class ScriptNavigationFloatComponent const&) = delete;
    ScriptNavigationFloatComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptNavigationFloatComponent();
    /*
    inline  ~ScriptNavigationFloatComponent(){
         (ScriptNavigationFloatComponent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptNavigationFloatComponent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptNavigationFloatComponent> bind(struct Scripting::Version);

protected:

private:

};