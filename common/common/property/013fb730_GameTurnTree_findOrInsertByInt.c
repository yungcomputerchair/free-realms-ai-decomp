// addr: 0x013fb730
// name: GameTurnTree_findOrInsertByInt
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GameTurnTree_findOrInsertByInt(void *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_10 [2];
  undefined1 local_8 [8];
  
                    /* Finds or inserts a GameTurn serialization tree entry keyed by integer and
                       returns the value area. */
  puVar3 = *(undefined4 **)((int)param_1 + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 == *(undefined4 **)((int)param_1 + 4)) || (*param_2 < (int)puVar3[3])) {
    local_10[0] = *param_2;
    local_10[1] = 0;
    puVar3 = GameTurnTree_insertUniqueWithHint(param_1,local_8,param_1,puVar3,local_10);
    param_1 = (void *)*puVar3;
    puVar3 = (undefined4 *)puVar3[1];
  }
  if (param_1 == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (puVar3 == *(undefined4 **)((int)param_1 + 4)) {
    FUN_00d83c2d();
  }
  return puVar3 + 4;
}

