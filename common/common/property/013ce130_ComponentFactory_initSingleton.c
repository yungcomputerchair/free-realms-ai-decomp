// addr: 0x013ce130
// name: ComponentFactory_initSingleton
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ComponentFactory_initSingleton(void) */

void ComponentFactory_initSingleton(void)

{
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates and constructs the global ComponentFactory singleton if it
                       has not already been created. The constructed object is stored in global
                       DAT_01cbddf8. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168a8fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01cbddf8 == (void *)0x0) {
    this = Mem_Alloc(0x2c);
    local_4 = 0;
    if (this == (void *)0x0) {
      DAT_01cbddf8 = (void *)0x0;
    }
    else {
      DAT_01cbddf8 = ComponentFactory_ctor(this);
    }
  }
  ExceptionList = local_c;
  return;
}

