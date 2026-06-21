// addr: 0x01527990
// name: FUN_01527990
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_01527990(int param_1)

{
  int iVar1;
  int local_8;
  int local_4;
  
                    /* Looks up a key in a member std::map-like container via lower_bound and
                       returns the stored value when found, otherwise a default zero/true value.
                       Exact owning class is unclear. */
  FUN_01323910(&local_8,&stack0x00000004);
  iVar1 = *(int *)(param_1 + 0xc);
  if (param_1 + 8 != local_8) {
    FUN_00d83c2d();
  }
  if (iVar1 != local_4) {
    if (local_8 == 0) {
      FUN_00d83c2d();
    }
    if (local_4 == *(int *)(local_8 + 4)) {
      FUN_00d83c2d();
    }
    if (*(int *)(local_4 + 0x10) != 0) {
      return 1;
    }
  }
  return 0;
}

