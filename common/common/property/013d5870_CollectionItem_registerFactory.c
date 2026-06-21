// addr: 0x013d5870
// name: CollectionItem_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CollectionItem_registerFactory(void) */

void CollectionItem_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CollectionItem persistent component factory. The registered
                       allocation thunk calls CollectionItem_ctor and initializes
                       CollectionItem::vftable. */
  factoryFn = CollectionItem_create;
  typeId_ = 0x34;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

