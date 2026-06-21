// addr: 0x012d46a0
// name: DisplayActionManager_ensureSingleton
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void DisplayActionManager_ensureSingleton(void) */

void DisplayActionManager_ensureSingleton(void)

{
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates and constructs a large global display/action manager object
                       used by many command and state display-action builders. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016704cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01cbd6a4 == (void *)0x0) {
    this = Mem_Alloc(0x118);
    local_4 = 0;
    if (this == (void *)0x0) {
      DAT_01cbd6a4 = (void *)0x0;
    }
    else {
      DAT_01cbd6a4 = ClientApplication_ctor(this);
    }
  }
  ExceptionList = local_c;
  return;
}

