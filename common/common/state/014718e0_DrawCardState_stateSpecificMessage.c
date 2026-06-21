// addr: 0x014718e0
// name: DrawCardState_stateSpecificMessage
// subsystem: common/common/game
// source (binary assert): common/common/state/DrawCardState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DrawCardState_stateSpecificMessage(void * this, int playerId_, void *
   arg1Value, void * arg2Value) */

void __thiscall
DrawCardState_stateSpecificMessage(void *this,int playerId_,void *arg1Value,void *arg2Value)

{
  int *key;
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int *extraout_EAX;
  int iVar4;
  char *fmt;
  int iVar5;
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [4];
  void *pvStack_40;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined1 auStack_28 [4];
  void *pvStack_24;
  undefined4 uStack_14;
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Handles DrawCardState::stateSpecificMessage: validates player and ValueData
                       argument types, reads an int-int map entry, stores whether drawing should
                       skip/no-draw messaging, then invokes a state vtable callback. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169f190;
  local_c = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffa0);
  ExceptionList = &local_c;
  if (arg1Value == (void *)0x0) {
    FUN_012f5a60("arg1Value","..\\common\\common\\state\\DrawCardState.cpp",0x61);
  }
  pvVar1 = arg2Value;
  if (arg2Value == (void *)0x0) {
    FUN_012f5a60("arg2Value","..\\common\\common\\state\\DrawCardState.cpp",0x62);
  }
  pvVar1 = ValueData_toString(pvVar1,auStack_28);
  iStack_4 = 0;
  pvVar2 = ValueData_toString(arg1Value,auStack_44);
  iStack_4._0_1_ = 1;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    iVar4 = (int)pvVar1 + 4;
  }
  else {
    iVar4 = *(int *)((int)pvVar1 + 4);
  }
  if (*(uint *)((int)pvVar2 + 0x18) < 0x10) {
    iVar3 = (int)pvVar2 + 4;
  }
  else {
    iVar3 = *(int *)((int)pvVar2 + 4);
  }
  fmt = "DrawCardState::stateSpecificMessage %d, %s, %s";
  iVar5 = playerId_;
  pvVar1 = (void *)StateMachineState_getGame
                             ("DrawCardState::stateSpecificMessage %d, %s, %s",playerId_,iVar3,iVar4
                             );
  Game_logGeneral(pvVar1,fmt,iVar5);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_40);
  }
  uStack_2c = 0xf;
  uStack_30 = 0;
  pvStack_40 = (void *)((uint)pvStack_40 & 0xffffff00);
  iStack_4 = 0xffffffff;
  if (0xf < uStack_10) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_24);
  }
  uStack_10 = 0xf;
  uStack_14 = 0;
  pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
  if (playerId_ != *(int *)((int)this + 0xf8)) {
    FUN_012f5a60("player == this->mPlayerID","..\\common\\common\\state\\DrawCardState.cpp",100);
  }
  if (*(int *)((int)arg1Value + 4) != 0xd) {
    FUN_012f5a60("arg1Value->isIntIntMapValue()","..\\common\\common\\state\\DrawCardState.cpp",0x65
                );
  }
  pvVar1 = arg2Value;
  if (*(int *)((int)arg2Value + 4) != 6) {
    FUN_012f5a60("arg2Value->isIntegerListValue()","..\\common\\common\\state\\DrawCardState.cpp",
                 0x66);
  }
  FUN_013010e0(pvVar1);
  if (*(int *)((int)arg1Value + 4) != 0xd) {
    FUN_012f5a60("mTypeID == kIntIntMapTypeID",
                 "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                 ,0x13b);
    if (*(int *)((int)arg1Value + 4) != 0xd) {
      pvVar1 = (void *)0x0;
      goto LAB_01471a91;
    }
  }
  pvVar1 = *(void **)((int)arg1Value + 8);
LAB_01471a91:
  arg2Value = (void *)0x1;
  StdRbTreeInt_find(pvVar1,auStack_4c,&arg2Value,key);
  pvVar2 = (void *)*extraout_EAX;
  iVar4 = extraout_EAX[1];
  iVar3 = *(int *)((int)pvVar1 + 4);
  if ((pvVar2 == (void *)0x0) || (pvVar2 != pvVar1)) {
    FUN_00d83c2d();
  }
  if (iVar4 == iVar3) {
    FUN_012f5a60("finder != intMap->end()","..\\common\\common\\state\\DrawCardState.cpp",0x6b);
  }
  if (pvVar2 == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (iVar4 == *(int *)((int)pvVar2 + 4)) {
    FUN_00d83c2d();
  }
  *(bool *)((int)this + 0x11c) = *(int *)(iVar4 + 0x10) != 0;
  (**(code **)(*(int *)this + 0x124))();
  ExceptionList = local_c;
  return;
}

