// addr: 0x0149bda0
// name: EachExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EachExpression_registerFactory(void) */

void EachExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the EachExpression allocation factory under component/property type
                       id 0x23. The wrapper calls ComponentFactory_initSingleton and the paired
                       registry hook with a callback whose constructor installs
                       EachExpression::vftable. */
  factoryFn = EachExpression_create;
  typeId_ = 0x23;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

