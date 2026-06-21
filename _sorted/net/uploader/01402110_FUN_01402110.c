// addr: 0x01402110
// name: FUN_01402110
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_01402110(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory allocating a 0x1c-byte object and constructing it with FUN_01401df0.
                       Exact type unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01690ceb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x1c);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = MessageText_ctor(uVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

