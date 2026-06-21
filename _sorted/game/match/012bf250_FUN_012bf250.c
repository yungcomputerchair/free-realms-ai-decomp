// addr: 0x012bf250
// name: FUN_012bf250
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_012bf250(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_8 [8];
  
                    /* Looks up an entry in a tree/map using a lower-bound helper and returns the
                       node value at +0x10, or 0 if no entry matches. No class identity is
                       evidenced. */
  piVar4 = (int *)FUN_012bf020(local_8,&stack0x00000004);
  iVar1 = *piVar4;
  iVar2 = piVar4[1];
  iVar3 = *(int *)(param_1 + 8);
  if ((iVar1 == 0) || (iVar1 != param_1 + 4)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    return *(undefined4 *)(iVar2 + 0x10);
  }
  return 0;
}

