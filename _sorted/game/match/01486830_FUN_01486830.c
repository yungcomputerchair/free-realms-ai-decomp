// addr: 0x01486830
// name: FUN_01486830
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_01486830(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_8 [8];
  
                    /* Looks up a key in a member std::map-like container via lower_bound and
                       returns the stored value when found, otherwise a default zero/true value.
                       Exact owning class is unclear. */
  piVar4 = (int *)FUN_01486780(local_8,&stack0x00000004);
  iVar1 = *piVar4;
  iVar2 = piVar4[1];
  iVar3 = *(int *)(param_1 + 0x20);
  if ((iVar1 == 0) || (iVar1 != param_1 + 0x1c)) {
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

