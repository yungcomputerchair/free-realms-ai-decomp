// addr: 0x013275a0
// name: Action_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Action_registerFactory(void) */

void Action_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the Action factory callback in both component factory registries.
                       The callback allocates 0x70 bytes and constructs an Action-derived persistent
                       component. */
  factoryFn = FUN_01327540;
  typeId_ = 0x12;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

