// addr: 0x01412d30
// name: HandleResponseState_buttonPressed
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint HandleResponseState_buttonPressed(void * this, int playerId_, int
   buttonId_) */

uint __thiscall HandleResponseState_buttonPressed(void *this,int playerId_,int buttonId_)

{
  bool bVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 unaff_ESI;
  char *pcVar4;
  
                    /* Handles or ignores button presses for HandleResponseState, logging when the
                       game has ended or an unexpected press arrives. */
  pcVar4 = "Handle Response State:: button Pressed?!";
  pvVar2 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar2,pcVar4,unaff_ESI);
  pvVar2 = (void *)StateMachineState_getGame();
  bVar1 = Game_getPendingFlag_131(pvVar2);
  if (bVar1) {
    pcVar4 = "Handle Response State:: button Pressed in gameEnded state. ignoring.";
    pvVar2 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar2,pcVar4,unaff_ESI);
    return 2;
  }
  if (buttonId_ == 1) {
    uVar3 = (**(code **)(*(int *)this + 0x80))(playerId_);
    return uVar3;
  }
  return 0;
}

