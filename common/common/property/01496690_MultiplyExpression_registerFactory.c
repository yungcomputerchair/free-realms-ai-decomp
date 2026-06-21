// addr: 0x01496690
// name: MultiplyExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MultiplyExpression_registerFactory(void) */

void MultiplyExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the MultiplyExpression allocation factory under component/property
                       type id 0x26. The wrapper calls ComponentFactory_initSingleton and the paired
                       registry hook with a callback whose constructor installs
                       MultiplyExpression::vftable. */
  factoryFn = MultiplyExpression_create;
  typeId_ = 0x26;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

