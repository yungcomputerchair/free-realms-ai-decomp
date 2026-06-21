// addr: 0x01459d80
// name: FUN_01459d80
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_01459d80(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x88-byte object and invokes constructor helper FUN_01459a20.
                       Exact class is not visible in this allocation thunk. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169c74b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x88);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CWGameCommand_SetupGame_ctor(uVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

