// addr: 0x0148e360
// name: SumExpression_getCardList
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SumExpression_getCardList(void * this, void * outCards, void * log) */

void __thiscall SumExpression_getCardList(void *this,void *outCards,void *log)

{
  void **item;
  void *pvVar1;
  void *pvVar2;
  int *piVar3;
  code *pcVar4;
  char *pcVar5;
  undefined1 local_2c [16];
  undefined1 local_1c [12];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar2 = log;
                    /* Collects the card list used by a SumExpression from the configured play area,
                       including target cards, dynamic cards, active/all cards, player piles, query
                       iterator, target3/4, and custom/revealed lists. Evidence is the exact trace
                       "SumExpression::getCardList" and pile-specific log strings. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a1cd0;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffcc);
  ExceptionList = &local_c;
  EvaluationEnvironment_tracef(log,"SumExpression::getCardList",item);
  switch(*(undefined4 *)((int)this + 0x24)) {
  case 0:
    pcVar5 = "invalid play area";
    goto LAB_0148e3b8;
  case 1:
    EvaluationEnvironment_tracef(pvVar2,"this",item);
    pvVar1 = EvaluationEnvironment_getOriginCard(pvVar2);
    if (pvVar1 == (void *)0x0) {
      ExceptionList = local_c;
      return;
    }
    piVar3 = EvaluationEnvironment_getOriginCard(pvVar2);
    (**(code **)(*piVar3 + 0x34))(outCards);
    ExceptionList = pvStack_10;
    return;
  case 2:
    EvaluationEnvironment_tracef(pvVar2,"Sum node targeting pile: Target1",item);
    pvVar2 = EvaluationEnvironment_resolveTarget(pvVar2);
    piVar3 = (int *)FUN_00d8d382(pvVar2,0,&PlayElement::RTTI_Type_Descriptor,
                                 &Card::RTTI_Type_Descriptor,0);
    break;
  case 3:
    EvaluationEnvironment_tracef(pvVar2,"Sum node targeting pile: Target2",item);
    pvVar2 = EvaluationEnvironment_resolveTarget2(pvVar2);
    piVar3 = (int *)FUN_00d8d382(pvVar2,0,&PlayElement::RTTI_Type_Descriptor,
                                 &Card::RTTI_Type_Descriptor,0);
    if (piVar3 == (int *)0x0) {
      ExceptionList = local_c;
      return;
    }
    pcVar4 = *(code **)(*piVar3 + 0x34);
    goto LAB_0148e3d0;
  case 4:
    EvaluationEnvironment_tracef(pvVar2,"Sum node targeting pile: LastPlayedCard",item);
    piVar3 = Rules_getVariable7Card();
    break;
  default:
    EvaluationEnvironment_tracef(pvVar2,"getByEnum %d",*(undefined4 *)((int)this + 0x24));
    piVar3 = EvaluationEnvironment_getGame(pvVar2);
    (**(code **)(*piVar3 + 0x8c))(*(undefined4 *)((int)this + 0x24),outCards,pvVar2);
    ExceptionList = local_c;
    return;
  case 7:
    EvaluationEnvironment_tracef(pvVar2,"DrawDeck",item);
    pvVar1 = EvaluationEnvironment_getMember14(pvVar2);
    if (pvVar1 == (void *)0x0) {
      ExceptionList = local_c;
      return;
    }
    EvaluationEnvironment_getMember14(pvVar2);
    PlayElement_getGame();
    piVar3 = (int *)FUN_0139d7a0();
    pcVar4 = *(code **)(*piVar3 + 0x34);
    goto LAB_0148e3d0;
  case 9:
    EvaluationEnvironment_tracef(pvVar2,"reveal",item);
    pvVar2 = (void *)FUN_01385f30(local_2c);
    local_4 = 0;
    ValueDataList_assign(outCards,pvVar2);
    local_4 = 0xffffffff;
    STLVector_int_clear(local_2c);
    ExceptionList = local_c;
    return;
  case 0xb:
    pcVar5 = "DiscardPile";
    goto LAB_0148e5e4;
  case 0xc:
    pcVar5 = "HandPile";
LAB_0148e5e4:
    EvaluationEnvironment_tracef(pvVar2,pcVar5,item);
    pvVar1 = EvaluationEnvironment_getMember14(pvVar2);
    if (pvVar1 == (void *)0x0) {
      ExceptionList = local_c;
      return;
    }
    EvaluationEnvironment_getMember14(pvVar2);
    PlayElement_getGame();
    piVar3 = (int *)Player_getDiscardPile();
    pcVar4 = *(code **)(*piVar3 + 0x34);
    goto LAB_0148e3d0;
  case 0x14:
    EvaluationEnvironment_tracef(pvVar2,"Sum node targeting pile: Dynamiccard",item);
    piVar3 = (int *)Rules_getDynamicCardReturnCard();
    break;
  case 0x15:
    EvaluationEnvironment_tracef(pvVar2,"Sum node targeting pile: Dynamiccard2",item);
    piVar3 = Rules_getVariable27Card(pvVar2);
    break;
  case 0x17:
    EvaluationEnvironment_tracef(pvVar2,"allcards",item);
    piVar3 = EvaluationEnvironment_getGame(pvVar2);
    pcVar4 = *(code **)(*piVar3 + 0x14c);
    goto LAB_0148e3d0;
  case 0x18:
    pcVar5 = "activecards";
LAB_0148e3b8:
    EvaluationEnvironment_tracef(pvVar2,pcVar5,item);
    piVar3 = EvaluationEnvironment_getGame(pvVar2);
    pcVar4 = *(code **)(*piVar3 + 0x144);
    goto LAB_0148e3d0;
  case 0x19:
    EvaluationEnvironment_tracef(pvVar2,"customcardlist",item);
    pvVar2 = (void *)FUN_01385a50(local_1c);
    local_4 = 1;
    ValueDataList_assign(outCards,pvVar2);
    local_4 = 0xffffffff;
    STLVector_int_clear(local_1c);
    ExceptionList = local_c;
    return;
  case 0x37:
    EvaluationEnvironment_tracef(pvVar2,"Origin Obj",item);
    piVar3 = EvaluationEnvironment_getIntegerAsObject((void *)0x38);
    break;
  case 0x3a:
    EvaluationEnvironment_tracef(pvVar2,"Target3",item);
    piVar3 = EvaluationEnvironment_getIntegerAsObject((void *)0x36);
    break;
  case 0x3b:
    EvaluationEnvironment_tracef(pvVar2,"Target4",item);
    piVar3 = EvaluationEnvironment_getIntegerAsObject((void *)0x37);
    break;
  case 0x3c:
    EvaluationEnvironment_tracef(pvVar2,"QueryIterator",item);
    piVar3 = EvaluationEnvironment_getIntegerAsObject((void *)0x39);
    break;
  case 0x3e:
    EvaluationEnvironment_tracef(pvVar2,"ActivePlayer",item);
    pvVar1 = EvaluationEnvironment_getMember14(pvVar2);
    if (pvVar1 == (void *)0x0) {
      ExceptionList = local_c;
      return;
    }
    pvVar2 = EvaluationEnvironment_getMember14(pvVar2);
    log = (void *)unknown_getField30(pvVar2);
    PointerVector_pushBack(outCards,&log,item);
    ExceptionList = local_c;
    return;
  }
  if (piVar3 == (int *)0x0) {
    ExceptionList = local_c;
    return;
  }
  pcVar4 = *(code **)(*piVar3 + 0x34);
LAB_0148e3d0:
  (*pcVar4)(outCards);
  ExceptionList = pvStack_10;
  return;
}

