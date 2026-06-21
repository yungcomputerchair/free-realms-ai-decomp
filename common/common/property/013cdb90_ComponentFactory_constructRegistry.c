// addr: 0x013cdb90
// name: ComponentFactory_constructRegistry
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ComponentFactory_constructRegistry(void * this) */

void * __fastcall ComponentFactory_constructRegistry(void *this)

{
  undefined1 local_11;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Helper used during ComponentFactory construction to initialize an internal
                       registry/list from a stack sentinel. It returns the original object pointer
                       after calling FUN_013cdab0 under an SEH frame. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168a898;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  ComponentFactoryRegistryEntry_copyConstruct(&local_11,&local_11);
  ExceptionList = local_c;
  return this;
}

