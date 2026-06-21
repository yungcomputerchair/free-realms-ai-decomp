// addr: 0x01516c40
// name: CWProcessEventEmissionStateForActivePlayer_leaveState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 CWProcessEventEmissionStateForActivePlayer_leaveState(void)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *fmt;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *piStack_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Logs 'CWProcessEventEmissionStateForActivePlayer::leaveState()' and performs
                       the state's leave handling, typically popping the pending state when present.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b7790;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_c;
  fmt = "CWProcessEventEmissionStateForActivePlayer::leaveState()";
  pvVar4 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar4,fmt,uVar3);
  local_28 = (undefined4 *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 1;
  piVar5 = (int *)StateMachineState_getGame();
  (**(code **)(*piVar5 + 0x144))(&local_2c);
  puVar7 = local_2c;
  if (local_28 < local_2c) {
    FUN_00d83c2d();
  }
  while( true ) {
    puVar1 = local_28;
    if (local_28 < local_2c) {
      FUN_00d83c2d();
    }
    if (puVar7 == puVar1) break;
    if (local_28 <= puVar7) {
      FUN_00d83c2d();
    }
    (**(code **)(*(int *)*puVar7 + 0x20c))(0x222f6);
    if (local_28 <= puVar7) {
      FUN_00d83c2d();
    }
    puVar7 = puVar7 + 1;
  }
  pvVar4 = (void *)StateMachineState_getGame();
  pvVar4 = Game_getZoneCollection(pvVar4);
  piVar5 = *(int **)((int)pvVar4 + 8);
  if (piVar5 < *(int **)((int)pvVar4 + 4)) {
    FUN_00d83c2d();
  }
  piVar8 = *(int **)((int)pvVar4 + 4);
  if (*(int **)((int)pvVar4 + 8) < piVar8) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (pvVar4 == (void *)0x0) {
      FUN_00d83c2d();
    }
    piVar6 = local_18;
    if (piVar8 == piVar5) break;
    if (pvVar4 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(int **)((int)pvVar4 + 8) <= piVar8) {
      FUN_00d83c2d();
    }
    if (*piVar8 != 0) {
      PlayElement_getGame();
      piVar6 = (int *)FUN_0139d7c0();
      (**(code **)(*piVar6 + 0x34))(&local_20);
    }
    if (*(int **)((int)pvVar4 + 8) <= piVar8) {
      FUN_00d83c2d();
    }
    piVar8 = piVar8 + 1;
  }
  if (local_18 < piStack_1c) {
    FUN_00d83c2d();
  }
  piVar5 = piStack_1c;
  if (local_18 < piStack_1c) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if (piVar5 == piVar6) break;
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if (local_18 <= piVar5) {
      FUN_00d83c2d();
    }
    if ((int *)*piVar5 != (int *)0x0) {
      (**(code **)(*(int *)*piVar5 + 0x20c))(0x222f6);
    }
    if (local_18 <= piVar5) {
      FUN_00d83c2d();
    }
    piVar5 = piVar5 + 1;
  }
  uVar2 = ProcessEventEmissionState_leaveState();
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  if (piStack_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(piStack_1c);
  }
  piStack_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  puStack_8 = (undefined1 *)0xffffffff;
  if (local_2c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_10;
  return uVar2;
}

