// addr: 0x014548e0
// name: ZPMacroNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ZPMacroNode_evaluate(void * this, void * trace) */

bool __thiscall ZPMacroNode_evaluate(void *this,void *trace)

{
  bool bVar1;
  void *pvVar2;
  char *formatText;
  int elementId_;
  void *unaff_EDI;
  void *in_stack_00000008;
  undefined4 uVar3;
  TypeDescriptor *pTVar4;
  TypeDescriptor *pTVar5;
  undefined4 uVar6;
  
                    /* Evaluates a ZPMacroNode, first resolving/logging a query iterator target,
                       then delegating to the macro body evaluator and appending true/false trace
                       text. The function returns the delegated result. */
  EvaluationEnvironment_traceEnterf(in_stack_00000008,"(ZPMacroNode",unaff_EDI);
  FUN_01383460(0x39);
  uVar6 = 0;
  pTVar5 = &Card::RTTI_Type_Descriptor;
  pTVar4 = &PlayElement::RTTI_Type_Descriptor;
  uVar3 = 0;
  pvVar2 = EvaluationEnvironment_getGame(in_stack_00000008);
  pvVar2 = find_play_element_in_maps(pvVar2,elementId_);
  formatText = (char *)FUN_00d8d382(pvVar2,uVar3,pTVar4,pTVar5,uVar6);
  EvaluationEnvironment_logCardMessage(in_stack_00000008,"found queryIter: ",formatText,unaff_EDI);
  bVar1 = MacroNode_evaluate(this,trace,in_stack_00000008);
  if (!bVar1) {
    EvaluationEnvironment_traceExitf(in_stack_00000008,") => false",unaff_EDI);
    return false;
  }
  EvaluationEnvironment_traceExitf(in_stack_00000008,") => true",unaff_EDI);
  return true;
}

