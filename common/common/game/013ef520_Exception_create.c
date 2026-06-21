// addr: 0x013ef520
// name: Exception_create
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 Exception_create(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 100 bytes and constructs an Exception object via Exception_ctor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168f13b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(100);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = Exception_ctor(uVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

