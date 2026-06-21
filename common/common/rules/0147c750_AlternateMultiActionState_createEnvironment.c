// addr: 0x0147c750
// name: AlternateMultiActionState_createEnvironment
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall AlternateMultiActionState_createEnvironment(int param_1)

{
  void *sourceEnv;
  void *pvVar1;
  undefined4 uVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates/copies an EvaluationEnvironment for AlternateMultiActionState and
                       installs it on the StateMachine. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a026b;
  local_c = ExceptionList;
  sourceEnv = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x94);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = EvaluationEnvironment_ctor();
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  uVar3 = get_field_1c_if_vector_nonempty(*(void **)(param_1 + 8));
  if (uVar3 != 0) {
    pvVar1 = (void *)get_field_1c_if_vector_nonempty(*(void **)(param_1 + 8));
    EvaluationEnvironment_copyFrom(*(void **)(param_1 + 0xe8),pvVar1,sourceEnv);
  }
  uVar2 = StateMachineState_getGame();
  EvaluationEnvironment_setGame(uVar2);
  StateMachine_setCurrentEnvironment(*(undefined4 *)(param_1 + 0xe8));
  ExceptionList = local_c;
  return;
}

