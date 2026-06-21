// addr: 0x014970d0
// name: ModulusExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ModulusExpression_registerFactory(void) */

void ModulusExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the ModulusExpression allocation factory under component/property
                       type id 0x17d. The wrapper calls ComponentFactory_initSingleton and the
                       paired registry hook with a callback whose constructor installs
                       ModulusExpression::vftable. */
  factoryFn = ModulusExpression_create;
  typeId_ = 0x17d;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

