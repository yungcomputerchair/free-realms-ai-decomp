// addr: 0x01464580
// name: StateMachineState_sendQueuedButtonCommandIfEnabled
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int StateMachineState_sendQueuedButtonCommandIfEnabled(void) */

int StateMachineState_sendQueuedButtonCommandIfEnabled(void)

{
  bool bVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* If the game flag at 0x14d is enabled, allocates a small command object,
                       constructs it, and dispatches it to the game; otherwise returns 2. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169da1b;
  local_c = ExceptionList;
  piVar2 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  pvVar3 = (void *)StateMachineState_getGame();
  bVar1 = Game_getFlag_14d(pvVar3);
  if (bVar1) {
    pvVar3 = Mem_Alloc(0x3c);
    puVar4 = (undefined4 *)0x0;
    local_4 = 0;
    if (pvVar3 != (void *)0x0) {
      puVar4 = (undefined4 *)StateMachineState_getGame();
      puVar4 = GameCommand_SynchPoint_ctor(pvVar3,puVar4,piVar2);
    }
    local_4 = 0xffffffff;
    pvVar3 = (void *)StateMachineState_getGame();
    Game_dispatchCommandToAllPlayers(pvVar3,puVar4);
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = local_c;
  return 2;
}

