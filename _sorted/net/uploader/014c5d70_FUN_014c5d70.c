// addr: 0x014c5d70
// name: FUN_014c5d70
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * FUN_014c5d70(void) */

void * FUN_014c5d70(void)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x14-byte object using constructor helper FUN_014c5830. Exact
                       class not visible in this thunk. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aad4b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x14);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)LobbyCommand_ConfigureGroup_ctor(uVar1);
  }
  ExceptionList = local_c;
  return pvVar2;
}

