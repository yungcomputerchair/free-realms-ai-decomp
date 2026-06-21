// addr: 0x01476b60
// name: FUN_01476b60
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_01476b60(int param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Performs state-machine leave/reset work and pops the pending state, but no
                       concrete state name is visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f956;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  cVar1 = Rules_getBooleanKey23DefaultFalse();
  if (cVar1 == '\0') {
    iVar4 = Rules_getIntegerKey16();
    if (iVar4 == 0) goto LAB_01476c41;
  }
  pvVar5 = Mem_Alloc(0x18);
  local_4 = 0;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = ReturnValueMap_ctor();
  }
  local_4 = 0xffffffff;
  cVar1 = Rules_getBooleanKey23DefaultFalse();
  if (cVar1 != '\0') {
    set_value_boolean(0x20,true);
  }
  iVar4 = Rules_getIntegerKey16();
  if (0 < iVar4) {
    uVar7 = Rules_getIntegerKey16();
    ReturnValueMap_setInteger(0x2e,uVar7);
  }
  iVar4 = Rules_getIntegerKey1B();
  if (0 < iVar4) {
    uVar7 = Rules_getIntegerKey1B();
    ReturnValueMap_setInteger(0x2f,uVar7);
  }
  StateMachine_pushPendingState(uVar6);
LAB_01476c41:
  pvVar5 = (void *)StateMachineState_getGame();
  bVar2 = Game_getFlag_14d(pvVar5);
  if (bVar2) {
    pvVar5 = Mem_Alloc(0x2c);
    local_4 = 1;
    if (pvVar5 == (void *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)StateMachineState_getGame();
      puVar8 = GameCommand_FinishCustomChoice_ctor(pvVar5,puVar8,uVar3);
    }
    local_4 = 0xffffffff;
    ActionCommand_setCardOrActionId(puVar8,*(int *)(param_1 + 0x120));
    set_field_4(puVar8,*(uint *)(param_1 + 0xf8));
    StateMachineState_getGame();
    iVar4 = FUN_01347a90();
    ActionCommand_setSourcePlayer(puVar8,iVar4);
    iVar4 = *(int *)(param_1 + 0xf8);
    pvVar5 = (void *)StateMachineState_getGame();
    Game_broadcastCallbackResultExceptPlayer(pvVar5,iVar4,puVar8);
  }
  StateMachine_popPendingState(*(void **)(param_1 + 8));
  ExceptionList = local_c;
  return 1;
}

