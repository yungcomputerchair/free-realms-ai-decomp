// addr: 0x008200c0
// name: FUN_008200c0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void FUN_008200c0(void) */

void FUN_008200c0(void)

{
  uint uVar1;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a large global manager/object (0xe104 bytes) and stores the
                       constructed result in DAT_01be1090. Owner class is not identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156aabb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0xe104);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    DAT_01be1090 = 0;
  }
  else {
    DAT_01be1090 = FUN_0081faa0(uVar1);
  }
  ExceptionList = local_c;
  return;
}

