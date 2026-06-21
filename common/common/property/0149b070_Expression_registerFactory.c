// addr: 0x0149b070
// name: Expression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Expression_registerFactory(void) */

void Expression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the Expression allocation factory under component/property type id
                       0x19. The wrapper calls ComponentFactory_initSingleton and the paired
                       registry hook with a callback whose constructor installs Expression::vftable.
                        */
  factoryFn = Expression_create;
  typeId_ = 0x19;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

