// addr: 0x01496d60
// name: MoveActionNode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MoveActionNode_registerFactory(void) */

void MoveActionNode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the MoveActionNode allocation factory under component/property type
                       id 0x73. The wrapper calls ComponentFactory_initSingleton and the paired
                       registry hook with a callback whose constructor installs
                       MoveActionNode::vftable. */
  factoryFn = MoveActionNode_create;
  typeId_ = 0x73;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

