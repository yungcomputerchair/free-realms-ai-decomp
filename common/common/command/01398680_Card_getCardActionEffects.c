// addr: 0x01398680
// name: Card_getCardActionEffects
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Setting prototype: bool Card_getCardActionEffects(void * this, int actionId_, void * outEffects)
    */

bool __thiscall Card_getCardActionEffects(void *this,int actionId_,void *outEffects)

{
  void *this_00;
  int iVar1;
  void *this_01;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int value_;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *extraout_EAX;
  void *pvVar8;
  void *pvVar9;
  char *pcVar10;
  undefined4 *local_2c;
  undefined1 local_28 [16];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Evaluates play-action effects for a card/action in the current phase, setting
                       evaluation-environment origin/action state, invoking rule actions, and
                       returning false on phase mismatch or rule evaluation failure. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01684a50;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar4 = PlayElement_getId(DAT_01b839d8 ^ (uint)&stack0xffffffb8);
  iVar1 = actionId_;
  uVar4 = FUN_01321f20(uVar4);
  uVar4 = PackedActionId_getLow12Bits(uVar4);
  uVar4 = FUN_01321f20(uVar4);
  uVar4 = PackedActionId_getHighBits(uVar4);
  Game_logGeneral(*(void **)((int)this + 0x30),"Card::getCardActionEffects %d (%d), %d",uVar4);
  local_18 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_10 = 0;
  local_4 = 0;
  uVar4 = FUN_01321f20();
  value_ = Card_getOriginCardIdForAction(uVar4);
  iVar5 = PlayElement_getId();
  this_01 = outEffects;
  if (value_ != iVar5) {
    Game_logGeneral(*(void **)((int)this + 0x30),"Got Origin card: %d",value_);
    set_integer_value_for_key(0x38,value_);
  }
  actionId_ = iVar1;
  FUN_0137e030(&actionId_);
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,1);
  outEffects = local_14;
  if (local_14 < local_18) {
    FUN_00d83c2d();
  }
  local_2c = local_18;
  if (local_14 < local_18) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (local_2c == outEffects) {
      local_4 = local_4 & 0xffffff00;
      FUN_01300cd0();
      local_4 = 0xffffffff;
      if (local_18 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return true;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (local_14 <= local_2c) {
      FUN_00d83c2d();
    }
    this_00 = (void *)*local_2c;
    uVar4 = FUN_01322200();
    piVar6 = Game_getCurrentTurn(*(void **)((int)this + 0x30));
    uVar7 = (**(code **)(*piVar6 + 0x3c))();
    cVar2 = RuleMatcher_matchPhaseId(*(undefined4 *)((int)this + 0x30),uVar7,uVar4);
    if (cVar2 == '\0') break;
    RuleSetDB_attachRuleSetFromOwner(this_00);
    if (extraout_EAX == (int *)0x0) {
      Game_logGeneralFormatted(*(undefined4 *)((int)this + 0x30),"no play action found");
    }
    else {
      pvVar8 = EvaluationEnvironment_getAction(this_01);
      pvVar9 = CommandObject_getActionFromEnvironment(this_01);
      EvaluationEnvironment_setActionReturn(this_00);
      FUN_013815c0(2);
      uVar3 = (**(code **)(*extraout_EAX + 0x38))(local_28,this_01);
      actionId_ = CONCAT31(actionId_._1_3_,uVar3);
      FUN_013815d0();
      FUN_013815c0(pvVar8);
      EvaluationEnvironment_setActionReturn(pvVar9);
      if ((char)actionId_ == '\0') {
        uVar4 = *(undefined4 *)((int)this + 0x30);
        pcVar10 = "evaluation of rule for play effect failed.";
LAB_0139889c:
        Game_logGeneralFormatted(uVar4,pcVar10);
        local_4 = local_4 & 0xffffff00;
        FUN_01300cd0();
        local_4 = 0xffffffff;
        if (local_18 == (undefined4 *)0x0) {
          ExceptionList = local_c;
          return false;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_18);
      }
    }
    if (local_14 <= local_2c) {
      FUN_00d83c2d();
    }
    local_2c = local_2c + 1;
  }
  uVar4 = *(undefined4 *)((int)this + 0x30);
  pcVar10 = "game phase incorrect in card.getCardActionEffects";
  goto LAB_0139889c;
}

