// addr: 0x0145ad90
// name: WhileState_leaveState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall WhileState_leaveState(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *fmt;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Logs 'WhileState::leaveState' and performs the state's leave handling,
                       typically popping the pending state when present. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169ca2b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  fmt = "WhileState::leaveState";
  pvVar2 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar2,fmt,uVar1);
  iVar3 = Rules_getDynamicCardReturnCard();
  if (iVar3 == 0) {
    iVar3 = Rules_getIntegerKey15();
    if (iVar3 < 1) {
      iVar3 = Rules_getIntegerKey16();
      if (iVar3 < 1) goto LAB_0145ae9e;
    }
  }
  pvVar2 = Mem_Alloc(0x18);
  uVar5 = 0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar5 = ReturnValueMap_ctor();
  }
  local_4 = 0xffffffff;
  iVar3 = Rules_getDynamicCardReturnCard();
  if (iVar3 != 0) {
    Rules_getDynamicCardReturnCard();
    uVar4 = PlayElement_getId();
    ReturnValueMap_setInteger(0x23,uVar4);
  }
  iVar3 = Rules_getIntegerKey15();
  if (0 < iVar3) {
    uVar4 = Rules_getIntegerKey15();
    ReturnValueMap_setInteger(10,uVar4);
  }
  iVar3 = Rules_getIntegerKey16();
  if (0 < iVar3) {
    uVar4 = Rules_getIntegerKey16();
    ReturnValueMap_setInteger(0x2e,uVar4);
  }
  StateMachine_pushPendingState(uVar5);
LAB_0145ae9e:
  StateMachine_popPendingState(*(void **)(param_1 + 8));
  ExceptionList = local_c;
  return 1;
}

