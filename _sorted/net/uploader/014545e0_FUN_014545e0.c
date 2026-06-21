// addr: 0x014545e0
// name: FUN_014545e0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_014545e0(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x30-byte object and invokes constructor helper FUN_01454440.
                       Exact class is not visible in this allocation thunk. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169bd0b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x30);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CWPileQueryNode_ctor(uVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

