// addr: 0x014f8c30
// name: FUN_014f8c30
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_014f8c30(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_c;
  int local_8;
  undefined4 *local_4;
  
                    /* Iterates a tree/list at +0x40 and processes entries with a positive count at
                       node+0x10 using FUN_0042c155, then advances to the next node. No class
                       identity is available. */
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  local_4 = (undefined4 *)*puVar1;
  local_8 = param_1 + 0x40;
  while( true ) {
    puVar3 = local_4;
    iVar2 = local_8;
    if ((local_8 == 0) || (local_8 != param_1 + 0x40)) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) break;
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    local_c = puVar3[3];
    if (puVar3 == *(undefined4 **)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    if (0 < (int)puVar3[4]) {
      FUN_0042c155(&local_c);
    }
    FUN_004d21f9();
  }
  return;
}

