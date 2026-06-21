// addr: 0x013478b0
// name: FUN_013478b0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * FUN_013478b0(void) */

void * FUN_013478b0(void)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0xa8-byte object and constructs it via FUN_013fd410, returning
                       null on allocation failure. Specific class is not locally identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167d2db;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0xa8);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)GameTurn_ctor(uVar1);
  }
  ExceptionList = local_c;
  return pvVar2;
}

