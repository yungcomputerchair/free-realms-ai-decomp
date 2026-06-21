// addr: 0x013ee8d0
// name: GatewayCommand_GetConnectionServer_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GatewayCommand_GetConnectionServer_registerFactory(void) */

void GatewayCommand_GetConnectionServer_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the GatewayCommand_GetConnectionServer command factory. The
                       constructor path initializes strings and sets
                       GatewayCommand_GetConnectionServer::vftable. */
  factoryFn = GatewayCommand_GetConnectionServer_create;
  typeId_ = 0x19e;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

