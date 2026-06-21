// addr: 0x0149ce50
// name: DivideExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void DivideExpression_registerFactory(void) */

void DivideExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the DivideExpression allocation factory under component/property
                       type id 0x112. The wrapper calls ComponentFactory_initSingleton and the
                       paired registry hook with a callback whose constructor installs
                       DivideExpression::vftable. */
  factoryFn = DivideExpression_create;
  typeId_ = 0x112;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

