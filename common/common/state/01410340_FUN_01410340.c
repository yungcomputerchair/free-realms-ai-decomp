// addr: 0x01410340
// name: FUN_01410340
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_01410340(int *param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01692576;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  pvVar4 = (void *)param_1[6];
  param_1[4] = 0x1b;
  param_1[0x22] = 0;
  FUN_013f3c20(uVar2);
  if (param_2 == 0x29) {
    param_1[3] = 0x29;
    pvVar3 = Mem_Alloc(0x104);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = CWStartOfGameState_ctorWithMachine(pvVar3,pvVar4);
    }
    local_4 = 0xffffffff;
  }
  else {
    if (param_2 != 0x1adb1) {
      ExceptionList = local_c;
      return 0;
    }
    pcVar1 = *(code **)(*param_1 + 0x60);
    param_1[3] = 0x1adb1;
    (*pcVar1)();
    FUN_01410050();
    pvVar3 = Mem_Alloc(0x100);
    local_4 = 1;
    if (pvVar3 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = ExecuteRuleState_copy_ctor(pvVar3,pvVar4);
    }
    local_4 = 0xffffffff;
    StateMachineState_setDeferredStateId(pvVar4,0xf42f3);
    StateMachineState_setDeferredStatePending(pvVar4,true);
  }
  uVar5 = StateMachine_setCurrentState(pvVar4);
  ExceptionList = local_c;
  return uVar5;
}

