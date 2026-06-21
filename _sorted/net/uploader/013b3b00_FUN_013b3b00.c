// addr: 0x013b3b00
// name: FUN_013b3b00
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_013b3b00(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x10-byte object and constructs it with FUN_013b37b0. Exact
                       derived command class is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01687cab;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x10);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_013b37b0(uVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

