// addr: 0x0147ccf0
// name: AlternateMultiActionState_buttonPressedWithString
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint AlternateMultiActionState_buttonPressedWithString(void * this, int
   playerId_, int buttonId_, void * text) */

uint __thiscall
AlternateMultiActionState_buttonPressedWithString(void *this,int playerId_,int buttonId_,void *text)

{
  void *game;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* Logs AlternateMultiActionState::buttonPressedWithString and returns through
                       the generic logging/error path; this appears to be an unsupported/default
                       button-with-text handler. */
  fmt = "AlternateMultiActionState::buttonPressedWithString";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_ESI);
  if (playerId_ == *(int *)((int)this + 0x100)) {
    *(int *)((int)this + 0x150) = buttonId_;
  }
  return 2;
}

