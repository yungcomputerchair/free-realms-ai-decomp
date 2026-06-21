// addr: 0x014dcf50
// name: GameCommand_ForceEndGetTarget_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_ForceEndGetTarget_registerFactory(void) */

void GameCommand_ForceEndGetTarget_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x142 with the component factory using the allocator thunk
                       that constructs GameCommand_ForceEndGetTarget objects. */
  factoryFn = GameCommand_ForceEndGetTarget_create;
  typeId_ = 0x142;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

