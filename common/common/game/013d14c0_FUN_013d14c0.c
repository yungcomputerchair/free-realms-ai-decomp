// addr: 0x013d14c0
// name: FUN_013d14c0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_013d14c0(int param_1)

{
  int iVar1;
  int *unaff_EDI;
  void *local_8;
  int local_4;
  
                    /* Map lookup helper with weak evidence: finds key 4 in an int map at +0x58 and
                       returns mapped value or zero. */
  StdRbTreeInt_find_alt((void *)(param_1 + 0x58),&local_8,&stack0x00000004,unaff_EDI);
  iVar1 = *(int *)(param_1 + 0x5c);
  if ((local_8 == (void *)0x0) || (local_8 != (void *)(param_1 + 0x58))) {
    FUN_00d83c2d();
  }
  if (local_4 != iVar1) {
    if (local_8 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (local_4 == *(int *)((int)local_8 + 4)) {
      FUN_00d83c2d();
    }
    return *(undefined4 *)(local_4 + 0x10);
  }
  return 0;
}

