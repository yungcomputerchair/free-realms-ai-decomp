// addr: 0x014ddc90
// name: GameCommand_EndGame_execute
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommandEndGame_execute(void * this) */

int __fastcall GameCommand_EndGame_execute(void *this)

{
  int in_EAX;
  
                    /* Executes GameCommandEndGame: after the common GameCommand prologue it calls
                       the Game end-game vfunc when the command flag at +0x24 is false. Address
                       placement is in the GameCommand_EndGame cluster. */
  if (*(int *)((int)this + 8) != 0) {
    in_EAX = GameCommand_execute(this);
    if (*(char *)((int)this + 0x24) == '\0') {
      in_EAX = (**(code **)(**(int **)((int)this + 8) + 0xc))();
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

