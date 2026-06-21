// addr: 0x014946b0
// name: PileQueryNode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PileQueryNode_registerFactory(void) */

void PileQueryNode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the PileQueryNode allocation factory under component/property type
                       id 0x4c. The wrapper calls ComponentFactory_initSingleton and the paired
                       registry hook with a callback whose constructor installs
                       PileQueryNode::vftable. */
  factoryFn = FUN_01494650;
  typeId_ = 0x4c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

