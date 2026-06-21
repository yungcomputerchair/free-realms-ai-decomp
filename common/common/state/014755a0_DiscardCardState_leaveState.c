// addr: 0x014755a0
// name: DiscardCardState_leaveState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DiscardCardState_leaveState(void * this) */

void __fastcall DiscardCardState_leaveState(void *this)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  char *fmt;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Leave-state handler for DiscardCardState; logs, packages discard-card state
                       results, and pops pending state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f6fb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  fmt = "DiscardCardState::leaveState";
  pvVar2 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar2,fmt,uVar1);
  StateMachine_popPendingState(*(void **)((int)this + 8));
  pvVar2 = Mem_Alloc(0x18);
  uVar3 = 0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar3 = ReturnValueMap_ctor();
  }
  local_4 = 0xffffffff;
  ReturnValueMap_setInteger(0x30,*(undefined4 *)((int)this + 0x114));
  StateMachine_pushPendingState(uVar3);
  ExceptionList = local_c;
  return;
}

