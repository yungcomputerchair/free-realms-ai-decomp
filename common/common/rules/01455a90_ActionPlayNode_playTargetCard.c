// addr: 0x01455a90
// name: ActionPlayNode_playTargetCard
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionPlayNode_playTargetCard(void * log) */

bool ActionPlayNode_playTargetCard(void *log)

{
  void *element;
  void *pvVar1;
  int *element_00;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *this;
  undefined4 uVar7;
  TypeDescriptor *pTVar8;
  TypeDescriptor *pTVar9;
  undefined4 uVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Creates and queues a CommandObjectPlayCard for the current target card,
                       preserving/restoring environment action state and allowing unintroduced
                       opponent-owned cards to be played later. Evidence is the error string "didn't
                       have target in actionplaynode" and construction of CommandObjectPlayCard. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169c0ab;
  local_c = ExceptionList;
  element = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  ExceptionList = &local_c;
  this = (void *)0x0;
  uVar10 = 0;
  pTVar9 = &Card::RTTI_Type_Descriptor;
  pTVar8 = &PlayElement::RTTI_Type_Descriptor;
  uVar7 = 0;
  pvVar1 = EvaluationEnvironment_resolveTarget(log);
  element_00 = (int *)FUN_00d8d382(pvVar1,uVar7,pTVar8,pTVar9,uVar10);
  if (element_00 == (int *)0x0) {
    EvaluationEnvironment_tracef(log,"Error! didn\'t have target in actionplaynode",element);
    ExceptionList = local_c;
    return false;
  }
  if (element_00[0x19] == 0) {
    EvaluationEnvironment_getMember14(log);
    iVar2 = GamePlayer_getPlayerId();
    pvVar1 = EvaluationEnvironment_getGame(log);
    iVar3 = Game_getMyPlayerID(pvVar1);
    if (iVar2 != iVar3) {
      EvaluationEnvironment_tracef
                (log,
                 "Trying to play a card that hasn\'t been introduced yet. assuming it will be later."
                 ,element);
      ExceptionList = local_c;
      return true;
    }
  }
  pvVar1 = EvaluationEnvironment_getOriginCard(log);
  pvVar4 = CommandObject_getActionFromEnvironment(log);
  pvVar5 = EvaluationEnvironment_getAction(log);
  FUN_013815c0(pvVar5);
  set_play_element_id_field(log,element_00);
  pvVar6 = EvaluationEnvironment_resolveTarget2(log);
  EvaluationEnvironment_setCurrentTargetFromElement(log,pvVar6,element);
  uVar7 = (**(code **)(*element_00 + 0xcc))();
  EvaluationEnvironment_setActionReturn(uVar7);
  pvVar6 = Mem_Alloc(0x124);
  uStack_4 = 0;
  if (pvVar6 != (void *)0x0) {
    this = CommandObjectPlayCard_ctor(pvVar6,log);
  }
  uStack_4 = 0xffffffff;
  CommandObjectPlayCard_setStateMachine(this,(void *)0x222eb,element);
  ReturnValueMap_setBooleanKey31(1);
  ReturnValueMap_setBooleanKey11(1);
  ReturnValueMap_setBooleanKey33(1);
  if (pvVar1 != (void *)0x0) {
    uVar7 = PlayElement_getId();
    ReturnValueMap_setIntegerKey35(uVar7);
  }
  EvaluationEnvironment_addCommandObject(log,this,element);
  FUN_013815c0(pvVar5);
  set_play_element_id_field(log,pvVar1);
  EvaluationEnvironment_setCurrentTargetFromElement(log,element_00,element);
  EvaluationEnvironment_setActionReturn(pvVar4);
  ExceptionList = local_c;
  return true;
}

