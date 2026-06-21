// addr: 0x013c1820
// name: LoginCommand_RegisterUsername_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LoginCommand_RegisterUsername_registerFactory(void) */

void LoginCommand_RegisterUsername_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LoginCommand_RegisterUsername component factory with the shared
                       ComponentFactory under its numeric type id. Evidence is the factory singleton
                       init followed by insertion of constructor thunk FUN_013c17c0, whose ctor sets
                       LoginCommand_RegisterUsername::vftable. */
  factoryFn = LoginCommand_RegisterUsername_create;
  typeId_ = 0x198;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

