// addr: 0x0141dda0
// name: GetTargetState_buttonPressedWithString
// subsystem: common/common/state
// source (binary assert): common/common/state/GetTargetState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint GetTargetState_buttonPressedWithString(void * this, void * ctx, int
   buttonId_, void * buttonText) */

uint __thiscall
GetTargetState_buttonPressedWithString(void *this,void *ctx,int buttonId_,void *buttonText)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Processes GetTargetState button text for the primary/secondary target
                       buttons, schedules follow-up response messages, optionally restores the
                       previous state, and closes the prompt when no match is found. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169403c;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  if (buttonId_ == 1) {
    if (*(uint *)((int)this + 0xa4) < 0x10) {
      iVar4 = (int)this + 0x90;
    }
    else {
      iVar4 = *(int *)((int)this + 0x90);
    }
    iVar4 = FUN_00f942a0(0,*(undefined4 *)((int)buttonText + 0x14),iVar4,
                         *(undefined4 *)((int)this + 0xa0));
    if ((iVar4 == 0) && (*(char *)((int)this + 0x120) != '\0')) {
      bVar1 = EvaluationEnvironment_getPlayAreaReturnBooleanDefaultFalse();
      if (!bVar1) {
        cVar2 = EvaluationEnvironment_setTraceIndentAction(uVar3);
        if (cVar2 != '\0') {
          pvVar5 = Mem_Alloc(0x30);
          local_4 = 0;
          if (pvVar5 == (void *)0x0) {
            pvVar5 = (void *)0x0;
          }
          else {
            pvVar6 = (void *)StateMachineState_getGame();
            pvVar5 = GameCommand_ButtonPressed_ctor(pvVar5,pvVar6);
          }
          local_4 = 0xffffffff;
          set_field_4(pvVar5,(uint)ctx);
          StateCommand_setField24(pvVar5,1);
          pvVar6 = ctx;
          StateMachineState_getGame(ctx,pvVar5);
          Game_dispatchCommandToPlayerOrAll(pvVar6,pvVar5);
        }
        pvVar5 = Mem_Alloc(0x18);
        local_4 = 1;
        if (pvVar5 == (void *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = ReturnValueMap_ctor();
        }
        local_4 = 0xffffffff;
        ReturnValueMap_setInteger(4,ctx);
        ReturnValueMap_setInteger(*(undefined4 *)((int)this + 0x138),0);
        set_value_boolean(0x19,true);
        StateMachine_pushPendingState(uVar7);
        (**(code **)(*(int *)this + 0x88))();
        uVar3 = StateMachineState_resumePreviousWaitState();
        ExceptionList = local_c;
        return uVar3;
      }
    }
  }
  else if (buttonId_ == 2) {
    if (*(uint *)((int)this + 0xc0) < 0x10) {
      iVar4 = (int)this + 0xac;
    }
    else {
      iVar4 = *(int *)((int)this + 0xac);
    }
    iVar4 = FUN_00f942a0(0,*(undefined4 *)((int)buttonText + 0x14),iVar4,
                         *(undefined4 *)((int)this + 0xbc));
    if (iVar4 == 0) {
      if (*(int *)((int)this + 4) == 0) {
        FUN_012f5a60("mPreviousState","..\\common\\common\\state\\GetTargetState.cpp",0x117);
      }
      cVar2 = EvaluationEnvironment_setTraceIndentAction();
      if (cVar2 != '\0') {
        pvVar5 = Mem_Alloc(0x30);
        local_4 = 2;
        if (pvVar5 == (void *)0x0) {
          pvVar5 = (void *)0x0;
        }
        else {
          pvVar6 = (void *)StateMachineState_getGame();
          pvVar5 = GameCommand_ButtonPressed_ctor(pvVar5,pvVar6);
        }
        local_4 = 0xffffffff;
        set_field_4(pvVar5,(uint)ctx);
        StateCommand_setField24(pvVar5,2);
        pvVar6 = ctx;
        StateMachineState_getGame(ctx,pvVar5);
        Game_dispatchCommandToPlayerOrAll(pvVar6,pvVar5);
      }
      (**(code **)(**(int **)((int)this + 4) + 0xa0))(ctx,2);
      pvVar5 = Mem_Alloc(0x18);
      local_c = (void *)0x3;
      if (pvVar5 == (void *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = ReturnValueMap_ctor();
      }
      local_c = (void *)0xffffffff;
      ReturnValueMap_setInteger(4,ctx);
      ReturnValueMap_setInteger(*(undefined4 *)((int)this + 0x138),0);
      StateMachine_pushPendingState(uVar7);
      uVar3 = StateMachineState_resumePreviousWaitState();
      ExceptionList = unaff_ESI;
      return uVar3;
    }
  }
  GetTargetState_stateSpecificMessage((int)this + 0xfc);
  ExceptionList = local_c;
  return 0;
}

