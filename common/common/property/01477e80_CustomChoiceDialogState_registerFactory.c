// addr: 0x01477e80
// name: CustomChoiceDialogState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CustomChoiceDialogState_registerFactory(void) */

void CustomChoiceDialogState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CustomChoiceDialogState factory callback with the
                       component/property factory registries. The callback at 01477e10 allocates the
                       object and calls the constructor at 01477c80. */
  factoryFn = CustomChoiceDialogState_create;
  typeId_ = 0x102;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

