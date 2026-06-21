// addr: 0x014cc430
// name: FUN_014cc430
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * FUN_014cc430(void) */

void * FUN_014cc430(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x78-byte object using constructor helper FUN_014cc2a0. Exact
                       class not visible in this thunk. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ab64b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x78);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LobbyCommand_BulkJoin_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

