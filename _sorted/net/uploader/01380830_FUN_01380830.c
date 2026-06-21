// addr: 0x01380830
// name: FUN_01380830
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * FUN_01380830(void) */

void * FUN_01380830(void)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x34-byte object and constructs it via FUN_01380760, returning
                       null on allocation failure. Specific class is not locally identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168267b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x34);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)Archetype_ctor(uVar1);
  }
  ExceptionList = local_c;
  return pvVar2;
}

