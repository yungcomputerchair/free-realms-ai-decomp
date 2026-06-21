// addr: 0x01308580
// name: FUN_01308580
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_01308580(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clears an object that owns a primary map/tree and, conditionally, a secondary
                       map; while clearing, it releases vectors of referenced objects. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01676788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012cfde0(DAT_01b839d8 ^ (uint)&stack0xffffffbc);
  piVar1 = *(int **)(param_1 + 0xc);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (param_1 == -8) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) {
      FUN_01307960(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4));
      *(int *)(*(int *)(param_1 + 0xc) + 4) = *(int *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)*(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
      *(int *)(*(int *)(param_1 + 0xc) + 8) = *(int *)(param_1 + 0xc);
      if (*(int *)(param_1 + 0x1c) == 1) {
        FUN_01307a00(*(undefined4 *)(*(int *)(param_1 + 0x24) + 4));
        *(int *)(*(int *)(param_1 + 0x24) + 4) = *(int *)(param_1 + 0x24);
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)*(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
        *(int *)(*(int *)(param_1 + 0x24) + 8) = *(int *)(param_1 + 0x24);
      }
      ExceptionList = local_c;
      return;
    }
    if (param_1 == -8) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)(param_1 + 0xc)) {
      FUN_00d83c2d();
    }
    FUN_005f15f0(piVar2 + 4);
    local_4 = 0;
    puVar4 = local_18;
    if ((local_14 < local_18) && (FUN_00d83c2d(), local_14 < local_18)) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (puVar4 == local_14) break;
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (local_14 <= puVar4) {
        FUN_00d83c2d();
      }
      puVar3 = (undefined4 *)FUN_012cc6b0(*puVar4);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      if (local_14 <= puVar4) {
        FUN_00d83c2d();
      }
      puVar4 = puVar4 + 1;
    }
    local_4 = 0xffffffff;
    if (local_18 != (undefined4 *)0x0) break;
    local_18 = (undefined4 *)0x0;
    local_14 = (undefined4 *)0x0;
    FUN_013038d0();
  }
                    /* WARNING: Subroutine does not return */
  _free(local_18);
}

