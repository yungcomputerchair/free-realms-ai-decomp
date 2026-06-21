// addr: 0x01470280
// name: GetSimultaneousTargetState_enterState
// subsystem: common/common/property
// source (binary assert): common/common/state/GetSimultaneousTargetState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint GetSimultaneousTargetState_enterState(void * this) */

uint __fastcall GetSimultaneousTargetState_enterState(void *this)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  uint uVar5;
  void *game;
  int iVar6;
  char *fmt;
  undefined4 uVar7;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 *puStack_1c;
  int iStack_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Enters GetSimultaneousTargetState, obtains the kValidTargetsReturn int-value
                       map, iterates it, and records valid target entries before delegating to the
                       next state handler. Evidence: assert/log strings name
                       GetSimultaneousTargetState::enterState and source file
                       GetSimultaneousTargetState.cpp. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169ee38;
  local_c = ExceptionList;
  uVar5 = DAT_01b839d8 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  (**(code **)(*(int *)this + 0x4c))();
  fmt = "GetSimultaneousTargetState::enterState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,uVar5);
  iStack_24 = StateMachine_popReturnValueMap();
  if (iStack_24 == 0) {
    FUN_012f5a60("returnValueMap","..\\common\\common\\state\\GetSimultaneousTargetState.cpp",0xce);
  }
  FUN_012fa910();
  uStack_4 = 0;
  bVar4 = ValueData_clearIfPresent(&DAT_0000000e);
  if (!bVar4) {
    FUN_012f5a60("returnValueMap->getValue(kValidTargetsReturn, value)",
                 "..\\common\\common\\state\\GetSimultaneousTargetState.cpp",0xd1);
  }
  if (iStack_14 != 0xe) {
    FUN_012f5a60("value.isIntValueMapValue()",
                 "..\\common\\common\\state\\GetSimultaneousTargetState.cpp",0xd2);
    if (iStack_14 != 0xe) {
      FUN_012f5a60("mTypeID == kIntValueMapTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x141);
      iVar6 = 0;
      if (iStack_14 != 0xe) goto LAB_0147036e;
    }
  }
  iVar6 = iStack_10;
LAB_0147036e:
  puVar1 = *(undefined4 **)(iVar6 + 4);
  puStack_1c = (undefined4 *)*puVar1;
  iStack_20 = iVar6;
  while( true ) {
    puVar3 = puStack_1c;
    iVar2 = iStack_20;
    if ((iStack_20 == 0) || (iStack_20 != iVar6)) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) break;
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    uStack_28 = puVar3[3];
    if (puVar3 == *(undefined4 **)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    if (*(int *)(puVar3[4] + 4) == 6) {
      uVar7 = *(undefined4 *)(puVar3[4] + 8);
      IntKeyBufferMap_findOrInsert(&uStack_28);
      FUN_005f1e5c(uVar7);
    }
    FUN_012af3e0();
  }
  StateMachine_destroyReturnValueMap(iStack_24);
  uVar5 = (**(code **)(*(int *)this + 0x3c))();
  uStack_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return uVar5;
}

