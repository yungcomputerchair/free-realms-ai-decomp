// addr: 0x0139d990
// name: PlayArea_getNodeTargetPlayArea
// subsystem: common/common/game
// source (binary assert): common/common/game/PlayArea.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayArea_getNodeTargetPlayArea(void * this, int targetId_) */

void * __thiscall PlayArea_getNodeTargetPlayArea(void *this,int targetId_)

{
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int iVar1;
  
                    /* Maps node target ids to this play area, cached related play areas, or
                       selected player's play areas; logs when the target id is unknown. */
  switch(targetId_) {
  case 7:
    return *(void **)((int)this + 0x48);
  default:
    Game_logGeneral(*(void **)((int)this + 0x30),"Couldn\'t get node target play area: %d",targetId_
                   );
    return (void *)0x0;
  case 0xb:
    return *(void **)((int)this + 0x4c);
  case 0xc:
    return *(void **)((int)this + 0x50);
  case 0x10:
    Environment_getObjectForIntegerValueOne();
    if (extraout_EAX_00 == 0) {
      FUN_012f5a60("environment->getSelectedPlayer()","..\\common\\common\\game\\PlayArea.cpp",0x1bd
                  );
    }
    break;
  case 0x1a:
    Environment_getObjectForIntegerValueOne();
    if (extraout_EAX == 0) {
      FUN_012f5a60("environment->getSelectedPlayer()","..\\common\\common\\game\\PlayArea.cpp",0x1ba
                  );
    }
    Environment_getObjectForIntegerValueOne();
    iVar1 = PlayElement_getGame();
    return *(void **)(iVar1 + 0x50);
  case 0x5e:
    Environment_getObjectForIntegerValueOne();
    if (extraout_EAX_01 == 0) {
      FUN_012f5a60("environment->getSelectedPlayer()","..\\common\\common\\game\\PlayArea.cpp",0x1c0
                  );
    }
    Environment_getObjectForIntegerValueOne();
    iVar1 = PlayElement_getGame();
    return *(void **)(iVar1 + 0x4c);
  }
  Environment_getObjectForIntegerValueOne();
  iVar1 = PlayElement_getGame();
  return *(void **)(iVar1 + 0x48);
}

