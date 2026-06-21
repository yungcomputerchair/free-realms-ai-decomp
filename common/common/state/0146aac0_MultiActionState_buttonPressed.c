// addr: 0x0146aac0
// name: MultiActionState_buttonPressed
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int MultiActionState_buttonPressed(void * this, int buttonId_, int value_) */

int __thiscall MultiActionState_buttonPressed(void *this,int buttonId_,int value_)

{
  void *game;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* Logs MultiActionState::buttonPressed; if the button matches field +0x100,
                       stores the value at +0x150 and returns 2, otherwise returns 0. */
  fmt = "MultiActionState::buttonPressed";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_ESI);
  if (buttonId_ == *(int *)((int)this + 0x100)) {
    *(int *)((int)this + 0x150) = value_;
    return 2;
  }
  return 0;
}

