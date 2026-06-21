// addr: 0x0147ccb0
// name: AlternateMultiActionState_buttonPressed
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint AlternateMultiActionState_buttonPressed(void * this, int playerId_, int
   buttonId_) */

uint __thiscall AlternateMultiActionState_buttonPressed(void *this,int playerId_,int buttonId_)

{
  void *game;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* Logs AlternateMultiActionState::buttonPressed and returns through the generic
                       logging/error path; this appears to be an unsupported/default button handler.
                        */
  fmt = "AlternateMultiActionState::buttonPressed";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_ESI);
  if (playerId_ == *(int *)((int)this + 0x100)) {
    *(int *)((int)this + 0x150) = buttonId_;
  }
  return 2;
}

