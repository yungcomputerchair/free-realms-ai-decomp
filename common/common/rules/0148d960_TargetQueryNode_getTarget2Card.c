// addr: 0x0148d960
// name: TargetQueryNode_getTarget2Card
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TargetQueryNode_getTarget2Card(void * this, void * trace) */

void * __thiscall TargetQueryNode_getTarget2Card(void *this,void *trace)

{
  uint inputCode_;
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_60 [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Resolves target2 for a TargetQueryNode, using explicit query fields when
                       present or the environment fallback otherwise, and verifies the resolved
                       PlayElement is a Card. Logs and asserts if target2 is missing or not a card.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a1b40;
  local_c = ExceptionList;
  inputCode_ = DAT_01b839d8 ^ (uint)&stack0xffffff94;
  ExceptionList = &local_c;
  MessageText_ctor();
  local_4 = 0;
  iVar1 = *(int *)((int)this + 0x28);
  if (iVar1 != 0) {
    local_40 = *(undefined4 *)(iVar1 + 4);
    local_3c = *(undefined4 *)(iVar1 + 8);
    MessageText_copyFrom(iVar1 + 0xc);
  }
  MessageText_ctor();
  local_4._0_1_ = 1;
  iVar1 = *(int *)((int)this + 0x24);
  if (iVar1 != 0) {
    local_5c = *(undefined4 *)(iVar1 + 4);
    local_58 = *(undefined4 *)(iVar1 + 8);
    MessageText_copyFrom(iVar1 + 0xc);
  }
  iVar1 = MessageText_formatWithValueData(local_28);
  local_4._0_1_ = 1;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  if (*(int *)(iVar1 + 0x14) == 0) {
    iVar1 = MessageText_formatWithValueData(local_28);
    local_4._0_1_ = 1;
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    if (*(int *)(iVar1 + 0x14) == 0) {
      pvVar2 = EvaluationEnvironment_getTarget2(trace);
    }
    else {
      pvVar2 = EvaluationEnvironment_getTarget2ForInput(trace,local_60,inputCode_);
    }
  }
  else {
    pvVar2 = EvaluationEnvironment_getTarget2ForInput(trace,local_44,inputCode_);
  }
  if (pvVar2 == (void *)0x0) {
    EvaluationEnvironment_tracef(trace,"don\'t have a target.",inputCode_);
  }
  else {
    pvVar2 = (void *)FUN_00d8d382(pvVar2,0,&PlayElement::RTTI_Type_Descriptor,
                                  &Card::RTTI_Type_Descriptor,0);
    if (pvVar2 != (void *)0x0) {
      local_4 = (uint)local_4._1_3_ << 8;
      MessageText_dtor();
      local_4 = 0xffffffff;
      MessageText_dtor();
      ExceptionList = local_c;
      return pvVar2;
    }
    uVar3 = PlayElement_getId();
    pcVar4 = "Play element (%d) not a card in  TargetQueryNode::evaluate()(kTarget2)?";
    pvVar2 = EvaluationEnvironment_getGame(trace);
    Game_logGeneralFormatted(pvVar2,pcVar4,uVar3);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  MessageText_dtor();
  local_4 = 0xffffffff;
  MessageText_dtor();
  ExceptionList = local_c;
  return (void *)0x0;
}

