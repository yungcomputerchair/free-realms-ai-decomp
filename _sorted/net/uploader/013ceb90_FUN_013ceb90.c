// addr: 0x013ceb90
// name: FUN_013ceb90
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * FUN_013ceb90(void) */

void * FUN_013ceb90(void)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x94-byte object and constructs it via FUN_013ce870, returning
                       null on allocation failure. Specific class is not locally identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168aa6b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x94);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)Deck_ctor(uVar1);
  }
  ExceptionList = local_c;
  return pvVar2;
}

