// addr: 0x0138d360
// name: Game_findElementInVector24
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Game_findElementInVector24(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
                    /* Searches a Game vector at offset 0x24 for an element/object associated with
                       the supplied key. */
  cVar2 = (**(code **)(*param_1 + 0x1e8))();
  if (cVar2 == '\0') {
    iVar3 = Game_getVector_24();
    puVar1 = *(undefined4 **)(iVar3 + 8);
    if (puVar1 < *(undefined4 **)(iVar3 + 4)) {
      FUN_00d83c2d();
    }
    puVar5 = *(undefined4 **)(iVar3 + 4);
    if (*(undefined4 **)(iVar3 + 8) < puVar5) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (iVar3 == 0) {
        FUN_00d83c2d();
      }
      if (puVar5 == puVar1) break;
      if (iVar3 == 0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(iVar3 + 8) <= puVar5) {
        FUN_00d83c2d();
      }
      piVar4 = (int *)unknown_getField30((void *)*puVar5);
      (**(code **)(*piVar4 + 0x94))(param_1[0xd],param_2);
      if (*(undefined4 **)(iVar3 + 8) <= puVar5) {
        FUN_00d83c2d();
      }
      puVar5 = puVar5 + 1;
    }
    return;
  }
  (**(code **)(*param_1 + 0x94))(param_1[0xd],param_2);
  return;
}

