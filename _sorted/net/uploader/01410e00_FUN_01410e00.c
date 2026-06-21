// addr: 0x01410e00
// name: FUN_01410e00
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_01410e00(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory allocating a 0xb8-byte object and constructing it with FUN_01410d70.
                       Exact class unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169270b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0xb8);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CWGameTurn_ctor(uVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

