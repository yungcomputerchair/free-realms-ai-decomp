// addr: 0x013636c0
// name: Game_notifyCurrentStateMachineState
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall Game_notifyCurrentStateMachineState(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_4;
  
                    /* If a current turn state machine exists and accepts the requested
                       state/action, forwards the notification; otherwise falls back through another
                       game helper. This is state-machine dispatch glue. */
  if (((void *)param_1[0x1a] != (void *)0x0) &&
     (pvVar3 = GameTurn_getCurrentStateMachine((void *)param_1[0x1a]), pvVar3 != (void *)0x0)) {
    pvVar3 = GameTurn_getCurrentStateMachine((void *)param_1[0x1a]);
    iVar4 = StateMachine_sub_013f0010(pvVar3);
    if ((char)iVar4 != '\0') {
      pvVar3 = GameTurn_getCurrentStateMachine((void *)param_1[0x1a]);
      StateMachine_sub_013f0050(pvVar3);
      return;
    }
  }
  puVar1 = (undefined4 *)param_1[0xb];
  if (puVar1 < (undefined4 *)param_1[10]) {
    FUN_00d83c2d();
  }
  puVar5 = (undefined4 *)param_1[10];
  if ((undefined4 *)param_1[0xb] < puVar5) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_1 == (int *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (puVar5 == puVar1) break;
    if (param_1 == (int *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)param_1[0xb] <= puVar5) {
      FUN_00d83c2d();
    }
    local_4 = *puVar5;
    cVar2 = (**(code **)(*param_1 + 0x174))(local_4);
    if (cVar2 == '\x01') {
      FUN_01336350(&local_4);
    }
    if ((undefined4 *)param_1[0xb] <= puVar5) {
      FUN_00d83c2d();
    }
    puVar5 = puVar5 + 1;
  }
  return;
}

