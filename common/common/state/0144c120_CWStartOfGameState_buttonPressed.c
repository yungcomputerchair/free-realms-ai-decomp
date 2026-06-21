// addr: 0x0144c120
// name: CWStartOfGameState_buttonPressed
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int CWStartOfGameState_buttonPressed(int buttonId_, int value_) */

int CWStartOfGameState_buttonPressed(int buttonId_,int value_)

{
  void *pvVar1;
  undefined4 unaff_ESI;
  char *pcVar2;
  
                    /* Logs CWStartOfGameState::buttonPressed and Got button pressed not during
                       mulligan, then returns 0. */
  pcVar2 = "CWStartOfGameState::buttonPressed %d, %d";
  pvVar1 = (void *)StateMachineState_getGame
                             ("CWStartOfGameState::buttonPressed %d, %d",buttonId_,value_);
  Game_logGeneral(pvVar1,pcVar2,buttonId_);
  pcVar2 = "Got button pressed not during mulligan.";
  pvVar1 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar1,pcVar2,unaff_ESI);
  return 0;
}

