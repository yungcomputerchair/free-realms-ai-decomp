// addr: 0x01470a00
// name: GetTopCardState_enterState
// subsystem: common/rules/state
// source (binary assert): common/common/state/GetTopCardState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall GetTopCardState_enterState(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  void *this;
  undefined4 uVar9;
  int *unaff_EBX;
  char *fmt;
  int *piStack_20;
  undefined1 auStack_1c [4];
  void *pvStack_18;
  undefined4 uStack_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* GetTopCardState enter handler that reads player/play-area returns, inspects
                       the top card when client-side, dispatches a display command, then pushes a
                       pending return state. Evidence is GetTopCardState::enterState and
                       GetTopCardState.cpp asserts. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169efae;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  fmt = "GetTopCardState::enterState";
  pvVar4 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar4,fmt,uVar3);
  (**(code **)(*param_1 + 0x4c))();
  iVar5 = StateMachine_popReturnValueMap();
  if (iVar5 == 0) {
    FUN_012f5a60("returnValueMap","..\\common\\common\\state\\GetTopCardState.cpp",0x23);
  }
  cVar1 = ReturnValueMap_hasIntegerKey(4);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kPlayerReturn)",
                 "..\\common\\common\\state\\GetTopCardState.cpp",0x24);
  }
  cVar1 = ReturnValueMap_hasIntegerKey(0xf);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kPlayAreaReturn)",
                 "..\\common\\common\\state\\GetTopCardState.cpp",0x25);
  }
  uVar3 = ReturnValueMap_getInteger(4);
  uVar6 = ReturnValueMap_getInteger(0xf);
  iVar7 = ReturnValueMap_getInteger(1);
  param_1[0x3e] = iVar7;
  StateMachine_destroyReturnValueMap(iVar5);
  pvVar4 = (void *)StateMachineState_getGame();
  bVar2 = Game_getFlag_14d(pvVar4);
  if (!bVar2) {
    ExceptionList = local_c;
    return 2;
  }
  iVar5 = 0;
  pvStack_18 = (void *)0x0;
  uStack_14 = 0;
  iStack_10 = 0;
  uStack_4 = 0;
  piVar8 = (int *)StateMachineState_getGame();
  (**(code **)(*piVar8 + 0x8c))(uVar6,auStack_1c,param_1[0x3a]);
  if ((unaff_EBX != (int *)0x0) && ((int)piStack_20 - (int)unaff_EBX >> 2 != 0)) {
    if (piStack_20 < unaff_EBX) {
      FUN_00d83c2d();
    }
    if (piStack_20 <= unaff_EBX) {
      FUN_00d83c2d();
    }
    iVar5 = *unaff_EBX;
  }
  iVar7 = 0;
  if (iVar5 != 0) {
    piVar8 = (int *)StateMachineState_getGame();
    (**(code **)(*piVar8 + 0x104))(0,iVar5);
    iVar7 = PlayElement_getId();
  }
  pvVar4 = Mem_Alloc(0x38);
  iStack_10._0_1_ = 1;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    uVar6 = StateMachineState_getGame();
    pvVar4 = (void *)FUN_0141a550(uVar6);
  }
  iStack_10._0_1_ = 0;
  set_field_4(pvVar4,uVar3);
  CommandObject_setFirstIntArg(pvVar4,iVar7);
  CommandObject_setSecondIntArg(pvVar4,0);
  this = (void *)StateMachineState_getGame();
  Game_dispatchCommandToAllPlayers(this,pvVar4);
  uVar6 = 1;
  switch(param_1[0x3e]) {
  case 3:
    uVar6 = 2;
    break;
  case 0x3a:
    uVar6 = 0x36;
    break;
  case 0x3b:
    uVar6 = 0x37;
  }
  pvVar4 = Mem_Alloc(0x18);
  iStack_10._0_1_ = 2;
  if (pvVar4 == (void *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = ReturnValueMap_ctor();
  }
  iStack_10 = (uint)iStack_10._1_3_ << 8;
  ReturnValueMap_setInteger(uVar6,iVar7);
  StateMachine_pushPendingState(uVar9);
  iStack_10 = 0xffffffff;
  if (unaff_EBX != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  ExceptionList = pvStack_18;
  return 1;
}

