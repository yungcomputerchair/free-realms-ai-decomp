// addr: 0x012cadf0
// name: LobbyService_ensureAuxSingleton
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyService_ensureAuxSingleton(void) */

void LobbyService_ensureAuxSingleton(void)

{
  uint uVar1;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates a 0x10-byte global service/helper singleton via
                       FUN_012cada0. Callers are lobby/command paths; exact helper name is not
                       known. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166f41b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  if (DAT_01cbd69c == 0) {
    local_10 = Mem_Alloc(0x10);
    local_4 = 0;
    if (local_10 == (void *)0x0) {
      DAT_01cbd69c = 0;
    }
    else {
      DAT_01cbd69c = FUN_012cada0(uVar1);
    }
  }
  ExceptionList = local_c;
  return;
}

