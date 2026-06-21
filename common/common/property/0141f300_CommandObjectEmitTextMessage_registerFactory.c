// addr: 0x0141f300
// name: CommandObjectEmitTextMessage_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObjectEmitTextMessage_registerFactory(void) */

void CommandObjectEmitTextMessage_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers CommandObjectEmitTextMessage with the component/packet factory
                       under type id 0xd3. The registered maker allocates the class and calls the
                       constructor for that vtable-backed type. */
  factoryFn = CommandObject_EmitTextMessage_create;
  typeId_ = 0xd3;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

