// addr: 0x014c4330
// name: FUN_014c4330
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * FUN_014c4330(void) */

void * FUN_014c4330(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x2c-byte object using constructor helper FUN_014c4170. Exact
                       class not visible in this thunk. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aa99b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x2c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LobbyCommand_GameServiceError_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

