// addr: 0x01498fa0
// name: IsBorneByExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void IsBorneByExpression_registerFactory(void) */

void IsBorneByExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the IsBorneByExpression allocation factory under component/property
                       type id 0x87. The wrapper calls ComponentFactory_initSingleton and the paired
                       registry hook with a callback whose constructor installs
                       IsBorneByExpression::vftable. */
  factoryFn = IsBorneByExpression_create;
  typeId_ = 0x87;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

