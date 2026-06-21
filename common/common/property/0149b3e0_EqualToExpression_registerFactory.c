// addr: 0x0149b3e0
// name: EqualToExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EqualToExpression_registerFactory(void) */

void EqualToExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the EqualToExpression allocation factory under component/property
                       type id 0x1f. The wrapper calls ComponentFactory_initSingleton and the paired
                       registry hook with a callback whose constructor installs
                       EqualToExpression::vftable. */
  factoryFn = EqualToExpression_create;
  typeId_ = 0x1f;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

