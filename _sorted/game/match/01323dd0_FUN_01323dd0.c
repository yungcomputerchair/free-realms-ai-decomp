// addr: 0x01323dd0
// name: FUN_01323dd0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_01323dd0(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_8;
  int local_4;
  
                    /* Checks whether a variant/property map contains a non-null value for a key. It
                       lower-bounds the tree at +0x64/+0x68 and tests node value pointer at +0x10.
                        */
  FUN_01323910(&local_8,&param_2);
  iVar1 = *(int *)(param_1 + 0x68);
  if (param_1 + 100 != local_8) {
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

