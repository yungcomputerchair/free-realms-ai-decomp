// addr: 0x014996f0
// name: IfThenExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void IfThenExpression_registerFactory(void) */

void IfThenExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the IfThenExpression allocation factory under component/property
                       type id 0x1c. The wrapper calls ComponentFactory_initSingleton and the paired
                       registry hook with a callback whose constructor installs
                       IfThenExpression::vftable. */
  factoryFn = IfThenExpression_create;
  typeId_ = 0x1c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

