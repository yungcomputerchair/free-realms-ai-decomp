// addr: 0x0139e170
// name: PilePlayArea_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PilePlayArea_registerFactory(void) */

void PilePlayArea_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the PilePlayArea factory callback. The callback allocates 0x48
                       bytes and constructs a PilePlayArea object. */
  factoryFn = PilePlayArea_createEmbedded;
  typeId_ = 0xad;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

