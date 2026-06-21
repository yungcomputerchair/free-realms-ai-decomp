// addr: 0x01497b60
// name: LessThanExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LessThanExpression_registerFactory(void) */

void LessThanExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LessThanExpression allocation factory under component/property
                       type id 0x1d. The wrapper calls ComponentFactory_initSingleton and the paired
                       registry hook with a callback whose constructor installs
                       LessThanExpression::vftable. */
  factoryFn = LessThanExpression_create;
  typeId_ = 0x1d;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

