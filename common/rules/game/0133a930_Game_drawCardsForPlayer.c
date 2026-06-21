// addr: 0x0133a930
// name: Game_drawCardsForPlayer
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwgame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Game_drawCardsForPlayer(int *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iStack0000000c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Finds a player, iterates that player area/deck cards, and dispatches
                       draw/add-card actions up to a requested count. Evidence: cwgame.cpp player
                       assert and Card/CWCard RTTI checks with action logging. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167ba48;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_c;
  bVar3 = Game_getFlag_14d(param_1);
  if (bVar3) {
    pvVar5 = PlayArea_findPlayerElementById(param_1,param_2);
    if (pvVar5 == (void *)0x0) {
      FUN_012f5a60("player","..\\common\\rules\\game\\cwgame.cpp",0xdb2,uVar4);
    }
    FUN_01300db0();
    bVar3 = false;
    iStack0000000c = 0;
    puStack_18 = (undefined4 *)0x0;
    puStack_14 = (undefined4 *)0x0;
    uStack_10 = 0;
    uStack_4 = 0;
    PlayElement_getGame();
    piVar6 = (int *)FUN_0139d7a0();
    (**(code **)(*piVar6 + 0x34))(auStack_1c);
    puVar2 = puStack_14;
    if (puStack_14 < puStack_18) {
      FUN_00d83c2d();
    }
    puVar8 = puStack_18;
    if (puStack_14 < puStack_18) {
      FUN_00d83c2d();
    }
    puStack_24 = auStack_1c;
    while( true ) {
      puVar1 = puStack_24;
      if ((puStack_24 == (undefined1 *)0x0) || (puStack_24 != auStack_1c)) {
        FUN_00d83c2d();
      }
      if ((puVar8 == puVar2) || (bVar3)) break;
      if (puVar1 == (undefined1 *)0x0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(puVar1 + 8) <= puVar8) {
        FUN_00d83c2d();
      }
      iVar7 = FUN_00d8d382(*puVar8,0,&Card::RTTI_Type_Descriptor,&CWCard::RTTI_Type_Descriptor,0);
      if ((iVar7 == 0) || (param_3 <= iStack0000000c)) {
        bVar3 = true;
      }
      else {
        iStack0000000c = iStack0000000c + 1;
        (**(code **)(*param_1 + 0x104))(0,iVar7);
        uStack_28 = PlayElement_getId();
        FUN_01300680(6);
        FUN_0042c155(&uStack_28);
      }
      if (*(undefined4 **)(puStack_24 + 8) <= puVar8) {
        FUN_00d83c2d();
      }
      puVar8 = puVar8 + 1;
    }
    uStack_4 = 0xffffffff;
    if (puStack_18 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_18);
    }
  }
  ExceptionList = local_c;
  return;
}

