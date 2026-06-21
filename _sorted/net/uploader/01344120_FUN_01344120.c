// addr: 0x01344120
// name: FUN_01344120
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * FUN_01344120(void) */

void * FUN_01344120(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x48-byte object via FUN_01343d20 and returns the embedded
                       subobject at +8 when construction succeeds. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167caab;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x48);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = PlayElement_ctor(uVar1);
  }
  if (iVar2 != 0) {
    ExceptionList = local_c;
    return (void *)(iVar2 + 8);
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

