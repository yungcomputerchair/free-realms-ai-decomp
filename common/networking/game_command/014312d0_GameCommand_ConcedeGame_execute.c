// addr: 0x014312d0
// name: GameCommand_ConcedeGame_execute
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommandConcedeGame_execute(void * this) */

int __fastcall GameCommand_ConcedeGame_execute(void *this)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  
                    /* Executes GameCommandConcedeGame by invoking one of two Game vtable actions
                       depending on the command flag at +0x24. Address placement is between the
                       GameCommand_ConcedeGame type-name and its clone/serialize functions. */
  if (*(int *)((int)this + 8) != 0) {
    GameCommand_execute(this);
    if (*(char *)((int)this + 0x24) != '\0') {
      uVar1 = (**(code **)(**(int **)((int)this + 8) + 0x1d8))(*(undefined4 *)((int)this + 4));
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
    in_EAX = (**(code **)(**(int **)((int)this + 8) + 0x1d4))(*(undefined4 *)((int)this + 4));
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

