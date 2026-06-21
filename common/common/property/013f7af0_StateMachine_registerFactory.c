// addr: 0x013f7af0
// name: StateMachine_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void StateMachine_registerFactory(void) */

void StateMachine_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the StateMachine persistent component factory. The registered
                       allocation thunk constructs a large StateMachine object and initializes
                       StateMachine::vftable. */
  factoryFn = StateMachine_create;
  typeId_ = 0xe9;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

