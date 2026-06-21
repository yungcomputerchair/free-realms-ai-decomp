// addr: 0x01357900
// name: FUN_01357900
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_01357900(int param_1)

{
  int iVar1;
  int local_8;
  int local_4;
  
                    /* Erases the first entry in the tree/list at +0xa8 when present. It gets begin,
                       compares against end at +0xac, and calls the erase helper for that node. */
  FUN_01354f70(&local_8,&stack0x00000004);
  iVar1 = *(int *)(param_1 + 0xac);
  if ((local_8 == 0) || (local_8 != param_1 + 0xa8)) {
    FUN_00d83c2d();
  }
  if (local_4 != iVar1) {
    FUN_013548c0(&local_8,local_8,local_4);
  }
  return;
}

