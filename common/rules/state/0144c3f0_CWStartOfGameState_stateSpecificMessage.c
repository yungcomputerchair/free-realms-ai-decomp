// addr: 0x0144c3f0
// name: CWStartOfGameState_stateSpecificMessage
// subsystem: common/rules/state
// source (binary assert): common/rules/state/cwstartofgamestate.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 CWStartOfGameState_stateSpecificMessage(undefined4 param_1,void *param_2,void *param_3)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  char *fmt;
  undefined1 local_44 [4];
  void *local_40;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Handles a CWStartOfGameState-specific message by logging the message/value
                       strings, reading an integer ValueData, mapping it through a helper, and
                       applying it to the current turn/zone. Evidence is the log format
                       CWStartOfGameState::stateSpecificMessage and cwstartofgamestate.cpp asserts.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169ad40;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffac;
  ExceptionList = &local_c;
  pvVar2 = ValueData_toString(param_3,local_28);
  local_4 = 0;
  pvVar3 = ValueData_toString(param_2,local_44);
  local_4._0_1_ = 1;
  if (*(uint *)((int)pvVar2 + 0x18) < 0x10) {
    iVar7 = (int)pvVar2 + 4;
  }
  else {
    iVar7 = *(int *)((int)pvVar2 + 4);
  }
  if (*(uint *)((int)pvVar3 + 0x18) < 0x10) {
    iVar4 = (int)pvVar3 + 4;
  }
  else {
    iVar4 = *(int *)((int)pvVar3 + 4);
  }
  fmt = "CWStartOfGameState::stateSpecificMessage %d, %s, %s";
  pvVar2 = (void *)StateMachineState_getGame
                             ("CWStartOfGameState::stateSpecificMessage %d, %s, %s",param_1,iVar4,
                              iVar7,uVar1);
  Game_logGeneral(pvVar2,fmt,param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pvVar2 = (void *)StateMachineState_getGame();
  Game_getZoneCollection(pvVar2);
  if (*(int *)((int)param_2 + 4) != 2) {
    FUN_012f5a60("value1->isIntegerValue()","..\\common\\rules\\state\\cwstartofgamestate.cpp",0x153
                );
    if (*(int *)((int)param_2 + 4) != 2) {
      FUN_012f5a60("mTypeID == kIntegerTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x129);
      if (*(int *)((int)param_2 + 4) != 2) {
        uVar6 = 0;
        goto LAB_0144c527;
      }
    }
  }
  uVar6 = *(undefined4 *)((int)param_2 + 8);
LAB_0144c527:
  puVar5 = (undefined4 *)FUN_0144c390(uVar6);
  uVar6 = *puVar5;
  StateMachineState_getCurrentTurn(uVar6);
  GameTurn_startForPlayer(uVar6);
  ExceptionList = local_c;
  return 3;
}

