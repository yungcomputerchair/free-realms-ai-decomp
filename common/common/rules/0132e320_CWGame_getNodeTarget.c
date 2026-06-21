// addr: 0x0132e320
// name: CWGame_getNodeTarget
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWGame_getNodeTarget(int targetCode_, void * trace) */

void * CWGame_getNodeTarget(int targetCode_,void *trace)

{
  void *pvVar1;
  undefined4 uVar2;
  void *in_ECX;
  undefined4 unaff_EDI;
  
                    /* Resolves a rule node target code to a game object/card, with special cases
                       for active player/start-of-game targets and other hard-coded ids before
                       falling back to a generic target lookup. Logs both requested code and
                       resolved target id. */
  EvaluationEnvironment_tracef(trace,"CWGame::getNodeTarget %d",targetCode_);
  if (targetCode_ < 0x1ae03) {
    if ((targetCode_ == 0x1ae02) || (targetCode_ == 0x3e)) {
      pvVar1 = Game_getCurrentTurn(in_ECX);
      pvVar1 = CWPlayer_dynamicCastFromGamePlayer(pvVar1);
      if (pvVar1 != (void *)0x0) {
        pvVar1 = Game_getCurrentTurn(in_ECX);
        pvVar1 = CWPlayer_dynamicCastFromGamePlayer(pvVar1);
        pvVar1 = (void *)unknown_getField30(pvVar1);
        if (pvVar1 != (void *)0x0) goto LAB_0132e43a;
      }
      EvaluationEnvironment_tracef(trace,"Start of Game Init",unaff_EDI);
      pvVar1 = EvaluationEnvironment_getOriginCard(trace);
      if (pvVar1 == (void *)0x0) goto LAB_0132e3fd;
      EvaluationEnvironment_tracef(trace,"Start of Game Init2",unaff_EDI);
LAB_0132e3c2:
      EvaluationEnvironment_getOriginCard(trace);
      pvVar1 = (void *)FUN_013402b0();
      pvVar1 = (void *)unknown_getField30(pvVar1);
    }
    else if (targetCode_ == 9999) {
      pvVar1 = (void *)FUN_0132e1d0();
    }
    else {
LAB_0132e3e7:
      pvVar1 = Game_getNodeTarget(targetCode_,trace);
    }
  }
  else {
    if (targetCode_ != 0x22335) {
      if (targetCode_ != 0x22336) goto LAB_0132e3e7;
      pvVar1 = EvaluationEnvironment_getOriginCard(trace);
      if (pvVar1 == (void *)0x0) goto LAB_0132e3fd;
      goto LAB_0132e3c2;
    }
    pvVar1 = EvaluationEnvironment_getOriginCard(trace);
    if (pvVar1 == (void *)0x0) goto LAB_0132e3fd;
    EvaluationEnvironment_getOriginCard(trace);
    FUN_013402b0();
    pvVar1 = (void *)EvaluationEnvironment_getSourceCWCard();
  }
  if (pvVar1 != (void *)0x0) {
LAB_0132e43a:
    uVar2 = PlayElement_getId();
    EvaluationEnvironment_tracef(trace,"found node target: %d",uVar2);
    return pvVar1;
  }
LAB_0132e3fd:
  EvaluationEnvironment_tracef(trace,"node target is null!",unaff_EDI);
  return (void *)0x0;
}

