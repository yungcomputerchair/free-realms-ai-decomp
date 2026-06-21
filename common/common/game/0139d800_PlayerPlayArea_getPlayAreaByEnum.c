// addr: 0x0139d800
// name: PlayerPlayArea_getPlayAreaByEnum
// subsystem: common/common/game
// source (binary assert): common/common/game/PlayArea.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall PlayerPlayArea_getPlayAreaByEnum(int param_1,undefined4 param_2)

{
  int extraout_EAX;
  int extraout_EAX_00;
  undefined4 uVar1;
  void *pvVar2;
  int extraout_EAX_01;
  int iVar3;
  undefined4 unaff_ESI;
  char *pcVar4;
  
                    /* Returns this player play area's draw, discard, hand, or opponent piles for a
                       play-area enum. It logs unhandled enums and asserts selected player for
                       opponent lookups. */
  switch(param_2) {
  case 6:
    return *(undefined4 *)(param_1 + 0x48);
  case 7:
    pcVar4 = "PlayerPlayArea::getPlayAreaByEnum - kDiscardPile.";
    pvVar2 = (void *)FUN_01340340();
    Game_logGeneral(pvVar2,pcVar4,unaff_ESI);
    return *(undefined4 *)(param_1 + 0x4c);
  default:
    Game_logGeneral(*(void **)(param_1 + 0x30),
                    "Unhandled ePlayArea in  PlayPlayArea::getPlayAreaByEnum(%d)",param_2);
    return 0;
  case 0xb:
    return *(undefined4 *)(param_1 + 0x50);
  case 0x1e:
    Environment_getObjectForIntegerValueOne();
    if (extraout_EAX == 0) {
      FUN_012f5a60("environment->getSelectedPlayer()","..\\common\\common\\game\\PlayArea.cpp",0x175
                  );
    }
    break;
  case 0x23:
    Environment_getObjectForIntegerValueOne();
    if (extraout_EAX_00 == 0) {
      FUN_012f5a60("environment->getSelectedPlayer()","..\\common\\common\\game\\PlayArea.cpp",0x178
                  );
    }
    Environment_getObjectForIntegerValueOne();
    iVar3 = PlayElement_getGame();
    return *(undefined4 *)(iVar3 + 0x48);
  case 0x3a:
    Environment_getObjectForIntegerValueOne();
    uVar1 = GamePlayer_getPlayerId();
    pcVar4 = 
    "PlayerPlayArea::getPlayAreaByEnum - getting Opponent Discard Pile for selected player: %d";
    pvVar2 = (void *)FUN_01340340();
    Game_logGeneral(pvVar2,pcVar4,uVar1);
    Environment_getObjectForIntegerValueOne();
    if (extraout_EAX_01 == 0) {
      FUN_012f5a60("environment->getSelectedPlayer()","..\\common\\common\\game\\PlayArea.cpp",0x17c
                  );
    }
    Environment_getObjectForIntegerValueOne();
    iVar3 = PlayElement_getGame();
    return *(undefined4 *)(iVar3 + 0x4c);
  }
  Environment_getObjectForIntegerValueOne();
  iVar3 = PlayElement_getGame();
  return *(undefined4 *)(iVar3 + 0x50);
}

