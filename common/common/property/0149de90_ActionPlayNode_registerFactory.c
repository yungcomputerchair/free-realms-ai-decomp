// addr: 0x0149de90
// name: ActionPlayNode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ActionPlayNode_registerFactory(void) */

void ActionPlayNode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the ActionPlayNode allocation factory under component/property type
                       id 0x31. The wrapper calls ComponentFactory_initSingleton and the paired
                       registry hook with a callback whose constructor installs
                       ActionPlayNode::vftable. */
  factoryFn = ActionPlayNode_create;
  typeId_ = 0x31;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

