// addr: 0x013361c0
// name: Game_autoSelectInitialCardForPlayer
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwgame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Game_autoSelectInitialCardForPlayer(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
                    /* When game state equals 2 and the supplied player is the local player 1 or 2,
                       dispatches vtable action 0xd0 and clears a flag, asserting on failure.
                       Evidence: cwgame.cpp assertions and Game_getMyPlayerID/card-selected style
                       call signature. */
  iVar1 = param_2;
  if (param_1[0xfc] == 2) {
    iVar3 = Game_getMyPlayerID(param_1);
    if ((iVar3 == iVar1) && (iVar1 == 1)) {
      param_2 = iVar1;
      piVar4 = IntDefaultMap_getOrInsert(param_1 + 0xfa,&param_2);
      cVar2 = (**(code **)(*param_1 + 0xd0))(1,*piVar4,0,0);
      if (cVar2 == '\0') {
        FUN_012f5a60("false","..\\common\\rules\\game\\cwgame.cpp",0xec0);
      }
      else {
        *(undefined1 *)((int)param_1 + 0x3f6) = 0;
        FUN_004fb6c2();
      }
    }
    if (param_1[0xfc] == 2) {
      iVar3 = Game_getMyPlayerID(param_1);
      if ((iVar3 == iVar1) && (iVar1 == 2)) {
        param_2 = iVar1;
        piVar4 = IntDefaultMap_getOrInsert(param_1 + 0xfa,&param_2);
        cVar2 = (**(code **)(*param_1 + 0xd0))(2,*piVar4,0,0);
        if (cVar2 != '\0') {
          *(undefined1 *)((int)param_1 + 0x3f6) = 0;
          FUN_004fb6c2();
          return;
        }
        FUN_012f5a60("false","..\\common\\rules\\game\\cwgame.cpp",0xecb);
      }
    }
  }
  return;
}

