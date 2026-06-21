// addr: 0x0145cc50
// name: StateMachineState_createAndRegisterPrompt
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachineState_createAndRegisterPrompt(void * this) */

void __fastcall StateMachineState_createAndRegisterPrompt(void *this)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x94-byte helper object, stores it at offset 0xe8, registers it
                       with the machine/game via FUN_013813d0 and FUN_013f6200. Evidence is
                       StateMachineState.cpp mMachine assertion; exact helper type is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169cc8b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x94);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = EvaluationEnvironment_ctor(uVar1);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)((int)this + 0xe8) = uVar3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  uVar1 = get_field_4(*(void **)((int)this + 8));
  EvaluationEnvironment_setGame(uVar1);
  StateMachine_setCurrentEnvironment(*(undefined4 *)((int)this + 0xe8));
  ExceptionList = local_c;
  return;
}

