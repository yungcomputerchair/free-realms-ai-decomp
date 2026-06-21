// addr: 0x01493970
// name: QueryContainerNode_getTargetCard
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * QueryContainerNode_getTargetCard(void * this, int targetSlot_, void *
   log) */

void * __thiscall QueryContainerNode_getTargetCard(void *this,int targetSlot_,void *log)

{
  uint inputCode_;
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Resolves target1 or target2 from a QueryContainerNode, validates that the
                       play element is a Card, and otherwise falls back to the environment's enum
                       lookup for other target slots. Evidence is the assert-like text
                       "QueryContainerNode::evaluate()(kTarget1)"/"(kTarget2)" and logs for "pile:
                       target 1" and "pile: target 2". */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a2420;
  local_c = ExceptionList;
  inputCode_ = DAT_01b839d8 ^ (uint)&stack0xffffffac;
  ExceptionList = &local_c;
  if (targetSlot_ == 1) {
    EvaluationEnvironment_tracef(log,"pile: target 1",inputCode_);
    MessageText_ctor();
    local_4 = 0;
    iVar1 = *(int *)((int)this + 0x24);
    if (iVar1 != 0) {
      local_40 = *(undefined4 *)(iVar1 + 4);
      local_3c = *(undefined4 *)(iVar1 + 8);
      MessageText_copyFrom(iVar1 + 0xc);
    }
    iVar1 = MessageText_formatWithValueData(local_28);
    local_4 = local_4 & 0xffffff00;
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    if (*(int *)(iVar1 + 0x14) == 0) {
      pvVar2 = EvaluationEnvironment_getTargetWithEnterState(log);
    }
    else {
      pvVar2 = EvaluationEnvironment_getTargetForInput(log,local_44,inputCode_);
    }
    if (pvVar2 == (void *)0x0) {
      pcVar5 = "No valid target?";
LAB_01493a4e:
      pvVar2 = log;
      EvaluationEnvironment_tracef(log,pcVar5,inputCode_);
      EvaluationEnvironment_traceExitf(log,") => false",pvVar2);
      goto LAB_01493a62;
    }
    pvVar2 = (void *)FUN_00d8d382(pvVar2,0,&PlayElement::RTTI_Type_Descriptor,
                                  &Card::RTTI_Type_Descriptor,0);
    if (pvVar2 != (void *)0x0) {
      local_4 = 0xffffffff;
      MessageText_dtor();
      ExceptionList = local_c;
      return pvVar2;
    }
    uVar3 = PlayElement_getId();
    pcVar5 = "Play element (%d) not a card in  QueryContainerNode::evaluate()(kTarget1)?";
  }
  else {
    if (targetSlot_ != 2) {
      piVar4 = EvaluationEnvironment_getGame(log);
      uVar3 = (**(code **)(*piVar4 + 0x204))(targetSlot_,log);
      pvVar2 = (void *)FUN_00d8d382(uVar3,0,&PlayElement::RTTI_Type_Descriptor,
                                    &Card::RTTI_Type_Descriptor,0);
      ExceptionList = local_c;
      return pvVar2;
    }
    EvaluationEnvironment_tracef(log,"pile: target 2",inputCode_);
    MessageText_ctor();
    local_4 = 2;
    iVar1 = *(int *)((int)this + 0x28);
    if (iVar1 != 0) {
      local_40 = *(undefined4 *)(iVar1 + 4);
      local_3c = *(undefined4 *)(iVar1 + 8);
      MessageText_copyFrom(iVar1 + 0xc);
    }
    iVar1 = MessageText_formatWithValueData(local_28);
    local_4 = CONCAT31((int3)(local_4 >> 8),2);
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    if (*(int *)(iVar1 + 0x14) == 0) {
      pvVar2 = EvaluationEnvironment_getTarget2(log);
    }
    else {
      pvVar2 = EvaluationEnvironment_getTarget2ForInput(log,local_44,inputCode_);
    }
    if (pvVar2 == (void *)0x0) {
      pcVar5 = "No valid second target?";
      goto LAB_01493a4e;
    }
    pvVar2 = (void *)FUN_00d8d382(pvVar2,0,&PlayElement::RTTI_Type_Descriptor,
                                  &Card::RTTI_Type_Descriptor,0);
    if (pvVar2 != (void *)0x0) {
      local_4 = 0xffffffff;
      MessageText_dtor();
      ExceptionList = local_c;
      return pvVar2;
    }
    uVar3 = PlayElement_getId();
    pcVar5 = "Play element (%d) not a card in  QueryContainerNode::evaluate()(kTarget2)?";
  }
  pvVar2 = EvaluationEnvironment_getGame(log);
  Game_logGeneralFormatted(pvVar2,pcVar5,uVar3);
  EvaluationEnvironment_traceExitf(log,") => false",pvVar2);
LAB_01493a62:
  local_4 = 0xffffffff;
  MessageText_dtor();
  ExceptionList = local_c;
  return (void *)0x0;
}

