// addr: 0x01442860
// name: FUN_01442860
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_01442860(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory allocating a 0xc-byte object and constructing it with FUN_01442520.
                       No concrete class evidence is present. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01698feb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0xc);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_01442520(uVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

