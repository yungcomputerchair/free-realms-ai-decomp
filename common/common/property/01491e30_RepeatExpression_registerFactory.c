// addr: 0x01491e30
// name: RepeatExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void RepeatExpression_registerFactory(void) */

void RepeatExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the RepeatExpression allocation factory under component/property
                       type id 0x16f. The wrapper calls ComponentFactory_initSingleton and the
                       paired registry hook with a callback whose constructor installs
                       RepeatExpression::vftable. */
  factoryFn = RepeatExpression_create;
  typeId_ = 0x16f;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

