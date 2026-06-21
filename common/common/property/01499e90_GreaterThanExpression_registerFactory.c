// addr: 0x01499e90
// name: GreaterThanExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GreaterThanExpression_registerFactory(void) */

void GreaterThanExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the GreaterThanExpression allocation factory under
                       component/property type id 0x1e. The wrapper calls
                       ComponentFactory_initSingleton and the paired registry hook with a callback
                       whose constructor installs GreaterThanExpression::vftable. */
  factoryFn = GreaterThanExpression_create;
  typeId_ = 0x1e;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

