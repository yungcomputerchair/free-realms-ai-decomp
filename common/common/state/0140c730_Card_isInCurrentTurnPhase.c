// addr: 0x0140c730
// name: Card_isInCurrentTurnPhase
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool __fastcall Card_isInCurrentTurnPhase(int *param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  
                    /* Compares the card/play element phase id against the current turn's phase and
                       returns whether they match. Used during game state evaluation. */
  this = (void *)FUN_01340340();
  iVar1 = Game_getActivePlayerIdOrZero(this);
  iVar2 = (**(code **)(*param_1 + 0x28))();
  return iVar2 == iVar1;
}

