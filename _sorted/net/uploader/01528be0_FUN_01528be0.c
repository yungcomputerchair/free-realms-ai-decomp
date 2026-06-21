// addr: 0x01528be0
// name: FUN_01528be0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_01528be0(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 8-byte object using constructor helper FUN_01528920. Exact class
                       is not visible in this thunk. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b999b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(8);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_01528920(uVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

