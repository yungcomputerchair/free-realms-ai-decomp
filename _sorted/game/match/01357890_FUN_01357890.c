// addr: 0x01357890
// name: FUN_01357890
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_01357890(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_8 [8];
  
                    /* Clears two vector-like members of a game object: a non-trivial vector at
                       +0x24 and a 4-byte vector at +0x34. It validates each range and calls the
                       appropriate full-range erase helper. */
  uVar1 = *(uint *)(param_1 + 0x2c);
  if (uVar1 < *(uint *)(param_1 + 0x28)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x2c) < uVar2) {
    FUN_00d83c2d();
  }
  FUN_01354e80(local_8,param_1 + 0x24,uVar2,param_1 + 0x24,uVar1);
  uVar1 = *(uint *)(param_1 + 0x3c);
  if (uVar1 < *(uint *)(param_1 + 0x38)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)(param_1 + 0x38);
  if (*(uint *)(param_1 + 0x3c) < uVar2) {
    FUN_00d83c2d();
  }
  FUN_0041f5e6(local_8,param_1 + 0x34,uVar2,param_1 + 0x34,uVar1);
  return;
}

