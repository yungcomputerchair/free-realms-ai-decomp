// addr: 0x012bddf0
// name: ActionDB_ensureSingleton
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ActionDB_ensureSingleton(void) */

void ActionDB_ensureSingleton(void)

{
  uint uVar1;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates the global ActionDB object if needed and constructs it via
                       012bdd60. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166dfdb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  if (DAT_01cbd68c == 0) {
    local_10 = Mem_Alloc(0x34);
    local_4 = 0;
    if (local_10 == (void *)0x0) {
      DAT_01cbd68c = 0;
    }
    else {
      DAT_01cbd68c = ActionDB_ctor(uVar1);
    }
  }
  ExceptionList = local_c;
  return;
}

