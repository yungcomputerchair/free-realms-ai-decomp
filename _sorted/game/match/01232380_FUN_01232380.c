// addr: 0x01232380
// name: FUN_01232380
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_01232380(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_8;
  int local_4;
  
                    /* Looks up a string-like key in a container and returns the matched entry's
                       value at node+0x28, or 0 if not found. It relies on the iterator returned by
                       the string lower-bound helper. */
  FUN_01232030(&local_8,param_2);
  iVar1 = *(int *)(param_1 + 0x10);
  if ((local_8 == 0) || (local_8 != param_1 + 0xc)) {
    FUN_00d83c2d();
  }
  if (local_4 != iVar1) {
    if (local_8 == 0) {
      FUN_00d83c2d();
    }
    if (local_4 == *(int *)(local_8 + 4)) {
      FUN_00d83c2d();
    }
    return *(undefined4 *)(local_4 + 0x28);
  }
  return 0;
}

