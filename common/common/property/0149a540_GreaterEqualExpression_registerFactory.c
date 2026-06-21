// addr: 0x0149a540
// name: GreaterEqualExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GreaterEqualExpression_registerFactory(void) */

void GreaterEqualExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the GreaterEqualExpression allocation factory under
                       component/property type id 0x20. The wrapper calls
                       ComponentFactory_initSingleton and the paired registry hook with a callback
                       whose constructor installs GreaterEqualExpression::vftable. */
  factoryFn = GreaterEqualExpression_create;
  typeId_ = 0x20;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

