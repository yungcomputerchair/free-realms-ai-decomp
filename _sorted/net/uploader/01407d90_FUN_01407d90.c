// addr: 0x01407d90
// name: FUN_01407d90
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * FUN_01407d90(void) */

void * FUN_01407d90(void)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs an 8-byte object via FUN_01407af0, returning null on
                       allocation failure. Specific class is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169185b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(8);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_01407af0(uVar1);
  }
  ExceptionList = local_c;
  return pvVar2;
}

