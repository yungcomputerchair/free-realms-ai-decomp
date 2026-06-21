// addr: 0x014d86a0
// name: FUN_014d86a0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * FUN_014d86a0(void) */

void * FUN_014d86a0(void)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x80-byte command/base object via FUN_014d8420 and returns it, or
                       null on allocation failure. Specific type is not locally identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ad85b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x80);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_014d8420(uVar1);
  }
  ExceptionList = local_c;
  return pvVar2;
}

