// addr: 0x0145cdc0
// name: StateMachineState_dump
// subsystem: common/networking/account_command
// source (binary assert): common/common/state/StateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachineState_dump(void * this, void * stream) */

void __thiscall StateMachineState_dump(void *this,void *stream)

{
  void *stream_00;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Dumps StateMachineState fields such as game id, state id, phase names,
                       buttons, player id, valid-target flag, and environment to a debug/serializer
                       stream. Evidence is the StateMachineState.cpp __FILE__ string and the
                       Starting/Ending StateMachineState markers. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169ccbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (stream == (void *)0x0) {
    stream_00 = (void *)(**(code **)(*(int *)this + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  }
  else {
    stream_00 = (void *)(**(code **)(*(int *)this + 8))(stream);
  }
  DebugStream_writeCString(stream_00,"Starting StateMachineState\n");
  DebugStream_writeCString(stream_00,"GameID: ");
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  get_field_4(*(void **)((int)this + 8));
  uVar1 = StateMachine_getCurrentState();
  Serializer_appendInteger(stream_00,uVar1);
  DebugStream_writeCString(stream_00,"StateID: ");
  Serializer_appendInteger(stream_00,*(uint *)((int)this + 0xec));
  DebugStream_writeCString(stream_00,"mPreviousState: ");
  if ((*(int *)((int)this + 4) == 0) ||
     (iVar2 = FUN_013f3130(*(undefined4 *)(*(int *)((int)this + 4) + 0xec)), iVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(*(int *)((int)this + 4) + 0xec);
  }
  Serializer_appendInteger(stream_00,uVar1);
  DebugStream_writeCString(stream_00,"Active Card: ");
  Serializer_appendInteger(stream_00,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(stream_00,"TokenType: ");
  Serializer_appendInteger(stream_00,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(stream_00,"TokenNumber: ");
  Serializer_appendInteger(stream_00,*(uint *)((int)this + 0x14));
  DebugStream_writeCString(stream_00,"Phase: ");
  Serializer_appendInteger(stream_00,*(uint *)((int)this + 0x18));
  DebugStream_writeCString(stream_00,"StateName: ");
  Serializer_appendString(stream_00,(void *)((int)this + 0x1c));
  DebugStream_writeCString(stream_00,"PhaseName: ");
  Serializer_appendString(stream_00,(void *)((int)this + 0x38));
  DebugStream_writeCString(stream_00,"PhaseDialogText: ");
  pvVar4 = stream_00;
  (**(code **)(*(int *)((int)this + 0x54) + 0x28))();
  DebugStream_writeCString(stream_00,"WaitDialogText: ");
  (**(code **)(*(int *)((int)this + 0x70) + 0x28))(stream_00);
  DebugStream_writeCString(stream_00,"Button1: ");
  Serializer_appendString(stream_00,(void *)((int)this + 0x8c));
  DebugStream_writeCString(stream_00,"Button2: ");
  Serializer_appendString(stream_00,(void *)((int)this + 0xa8));
  DebugStream_writeCString(stream_00,"Button3: ");
  Serializer_appendString(stream_00,(void *)((int)this + 0xc4));
  DebugStream_writeCString(stream_00,"PlayerID: ");
  Serializer_appendInteger(stream_00,*(uint *)((int)this + 0xe0));
  DebugStream_writeCString(stream_00,"No ValidTargets: ");
  Serializer_appendInteger(stream_00,(uint)*(byte *)((int)this + 0xe4));
  DebugStream_writeCString(stream_00,"mEnvironment: ");
  if (*(int *)((int)this + 0xe8) == 0) {
    puStack_8 = Mem_Alloc(0x94);
    if (puStack_8 == (undefined1 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = EvaluationEnvironment_ctor();
    }
    *(undefined4 *)((int)this + 0xe8) = uVar3;
  }
  (**(code **)(**(int **)((int)this + 0xe8) + 0x28))(stream_00);
  DebugStream_writeCString(stream_00,"Ending StateMachineState\n");
  (**(code **)(*(int *)this + 0xc))(stream_00);
  ExceptionList = pvVar4;
  return;
}

