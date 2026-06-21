// addr: 0x01368390
// name: Game_addElementToMap
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall Game_addElementToMap(void *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 unaff_EDI;
  int local_8;
  int local_4;
  
                    /* Adds a PlayElement to the game integer map, logging id and asserting if
                       already present. */
  FUN_01354f70(&local_8,&param_2);
  iVar1 = *(int *)((int)param_1 + 0x84);
  if ((local_8 == 0) || (local_8 != (int)param_1 + 0x80)) {
    FUN_00d83c2d();
  }
  if (local_4 == iVar1) {
    Game_logGeneral(param_1,"adding element: %d",param_2);
    puVar2 = (undefined4 *)Game_IntMap_findOrInsertValueSlot(&param_2);
    *puVar2 = param_3;
    return 1;
  }
  Game_logGeneral(param_1,"ELEMENT ALREADY IN MAP!",unaff_EDI);
  return 0;
}

