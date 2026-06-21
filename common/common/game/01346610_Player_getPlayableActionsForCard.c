// addr: 0x01346610
// name: Player_getPlayableActionsForCard
// subsystem: common/common/game
// source (binary assert): common/common/game/Player.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Player_getPlayableActionsForCard(void * this, void * card, void *
   environment) */

bool __thiscall Player_getPlayableActionsForCard(void *this,void *card,void *environment)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 *puVar10;
  int *piStack_110;
  undefined4 local_10c;
  int *local_108;
  int *local_104;
  undefined4 uStack_100;
  int iStack_fc;
  undefined1 auStack_f8 [4];
  int *piStack_f4;
  int *piStack_f0;
  void *local_ec;
  undefined1 auStack_e8 [72];
  undefined1 auStack_a0 [132];
  void *pvStack_1c;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds/evaluates the playable actions for a card in the player context,
                       checking card action availability and related archetype/action data. Returns
                       false if the card action query fails. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167cff7;
  local_c = ExceptionList;
  pvVar5 = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffee0);
  ExceptionList = &local_c;
  local_ec = this;
  pvVar6 = EvaluationEnvironment_getAction(environment);
  local_10c = 0;
  local_108 = (int *)0x0;
  local_104 = (int *)0x0;
  local_4 = 0;
  (**(code **)(*(int *)card + 0xcc))();
  uVar7 = FUN_01321f20();
  EvaluationEnvironment_ctor();
  local_4 = CONCAT31(local_4._1_3_,1);
  EvaluationEnvironment_copyFrom(auStack_a0,environment,pvVar5);
  cVar3 = (**(code **)(*(int *)this + 0x68))(card,uVar7,&piStack_110,auStack_a0);
  FUN_013815c0(pvVar6);
  if (cVar3 == '\0') {
    uStack_14 = uStack_14 & 0xffffff00;
    FUN_01385460();
    uStack_14 = 0xffffffff;
    if (unaff_ESI != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_ESI);
    }
    bVar4 = false;
  }
  else {
    CommandObjectList_ctor(auStack_e8);
    uStack_14 = CONCAT31(uStack_14._1_3_,2);
    puVar10 = unaff_ESI;
    if (unaff_EBP < unaff_ESI) {
      FUN_00d83c2d();
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x120) {
        FUN_00d83c2d();
      }
      if (puVar10 == unaff_EBP) break;
      if (&stack0x00000000 == (undefined1 *)0x120) {
        FUN_00d83c2d();
      }
      if (unaff_EBP <= puVar10) {
        FUN_00d83c2d();
      }
      (**(code **)(*(int *)*puVar10 + 0x44))(auStack_e8);
      if (unaff_EBP <= puVar10) {
        FUN_00d83c2d();
      }
      puVar10 = puVar10 + 1;
    }
    local_108 = (int *)0x0;
    local_104 = (int *)0x0;
    uStack_100 = 0;
    uStack_14._0_1_ = 3;
    Card_checkModifierPredicate64(local_c,&local_10c,4);
    piStack_110 = local_104;
    if (local_104 < local_108) {
      FUN_00d83c2d();
    }
    piVar9 = local_108;
    if (local_104 < local_108) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x10c) {
        FUN_00d83c2d();
      }
      if (piVar9 == piStack_110) break;
      if (&stack0x00000000 == (undefined1 *)0x10c) {
        FUN_00d83c2d();
      }
      if (local_104 <= piVar9) {
        FUN_00d83c2d();
      }
      if (*piVar9 == 0) {
        FUN_012f5a60("action","..\\common\\common\\game\\Player.cpp",0x160);
      }
      if (local_104 <= piVar9) {
        FUN_00d83c2d();
      }
      piVar9 = piVar9 + 1;
    }
    pvVar5 = EvaluationEnvironment_getGame(puStack_8);
    uVar7 = *(undefined4 *)((int)pvVar5 + 0x20);
    uVar8 = FUN_0138a380(uVar7);
    ArchetypeDB_getInstance();
    piVar9 = (int *)ArchetypeDB_getArchetype(uVar8,uVar7);
    iVar2 = iStack_fc;
    if ((piVar9 != (int *)0x0) &&
       (pvVar5 = PlayArea_findPlayerElementById
                           (*(void **)(iStack_fc + 8),*(int *)(iStack_fc + 0x34)),
       pvVar5 != (void *)0x0)) {
      uVar7 = *(undefined4 *)((int)pvVar5 + 0x38);
      iVar1 = *piVar9;
      pvVar5 = Game_getPlayableActionCollection(*(void **)(iVar2 + 8));
      (**(code **)(iVar1 + 0xdc))(auStack_f8,pvVar5,uVar7);
      uStack_14 = CONCAT31(uStack_14._1_3_,4);
      ActionDB_ensureSingleton();
      piStack_110 = piStack_f0;
      if (piStack_f0 < piStack_f4) {
        FUN_00d83c2d();
      }
      piVar9 = piStack_f4;
      if (piStack_f0 < piStack_f4) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (&stack0x00000000 == (undefined1 *)0xf8) {
          FUN_00d83c2d();
        }
        if (piVar9 == piStack_110) break;
        uVar7 = *(undefined4 *)(*(int *)(iStack_fc + 8) + 0x20);
        if (&stack0x00000000 == (undefined1 *)0xf8) {
          FUN_00d83c2d();
        }
        if (piStack_f0 <= piVar9) {
          FUN_00d83c2d();
        }
        ActionDB_getAction(*piVar9,uVar7);
        if (piStack_f0 <= piVar9) {
          FUN_00d83c2d();
        }
        piVar9 = piVar9 + 1;
      }
      uStack_14._0_1_ = 3;
      if (piStack_f4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(piStack_f4);
      }
      piStack_f4 = (int *)0x0;
      piStack_f0 = (int *)0x0;
      local_ec = (void *)0x0;
    }
    uStack_14 = CONCAT31(uStack_14._1_3_,2);
    if (local_108 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_108);
    }
    local_108 = (int *)0x0;
    local_104 = (int *)0x0;
    uStack_100 = 0;
    uStack_14._0_1_ = 1;
    CommandObjectList_dtor(auStack_e8);
    uStack_14 = (uint)uStack_14._1_3_ << 8;
    FUN_01385460();
    uStack_14 = 0xffffffff;
    if (unaff_ESI != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_ESI);
    }
    bVar4 = true;
  }
  ExceptionList = pvStack_1c;
  return bVar4;
}

