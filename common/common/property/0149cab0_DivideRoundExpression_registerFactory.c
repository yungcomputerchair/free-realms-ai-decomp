// addr: 0x0149cab0
// name: DivideRoundExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void DivideRoundExpression_registerFactory(void) */

void DivideRoundExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the DivideRoundExpression allocation factory under
                       component/property type id 0x15d. The wrapper calls
                       ComponentFactory_initSingleton and the paired registry hook with a callback
                       whose constructor installs DivideRoundExpression::vftable. */
  factoryFn = DivideRoundExpression_create;
  typeId_ = 0x15d;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

