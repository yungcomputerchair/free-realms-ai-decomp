// addr: 0x0144db20
// name: CWProcessEventEmissionState_leaveState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWProcessEventEmissionState_leaveState(void * this) */

void __cdecl CWProcessEventEmissionState_leaveState(void *this)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  void *unaff_EBX;
  undefined4 *puVar6;
  int *piVar7;
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
  
                    /* Leave-state handler for CWProcessEventEmissionState; logs, performs
                       event-emission cleanup, and delegates ProcessEventEmissionState leave
                       behavior. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169b0a0;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_c;
  fmt = "CWProcessEventEmissionState::leaveState()";
  pvVar3 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar3,fmt,uVar2);
  local_28 = (undefined4 *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 1;
  piVar4 = (int *)StateMachineState_getGame();
  (**(code **)(*piVar4 + 0x144))(&local_2c);
  puVar6 = local_2c;
  if (local_28 < local_2c) {
    FUN_00d83c2d();
  }
  while( true ) {
    puVar1 = local_28;
    if (local_28 < local_2c) {
      FUN_00d83c2d();
    }
    if (puVar6 == puVar1) break;
    if (local_28 <= puVar6) {
      FUN_00d83c2d();
    }
    (**(code **)(*(int *)*puVar6 + 0x20c))(0x222f6);
    if (local_28 <= puVar6) {
      FUN_00d83c2d();
    }
    puVar6 = puVar6 + 1;
  }
  pvVar3 = (void *)StateMachineState_getGame();
  pvVar3 = Game_getZoneCollection(pvVar3);
  piVar4 = *(int **)((int)pvVar3 + 8);
  if (piVar4 < *(int **)((int)pvVar3 + 4)) {
    FUN_00d83c2d();
  }
  piVar7 = *(int **)((int)pvVar3 + 4);
  if (*(int **)((int)pvVar3 + 8) < piVar7) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (pvVar3 == (void *)0x0) {
      FUN_00d83c2d();
    }
    piVar5 = local_18;
    if (piVar7 == piVar4) break;
    if (pvVar3 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(int **)((int)pvVar3 + 8) <= piVar7) {
      FUN_00d83c2d();
    }
    if (*piVar7 != 0) {
      PlayElement_getGame();
      piVar5 = (int *)FUN_0139d7c0();
      (**(code **)(*piVar5 + 0x34))(&local_20);
    }
    if (*(int **)((int)pvVar3 + 8) <= piVar7) {
      FUN_00d83c2d();
    }
    piVar7 = piVar7 + 1;
  }
  if (local_18 < piStack_1c) {
    FUN_00d83c2d();
  }
  piVar4 = piStack_1c;
  if (local_18 < piStack_1c) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if (piVar4 == piVar5) break;
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if (local_18 <= piVar4) {
      FUN_00d83c2d();
    }
    if ((int *)*piVar4 != (int *)0x0) {
      (**(code **)(*(int *)*piVar4 + 0x20c))(0x222f6);
    }
    if (local_18 <= piVar4) {
      FUN_00d83c2d();
    }
    piVar4 = piVar4 + 1;
  }
  ProcessEventEmissionState_leaveState(unaff_EBX);
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
  return;
}

