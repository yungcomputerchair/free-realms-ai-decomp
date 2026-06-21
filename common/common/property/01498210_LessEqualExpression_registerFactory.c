// addr: 0x01498210
// name: LessEqualExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LessEqualExpression_registerFactory(void) */

void LessEqualExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LessEqualExpression allocation factory under component/property
                       type id 0x21. The wrapper calls ComponentFactory_initSingleton and the paired
                       registry hook with a callback whose constructor installs
                       LessEqualExpression::vftable. */
  factoryFn = LessEqualExpression_create;
  typeId_ = 0x21;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

