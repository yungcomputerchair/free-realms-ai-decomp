// addr: 0x013488e0
// name: Game_getNodeTarget
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Game_getNodeTarget(int targetCode_, void * log) */

void * Game_getNodeTarget(int targetCode_,void *log)

{
  undefined4 uVar1;
  int extraout_EAX;
  int extraout_EAX_00;
  int *piVar2;
  int extraout_EAX_01;
  void *pvVar3;
  undefined4 unaff_EDI;
  char *format;
  
                    /* Resolves a rule node target enum into a play element or card, covering
                       origin, target1/2, owner, player piles, opponent piles, dynamic cards, and
                       extended target slots. Evidence is the exact trace "Game::getNodeTarget %d"
                       plus target-specific logs such as "DrawDeckNodeTarget" and
                       "OpponentHandNodeTarget". */
  EvaluationEnvironment_tracef(log,"Game::getNodeTarget %d",targetCode_);
  if (0x420 < targetCode_) {
switchD_01348921_caseD_6:
    EvaluationEnvironment_tracef(log,"Couldn\'t find node target %d",targetCode_);
    goto LAB_013489a7;
  }
  if (targetCode_ == 0x420) {
switchD_01348921_caseD_38:
    pvVar3 = EvaluationEnvironment_getMember14(log);
    if (pvVar3 == (void *)0x0) goto LAB_013489a7;
    pvVar3 = EvaluationEnvironment_getMember14(log);
    pvVar3 = (void *)unknown_getField30(pvVar3);
    goto LAB_01348975;
  }
  switch(targetCode_) {
  case 1:
    pvVar3 = EvaluationEnvironment_getOriginCard(log);
    break;
  case 2:
    pvVar3 = EvaluationEnvironment_getTargetCard(log);
    break;
  case 3:
    pvVar3 = EvaluationEnvironment_getTarget2Card(log);
    break;
  case 4:
    pvVar3 = Rules_getVariable7Card();
    break;
  case 5:
    EvaluationEnvironment_tracef(log,"kOwnerNodeTarget",unaff_EDI);
    pvVar3 = EvaluationEnvironment_getOriginCard(log);
    if (pvVar3 == (void *)0x0) {
      format = "Couldn\'t get parent!";
LAB_0134899e:
      EvaluationEnvironment_tracef(log,format,unaff_EDI);
      goto LAB_013489a7;
    }
    piVar2 = EvaluationEnvironment_getOriginCard(log);
    goto LAB_0134896c;
  default:
    goto switchD_01348921_caseD_6;
  case 7:
    EvaluationEnvironment_tracef(log,"DrawDeckNodeTarget",unaff_EDI);
    pvVar3 = EvaluationEnvironment_getMember14(log);
    if (pvVar3 == (void *)0x0) {
      format = "couldn\'t get player!";
      goto LAB_0134899e;
    }
    EvaluationEnvironment_getMember14(log);
    PlayElement_getGame();
    pvVar3 = (void *)FUN_0139d7a0();
    break;
  case 0xb:
    EvaluationEnvironment_tracef(log,"DiscardPileNodeTarget",unaff_EDI);
    pvVar3 = EvaluationEnvironment_getMember14(log);
    if (pvVar3 == (void *)0x0) {
LAB_01348a27:
      format = "Couldn\'t get player!";
      goto LAB_0134899e;
    }
    EvaluationEnvironment_getMember14(log);
    PlayElement_getGame();
    pvVar3 = (void *)Player_getDiscardPile();
    break;
  case 0xc:
    EvaluationEnvironment_tracef(log,"HandNodeTarget",unaff_EDI);
    pvVar3 = EvaluationEnvironment_getMember14(log);
    if (pvVar3 == (void *)0x0) goto LAB_01348a27;
    EvaluationEnvironment_getMember14(log);
    PlayElement_getGame();
    pvVar3 = (void *)FUN_0139d7c0();
    break;
  case 0x10:
    EvaluationEnvironment_tracef(log,"OpponentDrawDeckNodeTarget",unaff_EDI);
    Environment_getObjectForIntegerValueOne();
    if (extraout_EAX == 0) {
LAB_01348a97:
      format = "Couldn\'t get selectedplayer!";
      goto LAB_0134899e;
    }
    Environment_getObjectForIntegerValueOne();
    PlayElement_getGame();
    pvVar3 = (void *)FUN_0139d7a0();
    break;
  case 0x11:
    EvaluationEnvironment_tracef(log,"targetOwnerNodeTarget",unaff_EDI);
    pvVar3 = EvaluationEnvironment_resolveTarget(log);
    if (pvVar3 == (void *)0x0) {
      format = "Couldn\'t get target";
      goto LAB_0134899e;
    }
    piVar2 = EvaluationEnvironment_resolveTarget(log);
    goto LAB_0134896c;
  case 0x14:
    pvVar3 = (void *)Rules_getDynamicCardReturnCard();
    break;
  case 0x15:
    pvVar3 = Rules_getVariable27Card(log);
    break;
  case 0x1a:
    EvaluationEnvironment_tracef(log,"OpponentHandNodeTarget",unaff_EDI);
    Environment_getObjectForIntegerValueOne();
    if (extraout_EAX_00 == 0) goto LAB_01348a97;
    Environment_getObjectForIntegerValueOne();
    PlayElement_getGame();
    pvVar3 = (void *)FUN_0139d7c0();
    break;
  case 0x37:
    pvVar3 = EvaluationEnvironment_getIntegerAsObject((void *)0x38);
    break;
  case 0x38:
  case 0x3e:
    goto switchD_01348921_caseD_38;
  case 0x3a:
    pvVar3 = EvaluationEnvironment_getIntegerAsObject((void *)0x36);
    break;
  case 0x3b:
    pvVar3 = EvaluationEnvironment_getIntegerAsObject((void *)0x37);
    break;
  case 0x3c:
    pvVar3 = EvaluationEnvironment_getIntegerAsObject((void *)0x39);
    break;
  case 0x3d:
    piVar2 = EvaluationEnvironment_getIntegerAsObject((void *)0x38);
    if (piVar2 == (int *)0x0) goto LAB_013489a7;
LAB_0134896c:
    pvVar3 = (void *)(**(code **)(*piVar2 + 0x30))();
    break;
  case 0x40:
    pvVar3 = EvaluationEnvironment_getIntegerAsObject((void *)0x3a);
    break;
  case 0x5e:
    EvaluationEnvironment_tracef(log,"OpponentDiscardPileNodeTarget",unaff_EDI);
    Environment_getObjectForIntegerValueOne();
    if (extraout_EAX_01 == 0) goto LAB_01348a97;
    Environment_getObjectForIntegerValueOne();
    PlayElement_getGame();
    pvVar3 = (void *)Player_getDiscardPile();
  }
LAB_01348975:
  if (pvVar3 != (void *)0x0) {
    uVar1 = PlayElement_getId();
    EvaluationEnvironment_tracef(log,"found node target: %d",uVar1);
    return pvVar3;
  }
LAB_013489a7:
  EvaluationEnvironment_tracef(log,"node target is null!",unaff_EDI);
  return (void *)0x0;
}

