// addr: 0x014880f0
// name: WhileExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void WhileExpression_registerFactory(void) */

void WhileExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the WhileExpression factory callback with the component/property
                       factory registries. The callback at 01488090 allocates the object and calls
                       the constructor at 01487ec0. */
  factoryFn = WhileExpression_create;
  typeId_ = 0x17c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

