// addr: 0x01494370
// name: QueryNode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void QueryNode_registerFactory(void) */

void QueryNode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the QueryNode allocation factory under component/property type id
                       0x29. The wrapper calls ComponentFactory_initSingleton and the paired
                       registry hook with a callback whose constructor installs QueryNode::vftable.
                        */
  factoryFn = FUN_01494310;
  typeId_ = 0x29;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

