// addr: 0x0133a5e0
// name: Game_drawPlayableCardsForPlayer
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwgame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Game_drawPlayableCardsForPlayer(int *param_1,int *param_2,void *param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  uint playerId_;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  void *this;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int *piVar11;
  int iStack_30;
  int *local_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [4];
  int *piStack_18;
  int *piStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Finds a player and iterates card candidates, filtering by card/archetype
                       state before dispatching draw/add-card actions; reshuffles when the source is
                       exhausted. Evidence: cwgame.cpp player assert, CWGame_doReshuffleFor,
                       Card/CWCard RTTI, and card action emission. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167ba18;
  local_c = ExceptionList;
  playerId_ = DAT_01b839d8 ^ (uint)&stack0xffffffbc;
  ExceptionList = &local_c;
  local_2c = param_1;
  bVar2 = Game_getFlag_14d(param_1);
  if (bVar2) {
    pvVar4 = PlayArea_findPlayerElementById(param_1,(int)param_3);
    if (pvVar4 == (void *)0x0) {
      FUN_012f5a60("player","..\\common\\rules\\game\\cwgame.cpp",0xd39);
    }
    FUN_01300db0();
    bVar2 = false;
    iStack_30 = 0;
    piStack_18 = (int *)0x0;
    piStack_14 = (int *)0x0;
    uStack_10 = 0;
    uStack_4 = 0;
    (**(code **)(*param_2 + 0x34))(auStack_1c);
    piVar11 = piStack_18;
    if (piStack_14 < piStack_18) {
      FUN_00d83c2d();
    }
    puVar10 = auStack_1c;
    while( true ) {
      piVar1 = piStack_14;
      if (piStack_14 < piStack_18) {
        FUN_00d83c2d();
      }
      if ((puVar10 == (undefined1 *)0x0) || (puVar10 != auStack_1c)) {
        FUN_00d83c2d();
      }
      piVar8 = piStack_18;
      if ((piVar11 == piVar1) || (param_4 <= iStack_30)) break;
      if (puVar10 == (undefined1 *)0x0) {
        FUN_00d83c2d();
      }
      if (*(int **)(puVar10 + 8) <= piVar11) {
        FUN_00d83c2d();
      }
      piVar1 = (int *)*piVar11;
      if ((piVar1 == (int *)0x0) || (cVar3 = (**(code **)(*piVar1 + 0x1c0))(0x22656), cVar3 != '\0')
         ) {
        if (*(int **)(puVar10 + 8) <= piVar11) {
          FUN_00d83c2d();
        }
        piVar11 = piVar11 + 1;
      }
      else {
        iVar5 = FUN_0138a380();
        ArchetypeDB_getInstance();
        uVar6 = PropertyId_getRemappedRangeTypeId(iVar5);
        if (uVar6 == 0xffffffff) {
LAB_0133a7c6:
          if (*(int **)(puVar10 + 8) <= piVar11) {
            FUN_00d83c2d();
          }
          piVar11 = piVar11 + 1;
          param_1 = local_2c;
        }
        else {
          ArchetypeDB_getInstance();
          uVar7 = Archetype_getField3c(this);
          ArchetypeDB_getInstance();
          piVar8 = (int *)ArchetypeDB_getArchetype(uVar6,uVar7);
          if ((piVar8 == (int *)0x0) ||
             (iVar5 = (**(code **)(*piVar8 + 0x80))(0x229ea), iVar5 != 0x222e2)) goto LAB_0133a7c6;
          iStack_30 = iStack_30 + 1;
          (**(code **)(*local_2c + 0x104))(0,piVar1);
          iStack_30 = PlayElement_getId();
          FUN_01300680(6);
          FUN_0042c155(&iStack_30);
          (**(code **)(*piVar1 + 0x1ac))(0x22656);
          puVar9 = (undefined4 *)FUN_01331300(auStack_24,puVar10,piVar11);
          puVar10 = (undefined1 *)*puVar9;
          piVar11 = (int *)puVar9[1];
          param_1 = local_2c;
        }
      }
    }
    if (piStack_14 < piStack_18) {
      FUN_00d83c2d();
    }
    do {
      piVar11 = piStack_14;
      if (piStack_14 < piStack_18) {
        FUN_00d83c2d();
      }
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (piVar8 == piVar11) {
        CWGame_doReshuffleFor(param_1,param_3,playerId_);
        (**(code **)(*param_2 + 0x34))(auStack_1c);
        piVar8 = piStack_18;
        if (piStack_14 < piStack_18) {
          FUN_00d83c2d();
        }
      }
      else {
        if (&stack0x00000000 == (undefined1 *)0x1c) {
          FUN_00d83c2d();
        }
        if (piStack_14 <= piVar8) {
          FUN_00d83c2d();
        }
        iVar5 = FUN_00d8d382(*piVar8,0,&Card::RTTI_Type_Descriptor,&CWCard::RTTI_Type_Descriptor,0);
        if ((iVar5 == 0) || (param_4 <= iStack_30)) {
          bVar2 = true;
        }
        else {
          iStack_30 = iStack_30 + 1;
          (**(code **)(*param_1 + 0x104))(0,iVar5);
          uStack_28 = PlayElement_getId();
          FUN_01300680(6);
          FUN_0042c155(&uStack_28);
        }
      }
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (piStack_14 <= piVar8) {
        FUN_00d83c2d();
      }
      piVar8 = piVar8 + 1;
    } while (!bVar2);
    uStack_4 = 0xffffffff;
    if (piStack_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(piStack_18);
    }
  }
  ExceptionList = local_c;
  return;
}

