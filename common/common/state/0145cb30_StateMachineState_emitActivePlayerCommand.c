// addr: 0x0145cb30
// name: StateMachineState_emitActivePlayerCommand
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachineState_emitActivePlayerCommand(void * this) */

void __fastcall StateMachineState_emitActivePlayerCommand(void *this)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* If an active player exists, allocates a small command/message object, fills
                       it with constants plus game/player identifiers, and sends it through a
                       machine virtual at slot 0x150. Evidence is StateMachineState.cpp mMachine
                       assertions and active-player/helper calls. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169cc5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x62,
                 DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  }
  pvVar1 = StateMachine_getCurrentTurn(*(void **)((int)this + 8));
  uVar2 = get_field_8(pvVar1);
  if (uVar2 != 0) {
    pvVar1 = Mem_Alloc(0x14);
    uStack_4 = 0;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = (void *)FUN_012f9eb0();
    }
    uStack_4 = 0xffffffff;
    FUN_012f8c70(0x7f);
    if (*(int *)((int)this + 8) == 0) {
      FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
    }
    get_field_4(*(void **)((int)this + 8));
    iVar3 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar1,iVar3);
    iVar3 = GamePlayer_getPlayerId();
    DisplayActionBuilder_addIntArg(pvVar1,iVar3);
    if (*(int *)((int)this + 8) == 0) {
      FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
    }
    piVar4 = (int *)get_field_4(*(void **)((int)this + 8));
    (**(code **)(*piVar4 + 0x150))(0,pvVar1);
  }
  ExceptionList = local_c;
  return;
}

