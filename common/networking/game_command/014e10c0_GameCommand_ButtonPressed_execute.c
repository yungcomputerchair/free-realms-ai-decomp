// addr: 0x014e10c0
// name: GameCommand_ButtonPressed_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandButtonPressed.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommand_ButtonPressed_execute(void * this) */

int __fastcall GameCommand_ButtonPressed_execute(void *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
                    /* Executes ButtonPressed after validating turn number and current state id,
                       logging mismatches, and only forwarding the button press to the game when
                       validation succeeds. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandButtonPressed.cpp",0x76);
  }
  GameCommand_execute(this);
  iVar7 = *(int *)((int)this + 0x28);
  iVar1 = (**(code **)(**(int **)((int)this + 8) + 0x54))();
  if (iVar1 != iVar7) {
    uVar2 = (**(code **)(**(int **)((int)this + 8) + 0x54))(iVar7);
    iVar3 = GameCommand_getPlayerID(this);
    Game_writeGameLog(*(undefined4 *)((int)this + 8),
                      "# buttonPressed with wrong turnNumber received from player %d: (%d != %d)",
                      iVar3,uVar2);
  }
  pvVar4 = Game_getCurrentTurn(*(void **)((int)this + 8));
  iVar3 = 0;
  if (pvVar4 != (void *)0x0) {
    pvVar4 = Game_getCurrentTurn(*(void **)((int)this + 8));
    pvVar4 = GameTurn_getCurrentStateMachine(pvVar4);
    iVar3 = 0;
    if (pvVar4 != (void *)0x0) {
      pvVar4 = Game_getCurrentTurn(*(void **)((int)this + 8));
      GameTurn_getCurrentStateMachine(pvVar4);
      iVar5 = StateMachine_getCurrentState();
      iVar3 = 0;
      if (iVar5 != 0) {
        pvVar4 = Game_getCurrentTurn(*(void **)((int)this + 8));
        GameTurn_getCurrentStateMachine(pvVar4);
        piVar6 = (int *)StateMachine_getCurrentState();
        iVar3 = (**(code **)(*piVar6 + 0x18))();
        iVar5 = *(int *)((int)this + 0x2c);
        if (iVar3 != iVar5) {
          iVar7 = GameCommand_getPlayerID(this);
          iVar3 = Game_writeGameLog(*(undefined4 *)((int)this + 8),
                                    "# buttonPressed with wrong state received from player %d: (%d != %d)"
                                    ,iVar7,iVar3,iVar5);
          goto LAB_014e119a;
        }
      }
    }
  }
  if (iVar1 == iVar7) {
    iVar7 = (**(code **)(**(int **)((int)this + 8) + 0xe4))
                      (*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 0x24),1);
    return iVar7;
  }
LAB_014e119a:
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

