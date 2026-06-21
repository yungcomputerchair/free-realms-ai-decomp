// addr: 0x014a6550
// name: FUN_014a6550
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __fastcall FUN_014a6550(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_8 [8];
  
                    /* Looks up a key in a member std::map-like container via lower_bound and
                       returns the stored value when found, otherwise a default zero/true value.
                       Exact owning class is unclear. */
  piVar4 = (int *)FUN_014a6370(local_8,&stack0x00000004);
  iVar1 = *piVar4;
  iVar2 = piVar4[1];
  iVar3 = *(int *)(param_1 + 0x10);
  if ((iVar1 == 0) || (iVar1 != param_1 + 0xc)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    return *(undefined1 *)(iVar2 + 0x10);
  }
  return 1;
}

