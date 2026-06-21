// addr: 0x01418bc0
// name: CWPlayer_create
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 CWPlayer_create(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 100 bytes and constructs a CWPlayer, returning null on allocation
                       failure. Evidence: direct call to CWPlayer_ctor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169348b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(100);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CWPlayer_ctor(uVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

