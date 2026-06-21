// addr: 0x0130bff0
// name: FUN_0130bff0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * FUN_0130bff0(void) */

void * FUN_0130bff0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x70-byte object and constructs it via FUN_0130bd70, returning
                       null on allocation failure. Specific class is not locally identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01676e0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = Mem_Alloc(0x70);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = Lobby_ctor(puVar1);
  }
  ExceptionList = local_c;
  return puVar1;
}

