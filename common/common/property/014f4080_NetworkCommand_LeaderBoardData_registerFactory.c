// addr: 0x014f4080
// name: NetworkCommand_LeaderBoardData_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void NetworkCommand_LeaderBoardData_registerFactory(void) */

void NetworkCommand_LeaderBoardData_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for NetworkCommand_LeaderBoardData under type
                       id 0x1ca and installs the allocator callback. */
  factoryFn = NetworkCommand_LeaderBoardData_create;
  typeId_ = 0x1ca;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

