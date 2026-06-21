// addr: 0x0131cd50
// name: Game_tryProcessPlayerActionDisplay
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char __thiscall Game_tryProcessPlayerActionDisplay(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  
                    /* Attempts to process a player action display depending on the current state,
                       invoking Game_processPlayerActionDisplay or player/agent virtual handlers and
                       updating state flags. */
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 == 0) {
    cVar2 = Game_processPlayerActionDisplay(param_2);
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0x88) = 3;
      return '\x01';
    }
  }
  else {
    if (iVar1 == 1) {
      cVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc0))
                        (*(undefined4 *)(param_1 + 0x10),param_2,0,0);
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x234))
                          (*(undefined4 *)(param_1 + 0x10),param_2);
        if (cVar2 != '\0') {
          *(undefined4 *)(param_1 + 0x50) = 1;
        }
      }
      return cVar2;
    }
    if (iVar1 == 2) {
      cVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0xd0))
                        (*(undefined4 *)(param_1 + 0x10),param_2,0,0);
      if (cVar2 != '\0') {
        *(undefined4 *)(param_1 + 0x50) = 1;
      }
      *(undefined4 *)(param_1 + 0x88) = 1;
      return cVar2;
    }
  }
  return '\0';
}

