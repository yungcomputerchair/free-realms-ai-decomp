// addr: 0x0141b910
// name: FUN_0141b910
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_0141b910(int *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *fmt;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Unidentified helper; references strings
                       GetTargetState::forceEndGetTargetState. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01693a8b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  fmt = "GetTargetState::forceEndGetTargetState";
  pvVar2 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar2,fmt,uVar1);
  uVar3 = (**(code **)(*param_1 + 0xbc))();
  FUN_0145c9e0((void *)param_1[1],'\x01');
  pvVar2 = Mem_Alloc(0x18);
  uStack_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ReturnValueMap_ctor();
  }
  uStack_4 = 0xffffffff;
  ReturnValueMap_setInteger(4,uVar3);
  ReturnValueMap_setInteger(param_1[0x4e],0);
  StateMachine_pushPendingState(uVar4);
  StateMachineState_resumePreviousWaitState();
  ExceptionList = local_c;
  return;
}

