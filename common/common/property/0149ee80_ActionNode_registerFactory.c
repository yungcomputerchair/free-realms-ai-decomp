// addr: 0x0149ee80
// name: ActionNode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ActionNode_registerFactory(void) */

void ActionNode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the ActionNode allocation factory under component/property type id
                       0x2c. The wrapper calls ComponentFactory_initSingleton and the paired
                       registry hook with a callback whose constructor installs ActionNode::vftable.
                        */
  factoryFn = ActionNode_create;
  typeId_ = 0x2c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

