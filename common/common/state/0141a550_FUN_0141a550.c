// addr: 0x0141a550
// name: FUN_0141a550
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall FUN_0141a550(undefined4 *param_1,void *param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a state-specific-message game command with current
                       turn/state-machine context. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01693768;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  GameCommand_ctor(param_1);
  local_4 = 0;
  *param_1 = GameCommand_StateSpecificMessage::vftable;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_0141b3d0(param_2);
  if (param_2 != (void *)0x0) {
    pvVar2 = Game_getCurrentTurn(param_2);
    if (pvVar2 != (void *)0x0) {
      pvVar2 = Game_getCurrentTurn(param_2);
      uVar3 = FUN_013f7ea0(uVar1);
      param_1[10] = uVar3;
      uVar3 = FUN_013f7eb0();
      param_1[0xb] = uVar3;
      pvVar4 = GameTurn_getCurrentStateMachine(pvVar2);
      if (pvVar4 != (void *)0x0) {
        GameTurn_getCurrentStateMachine(pvVar2);
        iVar5 = StateMachine_getCurrentState();
        if (iVar5 != 0) {
          GameTurn_getCurrentStateMachine(pvVar2);
          piVar6 = (int *)StateMachine_getCurrentState();
          uVar3 = (**(code **)(*piVar6 + 0x18))();
          param_1[9] = uVar3;
        }
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

