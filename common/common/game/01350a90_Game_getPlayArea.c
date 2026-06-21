// addr: 0x01350a90
// name: Game_getPlayArea
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall Game_getPlayArea(void *param_1,int param_2,void *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  void *pvVar3;
  undefined4 unaff_EDI;
  
                    /* Resolves a play-area enum to the corresponding target, owner, opponent,
                       dynamic-card, or active-player play area. Logs each case and returns null
                       with a diagnostic if no play area is found. */
  EvaluationEnvironment_tracef(param_3,"Game::getPlayArea %d",param_2);
  if (param_2 < 0x420) {
    if (param_2 == 0x41f) {
      EvaluationEnvironment_tracef(param_3,"OriginObjPlayArea",unaff_EDI);
      pvVar3 = EvaluationEnvironment_getIntegerAsObject((void *)0x38);
    }
    else {
      switch(param_2) {
      case 1:
        EvaluationEnvironment_tracef(param_3,"targetPlayArea",unaff_EDI);
        pvVar3 = EvaluationEnvironment_resolveTarget(param_3);
        break;
      case 2:
        EvaluationEnvironment_tracef(param_3,"target2PlayArea",unaff_EDI);
        pvVar3 = EvaluationEnvironment_resolveTarget2(param_3);
        break;
      default:
        goto switchD_01350ad4_caseD_3;
      case 7:
        EvaluationEnvironment_getMember14(param_3);
        uVar2 = GamePlayer_getPlayerId();
        Game_logGeneral(param_1,"Game::getPlayArea, kDiscardPile: player id: %d",uVar2);
        EvaluationEnvironment_tracef(param_3,"DiscardPile",param_1);
        EvaluationEnvironment_getMember14(param_3);
        PlayElement_getGame();
        Player_getDiscardPile();
      case 6:
        EvaluationEnvironment_tracef(param_3,"DrawDeck",unaff_EDI);
        EvaluationEnvironment_getMember14(param_3);
        PlayElement_getGame();
        pvVar3 = (void *)FUN_0139d7a0();
        break;
      case 0xb:
        EvaluationEnvironment_tracef(param_3,"handpile.",unaff_EDI);
        EvaluationEnvironment_getMember14(param_3);
        PlayElement_getGame();
        pvVar3 = (void *)FUN_0139d7c0();
        break;
      case 0x11:
        EvaluationEnvironment_tracef(param_3,"this.",unaff_EDI);
        pvVar3 = EvaluationEnvironment_getOriginCard(param_3);
        break;
      case 0x19:
        EvaluationEnvironment_tracef(param_3,"owner of this",unaff_EDI);
        piVar1 = EvaluationEnvironment_getOriginCard(param_3);
        goto LAB_01350b1e;
      case 0x1d:
        EvaluationEnvironment_tracef(param_3,"Last Played Card",unaff_EDI);
        pvVar3 = Rules_getVariable7Card();
        break;
      case 0x1e:
        EvaluationEnvironment_tracef(param_3,"Opponent\'s Hand",unaff_EDI);
        Environment_getObjectForIntegerValueOne();
        if (extraout_EAX_01 == 0) {
          FUN_012f5a60("environment->getSelectedPlayer()","..\\common\\common\\game\\Game.cpp",
                       0x1ed0);
        }
        Environment_getObjectForIntegerValueOne();
        PlayElement_getGame();
        pvVar3 = (void *)FUN_0139d7c0();
        break;
      case 0x23:
        EvaluationEnvironment_tracef(param_3,"Opponent\'s DrawDeck",unaff_EDI);
        Environment_getObjectForIntegerValueOne();
        if (extraout_EAX_00 == 0) {
          FUN_012f5a60("environment->getSelectedPlayer()","..\\common\\common\\game\\Game.cpp",
                       0x1ec9);
        }
        Environment_getObjectForIntegerValueOne();
        PlayElement_getGame();
        pvVar3 = (void *)FUN_0139d7a0();
        break;
      case 0x30:
        EvaluationEnvironment_tracef(param_3,"Dynamic Card",unaff_EDI);
        pvVar3 = (void *)Rules_getDynamicCardReturnCard();
        break;
      case 0x37:
        EvaluationEnvironment_tracef(param_3,"Dynamic Card2",unaff_EDI);
        pvVar3 = Rules_getVariable27Card(param_3);
        break;
      case 0x3a:
        Environment_getObjectForIntegerValueOne();
        uVar2 = GamePlayer_getPlayerId();
        Game_logGeneral(param_1,
                        "Game::getPlayArea, kOpponentDiscardPile: selected player player id: %d",
                        uVar2);
        EvaluationEnvironment_tracef(param_3,"Opponent\'s DiscardPile",param_1);
        Environment_getObjectForIntegerValueOne();
        if (extraout_EAX == 0) {
          FUN_012f5a60("environment->getSelectedPlayer()","..\\common\\common\\game\\Game.cpp",
                       0x1ec2);
        }
        Environment_getObjectForIntegerValueOne();
        PlayElement_getGame();
        pvVar3 = (void *)Player_getDiscardPile();
      }
    }
  }
  else {
    switch(param_2) {
    case 0x420:
    case 0x426:
      EvaluationEnvironment_tracef(param_3,"ActivePlayerPlayArea",unaff_EDI);
      pvVar3 = EvaluationEnvironment_getMember14(param_3);
      if (pvVar3 == (void *)0x0) goto LAB_01350ddc;
      pvVar3 = EvaluationEnvironment_getMember14(param_3);
      pvVar3 = (void *)unknown_getField30(pvVar3);
      break;
    default:
switchD_01350ad4_caseD_3:
      EvaluationEnvironment_tracef(param_3,"Couldn\'t find play area %d",param_2);
      goto LAB_01350ddc;
    case 0x422:
      EvaluationEnvironment_tracef(param_3,"Target3PlayArea",unaff_EDI);
      pvVar3 = EvaluationEnvironment_getIntegerAsObject((void *)0x36);
      break;
    case 0x423:
      EvaluationEnvironment_tracef(param_3,"Target3PlayArea",unaff_EDI);
      pvVar3 = EvaluationEnvironment_getIntegerAsObject((void *)0x37);
      break;
    case 0x424:
      EvaluationEnvironment_tracef(param_3,"QueryIteratorPlayArea",unaff_EDI);
      pvVar3 = EvaluationEnvironment_getIntegerAsObject((void *)0x39);
      break;
    case 0x425:
      EvaluationEnvironment_tracef(param_3,"OriginObjBearerPlayArea",unaff_EDI);
      piVar1 = EvaluationEnvironment_getIntegerAsObject((void *)0x38);
      if (piVar1 == (int *)0x0) goto LAB_01350ddc;
LAB_01350b1e:
      pvVar3 = (void *)(**(code **)(*piVar1 + 0x30))();
    }
  }
  if (pvVar3 != (void *)0x0) {
    uVar2 = PlayElement_getId();
    EvaluationEnvironment_tracef(param_3,"found play area: %d",uVar2);
    return pvVar3;
  }
LAB_01350ddc:
  EvaluationEnvironment_tracef(param_3,"play area is null!",unaff_EDI);
  return (void *)0x0;
}

