// addr: 0x01498520
// name: LastActionQueryNode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LastActionQueryNode_registerFactory(void) */

void LastActionQueryNode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LastActionQueryNode allocation factory under component/property
                       type id 0x2f. The wrapper calls ComponentFactory_initSingleton and the paired
                       registry hook with a callback whose constructor installs
                       LastActionQueryNode::vftable. */
  factoryFn = LastActionQueryNode_create;
  typeId_ = 0x2f;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

