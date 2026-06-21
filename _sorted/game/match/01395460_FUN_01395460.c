// addr: 0x01395460
// name: FUN_01395460
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_01395460(int *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *local_1c;
  void *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Calls virtual +0xc8 to retrieve a temporary vector and virtual +0xcc for a
                       result value, then walks/frees the vector. The decompiled loop lacks enough
                       context to name the class. */
  puStack_8 = &LAB_01684608;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  (**(code **)(*param_1 + 200))(&local_1c,DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  pvVar1 = local_18;
  if (local_18 < local_1c) {
    FUN_00d83c2d();
  }
  uVar2 = (**(code **)(*param_1 + 0xcc))();
  pvVar3 = local_1c;
  if (local_18 < local_1c) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if (pvVar3 == pvVar1) break;
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if ((local_18 <= pvVar3) && (FUN_00d83c2d(), local_18 <= pvVar3)) {
      FUN_00d83c2d();
    }
    pvVar3 = (void *)((int)pvVar3 + 4);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (local_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_1c);
  }
  ExceptionList = local_10;
  return uVar2;
}

