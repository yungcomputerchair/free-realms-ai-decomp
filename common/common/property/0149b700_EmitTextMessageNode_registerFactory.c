// addr: 0x0149b700
// name: EmitTextMessageNode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EmitTextMessageNode_registerFactory(void) */

void EmitTextMessageNode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the EmitTextMessageNode allocation factory under component/property
                       type id 0x30. The wrapper calls ComponentFactory_initSingleton and the paired
                       registry hook with a callback whose constructor installs
                       EmitTextMessageNode::vftable. */
  factoryFn = EmitTextMessageNode_create;
  typeId_ = 0x30;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

