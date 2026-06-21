// addr: 0x01492d60
// name: QueryPlayabilityNode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void QueryPlayabilityNode_registerFactory(void) */

void QueryPlayabilityNode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the QueryPlayabilityNode allocation factory under
                       component/property type id 0x35. The wrapper calls
                       ComponentFactory_initSingleton and the paired registry hook with a callback
                       whose constructor installs QueryPlayabilityNode::vftable. */
  factoryFn = QueryPlayabilityNode_create;
  typeId_ = 0x35;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

