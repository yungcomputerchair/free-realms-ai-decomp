// addr: 0x01471600
// name: DrawCardState_leaveState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DrawCardState_leaveState(void * this) */

void __fastcall DrawCardState_leaveState(void *this)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *fmt;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Leave-state handler for DrawCardState; logs, packages draw-card results, and
                       pops pending state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f15b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  fmt = "DrawCardState::leaveState";
  pvVar2 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar2,fmt,uVar1);
  uVar3 = FUN_01383460(0x32);
  StateMachine_popPendingState(*(void **)((int)this + 8));
  pvVar2 = Mem_Alloc(0x18);
  uVar4 = 0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar4 = ReturnValueMap_ctor();
  }
  local_4 = 0xffffffff;
  ReturnValueMap_setInteger(0x34,uVar3);
  StateMachine_pushPendingState(uVar4);
  ExceptionList = local_c;
  return;
}

