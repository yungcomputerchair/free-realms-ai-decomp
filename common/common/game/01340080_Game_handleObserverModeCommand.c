// addr: 0x01340080
// name: Game_handleObserverModeCommand
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Game_handleObserverModeCommand(void * game, void * command) */

int __thiscall Game_handleObserverModeCommand(void *this,void *game,void *command)

{
  void *vector_owner;
  uint uVar1;
  int iVar2;
  void **ppvVar3;
  
                    /* Filters or queues a command based on Game_getObserverModeState and the
                       command opcode; disallowed commands are destroyed, while allowed
                       observer-mode commands are inserted into a pending list. */
  uVar1 = Game_getObserverModeState(this);
  vector_owner = command;
  switch(uVar1) {
  case 0:
    return CONCAT31((int3)(uVar1 >> 8),1);
  case 1:
    uVar1 = FUN_012f8c60();
    if ((uVar1 != 7) && (uVar1 != 0xf)) {
switchD_013400dd_caseD_15:
      if (vector_owner != (void *)0x0) {
        StdVector_destroyPolymorphicTriples(vector_owner);
                    /* WARNING: Subroutine does not return */
        _free(vector_owner);
      }
      goto switchD_01340092_default;
    }
    break;
  case 2:
    iVar2 = FUN_012f8c60();
    uVar1 = iVar2 - 3;
    switch(iVar2) {
    case 3:
    case 4:
    case 5:
    case 6:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x20:
    case 0x5e:
    case 0x60:
    case 0x7b:
    case 0x7e:
    case 0xba:
      break;
    case 7:
    case 0xf:
      ppvVar3 = &command;
      FUN_0133ff80(&game);
      uVar1 = FUN_012d2f40(ppvVar3);
      return uVar1 & 0xffffff00;
    default:
      goto switchD_013400dd_caseD_15;
    }
    break;
  case 3:
    break;
  default:
    goto switchD_01340092_default;
  }
  ppvVar3 = &command;
  FUN_0133ff80(&game);
  uVar1 = FUN_012d2f40(ppvVar3);
switchD_01340092_default:
  return uVar1 & 0xffffff00;
}

