// addr: 0x01492200
// name: QueryPropertiesNode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void QueryPropertiesNode_registerFactory(void) */

void QueryPropertiesNode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the QueryPropertiesNode allocation factory under component/property
                       type id 0x2b. The wrapper calls ComponentFactory_initSingleton and the paired
                       registry hook with a callback whose constructor installs
                       QueryPropertiesNode::vftable. */
  factoryFn = FUN_014921a0;
  typeId_ = 0x2b;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

