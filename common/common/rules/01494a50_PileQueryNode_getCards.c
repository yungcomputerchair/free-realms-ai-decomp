// addr: 0x01494a50
// name: PileQueryNode_getCards
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PileQueryNode_getCards(void * this, void * outCards, void * log) */

void __thiscall PileQueryNode_getCards(void *this,void *outCards,void *log)

{
  void **item;
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  void *pvVar6;
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  void *pvStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar6 = log;
                    /* Builds an output card list for a pile query by switching on the node's pile
                       enum and appending cards from targets, owner, revealed/custom lists,
                       discard/hand/all/forced-active piles, or dynamic environment entries.
                       Evidence is the exact trace "PileQueryNode::getCards" and pile-specific log
                       strings. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a2610;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffcc);
  ExceptionList = &local_c;
  EvaluationEnvironment_tracef(log,"PileQueryNode::getCards",item);
  switch(*(undefined4 *)((int)this + 0x1c)) {
  case 1:
    EvaluationEnvironment_tracef(pvVar6,"pile: This",item);
    pvVar2 = EvaluationEnvironment_getOriginCard(pvVar6);
    if (pvVar2 == (void *)0x0) {
      ExceptionList = local_c;
      return;
    }
    piVar4 = EvaluationEnvironment_getOriginCard(pvVar6);
    break;
  case 2:
    EvaluationEnvironment_tracef(pvVar6,"pile: Target1 (targetwithborne)",item);
    pvVar2 = EvaluationEnvironment_getTargetCard(pvVar6);
    if (pvVar2 == (void *)0x0) {
      ExceptionList = local_c;
      return;
    }
    piVar4 = EvaluationEnvironment_getTargetCard(pvVar6);
    break;
  case 3:
    EvaluationEnvironment_tracef(pvVar6,"pile: Target2 (target2withborne)",item);
    pvVar2 = EvaluationEnvironment_getTarget2Card(pvVar6);
    if (pvVar2 == (void *)0x0) {
      ExceptionList = local_c;
      return;
    }
    piVar4 = EvaluationEnvironment_getTarget2Card(pvVar6);
    break;
  default:
    EvaluationEnvironment_tracef(pvVar6,"pile: unknown %d",*(undefined4 *)((int)this + 0x1c));
    piVar4 = EvaluationEnvironment_getGame(pvVar6);
    piVar4 = (int *)(**(code **)(*piVar4 + 0x200))(*(undefined4 *)((int)this + 0x1c),pvVar6);
    if (piVar4 == (int *)0x0) {
      piVar4 = EvaluationEnvironment_getGame(pvVar6);
      (**(code **)(*piVar4 + 0x8c))(*(undefined4 *)((int)this + 0x1c),outCards,pvVar6);
      ExceptionList = pvStack_18;
      return;
    }
    break;
  case 5:
    EvaluationEnvironment_tracef(pvVar6,"pile: Owner",item);
    pvVar2 = EvaluationEnvironment_getOriginCard(pvVar6);
    if (pvVar2 == (void *)0x0) {
      ExceptionList = local_c;
      return;
    }
    piVar4 = EvaluationEnvironment_getOriginCard(pvVar6);
    uVar3 = (**(code **)(*piVar4 + 0x30))
                      (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
    piVar4 = (int *)FUN_00d8d382(uVar3);
    goto LAB_01494d50;
  case 9:
    EvaluationEnvironment_tracef(pvVar6,"pile: Revealed Cards",item);
    pvVar6 = (void *)FUN_01385f30(local_2c);
    local_4 = 0;
    ValueDataList_assign(outCards,pvVar6);
    local_4 = 0xffffffff;
    STLVector_int_clear(local_2c);
    ExceptionList = local_c;
    return;
  case 0xb:
    EvaluationEnvironment_tracef(pvVar6,"pile: discard pile",item);
    PileQueryNode_addPileCards(this,outCards,pvVar6);
    ExceptionList = local_c;
    return;
  case 0xc:
    EvaluationEnvironment_tracef(pvVar6,"pile: Hand",item);
    PileQueryNode_addPileCards(this,outCards,pvVar6);
    ExceptionList = local_c;
    return;
  case 0x14:
    EvaluationEnvironment_tracef(pvVar6,"pile: DynamicCard",item);
    iVar1 = Rules_getDynamicCardReturnCard();
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return;
    }
    piVar4 = (int *)Rules_getDynamicCardReturnCard();
    break;
  case 0x17:
    EvaluationEnvironment_tracef(pvVar6,"pile: ALL cards",item);
    PileQueryNode_addPileCards(this,outCards,pvVar6);
    ExceptionList = local_c;
    return;
  case 0x18:
    EvaluationEnvironment_tracef(pvVar6,"pile: Forced Active Cards",item);
    piVar4 = EvaluationEnvironment_getGame(pvVar6);
    pcVar5 = *(code **)(*piVar4 + 0x144);
    goto LAB_01494d59;
  case 0x19:
    EvaluationEnvironment_tracef(pvVar6,"pile: CustomCardList",item);
    pvVar6 = (void *)FUN_01385a50(local_1c);
    local_4 = 1;
    ValueDataList_assign(outCards,pvVar6);
    local_4 = 0xffffffff;
    STLVector_int_clear(local_1c);
    ExceptionList = local_c;
    return;
  case 0x3a:
    pvVar6 = (void *)0x36;
    goto LAB_01494d49;
  case 0x3b:
    pvVar6 = (void *)0x37;
LAB_01494d49:
    piVar4 = EvaluationEnvironment_getIntegerAsObject(pvVar6);
LAB_01494d50:
    if (piVar4 == (int *)0x0) {
      ExceptionList = local_c;
      return;
    }
    break;
  case 0x3c:
    log = EvaluationEnvironment_getIntegerAsObject((void *)0x39);
    if (log == (void *)0x0) {
      ExceptionList = local_c;
      return;
    }
    PointerVector_pushBack(outCards,&log,item);
    ExceptionList = local_c;
    return;
  case 0x40:
    log = EvaluationEnvironment_getIntegerAsObject((void *)0x3a);
    if (log == (void *)0x0) {
      ExceptionList = local_c;
      return;
    }
    PointerVector_pushBack(outCards,&log,item);
    ExceptionList = local_c;
    return;
  }
  pcVar5 = *(code **)(*piVar4 + 0x34);
LAB_01494d59:
  (*pcVar5)(outCards);
  ExceptionList = local_c;
  return;
}

