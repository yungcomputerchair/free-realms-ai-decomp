// addr: 0x0131bb90
// name: FUN_0131bb90
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0131bb90(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
                    /* Initializes an object with a game object id, resolves it through
                       Game_findByID, stores an extra argument, then notifies every observer/list
                       entry via a virtual callback. */
  param_1[2] = param_2;
  pvVar2 = Game_findByID(param_2);
  param_1[4] = param_3;
  param_1[3] = (int)pvVar2;
  iVar3 = Game_getVector_24();
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (*(undefined4 **)(iVar3 + 8) < puVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    puVar1 = *(undefined4 **)(iVar3 + 8);
    if (puVar1 < *(undefined4 **)(iVar3 + 4)) {
      FUN_00d83c2d();
    }
    if (puVar4 == puVar1) break;
    if (*(undefined4 **)(iVar3 + 8) <= puVar4) {
      FUN_00d83c2d();
    }
    (**(code **)(*param_1 + 0x3c))(*puVar4);
    if (*(undefined4 **)(iVar3 + 8) <= puVar4) {
      FUN_00d83c2d();
    }
    puVar4 = puVar4 + 1;
  }
  return;
}

