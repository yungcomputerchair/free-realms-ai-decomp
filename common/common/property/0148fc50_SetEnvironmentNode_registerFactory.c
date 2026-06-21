// addr: 0x0148fc50
// name: SetEnvironmentNode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SetEnvironmentNode_registerFactory(void) */

void SetEnvironmentNode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the SetEnvironmentNode allocation factory under component/property
                       type id 0x4a. The wrapper calls ComponentFactory_initSingleton and the paired
                       registry hook with a callback whose constructor installs
                       SetEnvironmentNode::vftable. */
  factoryFn = SetEnvironmentNode_create;
  typeId_ = 0x4a;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

