// addr: 0x01495fd0
// name: NotEqualToExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void NotEqualToExpression_registerFactory(void) */

void NotEqualToExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the NotEqualToExpression allocation factory under
                       component/property type id 0x22. The wrapper calls
                       ComponentFactory_initSingleton and the paired registry hook with a callback
                       whose constructor installs NotEqualToExpression::vftable. */
  factoryFn = NotEqualToExpression_create;
  typeId_ = 0x22;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

