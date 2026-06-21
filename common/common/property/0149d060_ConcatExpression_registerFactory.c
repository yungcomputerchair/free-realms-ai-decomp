// addr: 0x0149d060
// name: ConcatExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ConcatExpression_registerFactory(void) */

void ConcatExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the ConcatExpression allocation factory under component/property
                       type id 0x172. The wrapper calls ComponentFactory_initSingleton and the
                       paired registry hook with a callback whose constructor installs
                       ConcatExpression::vftable. */
  factoryFn = ConcatExpression_create;
  typeId_ = 0x172;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

