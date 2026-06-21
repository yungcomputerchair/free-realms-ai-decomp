// addr: 0x01423540
// name: MacroNode_getTarget
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MacroNode_getTarget(int targetCode_, void * log) */

void * MacroNode_getTarget(int targetCode_,void *log)

{
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  int elementId_;
  void *pvVar4;
  TypeDescriptor *pTVar5;
  TypeDescriptor *pTVar6;
  undefined4 uVar7;
  
                    /* Maps a MacroNode target code to the corresponding card/play element from the
                       evaluation environment, including origin, target1/2, dynamic cards,
                       target3/4, query iterator, and owner relationships. Evidence is the exact log
                       "MacroNode getTarget %d" and error "MacroNode::getTarget couldn't get target:
                       %d". */
  EvaluationEnvironment_tracef(log,"MacroNode getTarget %d",targetCode_);
  pvVar4 = (void *)0x0;
  switch(targetCode_) {
  case 1:
    pvVar4 = EvaluationEnvironment_getOriginCard(log);
    return pvVar4;
  case 2:
    uVar7 = 0;
    pTVar6 = &Card::RTTI_Type_Descriptor;
    pTVar5 = &PlayElement::RTTI_Type_Descriptor;
    uVar3 = 0;
    pvVar4 = EvaluationEnvironment_resolveTarget(log);
    pvVar4 = (void *)FUN_00d8d382(pvVar4,uVar3,pTVar5,pTVar6,uVar7);
    return pvVar4;
  case 3:
    uVar7 = 0;
    pTVar6 = &Card::RTTI_Type_Descriptor;
    pTVar5 = &PlayElement::RTTI_Type_Descriptor;
    uVar3 = 0;
    pvVar4 = EvaluationEnvironment_resolveTarget2(log);
    pvVar4 = (void *)FUN_00d8d382(pvVar4,uVar3,pTVar5,pTVar6,uVar7);
    return pvVar4;
  case 4:
    pvVar4 = Rules_getVariable7Card();
    return pvVar4;
  default:
    piVar2 = EvaluationEnvironment_getGame(log);
    uVar3 = (**(code **)(*piVar2 + 0x200))
                      (targetCode_,log,0,&PlayElement::RTTI_Type_Descriptor,
                       &Card::RTTI_Type_Descriptor,0);
    pvVar4 = (void *)FUN_00d8d382(uVar3);
    if (pvVar4 == (void *)0x0) {
      EvaluationEnvironment_tracef(log,"MacroNode::getTarget couldn\'t get target: %d",targetCode_);
    }
    break;
  case 0x11:
    pvVar1 = EvaluationEnvironment_resolveTarget(log);
    if (pvVar1 != (void *)0x0) {
      piVar2 = EvaluationEnvironment_resolveTarget(log);
LAB_014235f6:
      uVar3 = (**(code **)(*piVar2 + 0x30))
                        (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
      pvVar4 = (void *)FUN_00d8d382(uVar3);
      return pvVar4;
    }
    break;
  case 0x14:
    pvVar4 = (void *)Rules_getDynamicCardReturnCard();
    return pvVar4;
  case 0x15:
    pvVar4 = Rules_getVariable27Card(log);
    return pvVar4;
  case 0x37:
    pvVar4 = EvaluationEnvironment_getIntegerAsObject((void *)0x38);
    return pvVar4;
  case 0x38:
  case 0x3e:
    pvVar1 = EvaluationEnvironment_getMember14(log);
    if (pvVar1 != (void *)0x0) {
      pvVar4 = EvaluationEnvironment_getMember14(log);
      pvVar4 = (void *)unknown_getField30(pvVar4);
      return pvVar4;
    }
    break;
  case 0x3a:
    pvVar4 = EvaluationEnvironment_getIntegerAsObject((void *)0x36);
    return pvVar4;
  case 0x3b:
    pvVar4 = EvaluationEnvironment_getIntegerAsObject((void *)0x37);
    return pvVar4;
  case 0x3c:
    uVar3 = 0x39;
    goto LAB_01423662;
  case 0x3d:
    piVar2 = EvaluationEnvironment_getIntegerAsObject((void *)0x38);
    if (piVar2 != (int *)0x0) goto LAB_014235f6;
    break;
  case 0x40:
    uVar3 = 0x3a;
LAB_01423662:
    FUN_01383460(uVar3);
    uVar7 = 0;
    pTVar6 = &Card::RTTI_Type_Descriptor;
    pTVar5 = &PlayElement::RTTI_Type_Descriptor;
    uVar3 = 0;
    pvVar4 = EvaluationEnvironment_getGame(log);
    pvVar4 = find_play_element_in_maps(pvVar4,elementId_);
    pvVar4 = (void *)FUN_00d8d382(pvVar4,uVar3,pTVar5,pTVar6,uVar7);
    return pvVar4;
  }
  return pvVar4;
}

