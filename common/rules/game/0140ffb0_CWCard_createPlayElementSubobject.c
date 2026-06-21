// addr: 0x0140ffb0
// name: CWCard_createPlayElementSubobject
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int CWCard_createPlayElementSubobject(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a CWCard, returning a pointer eight bytes into the
                       object when construction succeeds. Evidence: calls CWCard_ctor and returns
                       iVar1 + 8. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016924ab;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x150);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = CWCard_ctor(uVar1);
  }
  if (iVar2 != 0) {
    ExceptionList = local_c;
    return iVar2 + 8;
  }
  ExceptionList = local_c;
  return 0;
}

