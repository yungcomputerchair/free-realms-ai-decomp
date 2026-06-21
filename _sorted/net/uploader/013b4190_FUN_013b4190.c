// addr: 0x013b4190
// name: FUN_013b4190
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * FUN_013b4190(void) */

void * FUN_013b4190(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x38-byte command/object via FUN_013b3fc0 and returns it, or null
                       on allocation failure. Specific type is not locally identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01687ddb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x38);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LobbyCommand_SendText_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

