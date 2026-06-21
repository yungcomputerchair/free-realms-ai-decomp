// addr: 0x013c20a0
// name: FUN_013c20a0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_013c20a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  uint uVar1;
  uint uVar2;
  undefined1 local_8 [8];
  
                    /* Clears a destination vector and then appends/copies a supplied range into it
                       using FUN_013c1db0. It validates and erases the existing range before
                       insertion. */
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < *(uint *)(param_1 + 4)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 8) < uVar2) {
    FUN_00d83c2d();
  }
  FUN_012c6910(local_8,param_1,uVar2,param_1,uVar1);
  uVar1 = *(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 8) < uVar1) {
    FUN_00d83c2d();
  }
  FUN_013c1db0(param_1,uVar1,param_2,param_3,param_4,param_5,param_4);
  return;
}

