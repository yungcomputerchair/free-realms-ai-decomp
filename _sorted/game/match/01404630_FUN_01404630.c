// addr: 0x01404630
// name: FUN_01404630
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


float10 FUN_01404630(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Obtains a temporary vector from virtual method +0x144, iterates its objects,
                       and calls virtual +0x48 on each before freeing the vector. Exact class and
                       operation are unclear. */
  puStack_8 = &LAB_016911c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  (**(code **)(*param_1 + 0x144))(&local_1c,DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  puVar2 = local_1c;
  if (local_18 < local_1c) {
    FUN_00d83c2d();
  }
  while( true ) {
    puVar1 = local_18;
    if (local_18 < local_1c) {
      FUN_00d83c2d();
    }
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if (puVar2 == puVar1) break;
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if (local_18 <= puVar2) {
      FUN_00d83c2d();
    }
    (**(code **)(*(int *)*puVar2 + 0x48))();
    if (local_18 <= puVar2) {
      FUN_00d83c2d();
    }
    puVar2 = puVar2 + 1;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_1c);
  }
  ExceptionList = local_10;
  return (float10)0;
}

