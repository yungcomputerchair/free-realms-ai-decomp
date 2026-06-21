// addr: 0x01435b80
// name: FUN_01435b80
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_01435b80(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *unaff_EBX;
  undefined4 *puVar5;
  undefined1 local_24 [8];
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clears a vector of pending objects and then obtains a callback/list from a
                       virtual method +0x38, invoking callback virtual +0x0c for each entry. Exact
                       class is unclear. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01697028;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 < *(uint *)(param_2 + 4)) {
    FUN_00d83c2d(uVar4);
  }
  uVar2 = *(uint *)(param_2 + 4);
  if (*(uint *)(param_2 + 8) < uVar2) {
    FUN_00d83c2d(uVar4);
  }
  FUN_012c6910(local_24,param_2,uVar2,param_2,uVar1);
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  (**(code **)(*param_1 + 0x38))(&local_1c);
  puVar5 = local_1c;
  if (local_18 < local_1c) {
    FUN_00d83c2d();
  }
  while( true ) {
    puVar3 = local_18;
    if (local_18 < local_1c) {
      FUN_00d83c2d();
    }
    if (puVar5 == puVar3) break;
    if (local_18 <= puVar5) {
      FUN_00d83c2d();
    }
    (**(code **)(*unaff_EBX + 0xc))(*puVar5,param_1,param_2);
    if (local_18 <= puVar5) {
      FUN_00d83c2d();
    }
    puVar5 = puVar5 + 1;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_1c);
  }
  ExceptionList = local_10;
  return;
}

