// addr: 0x013d1460
// name: FUN_013d1460
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_013d1460(int param_1)

{
  int iVar1;
  int *unaff_EDI;
  void *local_8;
  int local_4;
  
                    /* Map lookup helper with weak evidence: finds key 4 in an int map at +0x4c and
                       returns mapped value or zero. */
  StdRbTreeInt_find_alt((void *)(param_1 + 0x4c),&local_8,&stack0x00000004,unaff_EDI);
  iVar1 = *(int *)(param_1 + 0x50);
  if ((local_8 == (void *)0x0) || (local_8 != (void *)(param_1 + 0x4c))) {
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

