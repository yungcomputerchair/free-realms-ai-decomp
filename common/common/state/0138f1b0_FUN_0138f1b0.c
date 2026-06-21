// addr: 0x0138f1b0
// name: FUN_0138f1b0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall FUN_0138f1b0(void *param_1,void *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char extraout_AL;
  char cVar3;
  uint uVar4;
  int *piVar5;
  void *pvVar6;
  undefined4 uVar7;
  int *extraout_EAX;
  void *pvVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 local_3c;
  undefined1 auStack_28 [4];
  int iStack_24;
  undefined1 local_1c [4];
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Small helper/dispatcher using calls: PlayArea_findPlayerElementById;
                       FUN_013221e0; EvaluationEnvironment_getOriginCard; FUN_013226b0;
                       Game_logGeneral; 00d82463. No class-identifying evidence is present. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01683bb0;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffb4;
  ExceptionList = &local_c;
  uVar7 = *(undefined4 *)((int)param_1 + 0x5c);
  uVar10 = *(undefined4 *)((int)param_1 + 0x60);
  local_3c = 0;
  ArchetypeDB_getInstance();
  piVar5 = (int *)ArchetypeDB_getArchetype(uVar10,uVar7);
  if ((piVar5 == (int *)0x0) ||
     (pvVar6 = PlayArea_findPlayerElementById
                         (*(void **)((int)param_1 + 0x30),*(int *)((int)param_1 + 0x40)),
     pvVar6 == (void *)0x0)) {
    local_3c = 0;
  }
  else {
    iVar1 = *piVar5;
    uVar7 = GamePlayer_getAccountId(uVar4);
    pvVar6 = Game_getPlayableActionCollection(*(void **)((int)param_1 + 0x30));
    (**(code **)(iVar1 + 0xdc))(local_1c,pvVar6,uVar7);
    uStack_4 = 0;
    ActionDB_ensureSingleton();
    puVar2 = puStack_14;
    if (puStack_14 < puStack_18) {
      FUN_00d83c2d();
    }
    puVar9 = puStack_18;
    if (puStack_14 < puStack_18) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (puVar9 == puVar2) break;
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (puStack_14 <= puVar9) {
        FUN_00d83c2d();
      }
      pvVar6 = (void *)ActionDB_getAction(*puVar9,*(undefined4 *)((int)param_1 + 0x5c));
      if (((pvVar6 != (void *)0x0) && (FUN_013226b0(pvVar6), extraout_AL != '\0')) &&
         (RuleSetDB_attachRuleSetFromOwner(pvVar6), extraout_EAX != (int *)0x0)) {
        pvVar6 = EvaluationEnvironment_getOriginCard(param_2);
        pvVar8 = EvaluationEnvironment_getAction(param_2);
        set_play_element_id_field(param_2,param_1);
        FUN_013815c0(1);
        FUN_012fa910();
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        cVar3 = (**(code **)(*extraout_EAX + 0x38))(auStack_28,param_2);
        if (cVar3 == '\0') {
          Game_logGeneralFormatted
                    (*(undefined4 *)((int)param_1 + 0x30),
                     "dynActionCost evaluate failed in Card.getCardPlayCosts");
          FUN_013815d0();
        }
        set_play_element_id_field(param_2,pvVar6);
        FUN_013815d0();
        if (iStack_24 == 2) {
          local_3c = FUN_0123c340();
        }
        FUN_013815c0(pvVar8);
        Game_logGeneral(*(void **)((int)param_1 + 0x30),"got dynGameTextMod = %d",local_3c);
        uStack_4 = uStack_4 & 0xffffff00;
        FUN_01300cd0();
      }
      if (puStack_14 <= puVar9) {
        FUN_00d83c2d();
      }
      puVar9 = puVar9 + 1;
    }
    uStack_4 = 0xffffffff;
    if (puStack_18 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_18);
    }
  }
  ExceptionList = local_c;
  return local_3c;
}

