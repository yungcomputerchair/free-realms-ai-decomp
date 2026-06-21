// addr: 0x01488460
// name: ValueNode_getNodeTarget
// subsystem: common/common/node
// source (binary assert): common/common/node/ValueNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall ValueNode_getNodeTarget(int *param_1,void *param_2)

{
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int *piVar1;
  int iVar2;
  undefined4 unaff_EDI;
  
                    /* Resolves the ValueNode node-target selector to target1/target2, origin/owner,
                       draw/discard/hand piles, dynamic cards, opponent piles, or game lookups. */
  switch(param_1[8]) {
  case 1:
    EvaluationEnvironment_tracef(param_2,"getting property from target",unaff_EDI);
    EvaluationEnvironment_resolveTarget(param_2);
    return;
  case 2:
    EvaluationEnvironment_tracef(param_2,"getting property from target2",unaff_EDI);
    EvaluationEnvironment_resolveTarget2(param_2);
    return;
  default:
    EvaluationEnvironment_tracef(param_2,"getting NodeTarget %d",param_1[10]);
    piVar1 = EvaluationEnvironment_getGame(param_2);
    iVar2 = (**(code **)(*piVar1 + 0x204))(param_1[8],param_2);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x58))(param_1[10],param_2);
    }
    return;
  case 6:
    goto switchD_0148847e_caseD_6;
  case 7:
    EvaluationEnvironment_tracef(param_2,"DiscardPile",unaff_EDI);
    EvaluationEnvironment_getMember14(param_2);
    PlayElement_getGame();
    Player_getDiscardPile();
switchD_0148847e_caseD_6:
    EvaluationEnvironment_tracef(param_2,"DrawDeck",unaff_EDI);
    EvaluationEnvironment_getMember14(param_2);
    PlayElement_getGame();
    FUN_0139d7a0();
    return;
  case 0xb:
    EvaluationEnvironment_tracef(param_2,"Getting property from handpile.",unaff_EDI);
    EvaluationEnvironment_getMember14(param_2);
    PlayElement_getGame();
    FUN_0139d7c0();
    return;
  case 0x11:
    EvaluationEnvironment_tracef(param_2,"getting property from this.",unaff_EDI);
    EvaluationEnvironment_getOriginCard(param_2);
    return;
  case 0x19:
    EvaluationEnvironment_tracef(param_2,"getting property from owner of this",unaff_EDI);
    piVar1 = EvaluationEnvironment_getOriginCard(param_2);
    (**(code **)(*piVar1 + 0x30))();
    return;
  case 0x1d:
    EvaluationEnvironment_tracef(param_2,"Last Played Card",unaff_EDI);
    Rules_getVariable7Card();
    return;
  case 0x1e:
    EvaluationEnvironment_tracef(param_2,"Opponent\'s Hand",unaff_EDI);
    Environment_getObjectForIntegerValueOne();
    if (extraout_EAX_01 == 0) {
      FUN_012f5a60("environment->getSelectedPlayer()","..\\common\\common\\node\\ValueNode.cpp",0xa6
                  );
    }
    Environment_getObjectForIntegerValueOne();
    PlayElement_getGame();
    FUN_0139d7c0();
    return;
  case 0x23:
    EvaluationEnvironment_tracef(param_2,"Opponent\'s DrawDeck",unaff_EDI);
    Environment_getObjectForIntegerValueOne();
    if (extraout_EAX_00 == 0) {
      FUN_012f5a60("environment->getSelectedPlayer()","..\\common\\common\\node\\ValueNode.cpp",0x9f
                  );
    }
    Environment_getObjectForIntegerValueOne();
    PlayElement_getGame();
    FUN_0139d7a0();
    return;
  case 0x30:
    EvaluationEnvironment_tracef(param_2,"Dynamic Card",unaff_EDI);
    Rules_getDynamicCardReturnCard();
    return;
  case 0x37:
    EvaluationEnvironment_tracef(param_2,"Dynamic Card2",unaff_EDI);
    Rules_getVariable27Card(param_2);
    return;
  case 0x3a:
    EvaluationEnvironment_tracef(param_2,"Opponent\'s DiscardPile",unaff_EDI);
    Environment_getObjectForIntegerValueOne();
    if (extraout_EAX == 0) {
      FUN_012f5a60("environment->getSelectedPlayer()","..\\common\\common\\node\\ValueNode.cpp",0x98
                  );
    }
    Environment_getObjectForIntegerValueOne();
    PlayElement_getGame();
    Player_getDiscardPile();
    return;
  }
}

