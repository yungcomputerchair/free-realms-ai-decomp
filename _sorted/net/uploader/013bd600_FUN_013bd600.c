// addr: 0x013bd600
// name: FUN_013bd600
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_013bd600(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x44-byte object and constructs it with FUN_013bd2e0. Exact UChat
                       command type is not visible here. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01688b8b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x44);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_013bd2e0(uVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

