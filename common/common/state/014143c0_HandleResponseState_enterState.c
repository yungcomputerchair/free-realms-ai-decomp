// addr: 0x014143c0
// name: HandleResponseState_enterState
// subsystem: common/common/state
// source (binary assert): common/common/state/HandleResponseState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint HandleResponseState_enterState(void * this) */

uint __fastcall HandleResponseState_enterState(void *this)

{
  int targetKind_;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  void *this_00;
  int key_;
  char *pcVar11;
  int iStack_54;
  void *pvStack_50;
  int iStack_4c;
  int iStack_48;
  undefined1 auStack_44 [4];
  int iStack_40;
  undefined1 auStack_3c [16];
  int iStack_2c;
  int iStack_28;
  undefined1 auStack_24 [4];
  int iStack_20;
  undefined1 auStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Enter-state handler for HandleResponseState; waits for random target data,
                       converts random target lists into chosen targets, records them in the
                       environment, clears the wait flag, and then continues response handling. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_01692ceb;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffff9c;
  ExceptionList = &local_c;
  (**(code **)(*(int *)this + 0x4c))();
  pcVar11 = "HandleResponsState::enterState";
  pvVar5 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar5,pcVar11,uVar4);
  StateMachineState_getCurrentTurn();
  uVar6 = FUN_013f7eb0();
  *(undefined4 *)((int)this + 0x128) = uVar6;
  pvVar5 = (void *)StateMachineState_getGame();
  bVar3 = unknown_getGameGuardFlag(pvVar5);
  if (bVar3) {
    ExceptionList = local_c;
    return 2;
  }
  bVar3 = EvaluationEnvironment_hasValueForKey(*(void **)((int)this + 0xe8),key_);
  if (bVar3) {
    pvVar5 = (void *)StateMachineState_getGame();
    bVar3 = Game_getFlag_14d(pvVar5);
    if (!bVar3) {
      pcVar11 = "waiting for randomTargets to come in.";
      pvVar5 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar5,pcVar11,uVar4);
      EvaluationEnvironment_truncateTraceActions(0x30);
      ExceptionList = local_c;
      return 2;
    }
    pcVar11 = "setting random Targets";
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar11,uVar4);
    FUN_012fa910();
    iStack_4 = 0;
    FUN_013833c0(0x30,auStack_24);
    if (iStack_20 != 0xe) {
      FUN_012f5a60("randomTargetData.isIntValueMapValue()",
                   "..\\common\\common\\state\\HandleResponseState.cpp",0x204);
    }
    pvVar5 = (void *)FUN_012fa780();
    pvStack_50 = pvVar5;
    FUN_005258fb();
    iStack_4._0_1_ = 1;
    iStack_40 = *(int *)((int)pvVar5 + 4);
    uVar6 = StateMachineState_getGame();
    StateMachineState_getGame(uVar6);
    uVar7 = FUN_013487b0();
    FUN_01419f30(uVar7,uVar6);
    iStack_4 = CONCAT31(iStack_4._1_3_,2);
    iStack_48 = **(int **)((int)pvVar5 + 4);
    iStack_4c = (int)pvVar5;
    while( true ) {
      iVar2 = iStack_48;
      iVar10 = iStack_4c;
      if ((iStack_4c == 0) || ((void *)iStack_4c != pvVar5)) {
        FUN_00d83c2d();
      }
      if (iVar2 == iStack_40) break;
      if (iVar10 == 0) {
        FUN_00d83c2d();
      }
      if (iVar2 == *(int *)(iVar10 + 4)) {
        FUN_00d83c2d();
      }
      targetKind_ = *(int *)(iVar2 + 0xc);
      iStack_54 = targetKind_;
      FUN_012fa910();
      iStack_4 = CONCAT31(iStack_4._1_3_,3);
      if (iVar2 == *(int *)(iVar10 + 4)) {
        FUN_00d83c2d();
      }
      FUN_013010e0(*(undefined4 *)(iVar2 + 0x10));
      FUN_01300db0();
      iVar10 = iStack_28;
      if ((iStack_2c != 6) &&
         (FUN_012f5a60("mTypeID == kIntegerListTypeID",
                       "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                       ,0x135), iVar10 = iStack_28, iStack_2c != 6)) {
        iVar10 = 0;
      }
      if ((*(int *)(iVar10 + 4) == 0) ||
         (uVar4 = *(int *)(iVar10 + 8) - *(int *)(iVar10 + 4) >> 2, uVar4 == 0)) {
        piVar8 = IntDefaultMap_getOrInsert(auStack_3c,&iStack_54);
        *piVar8 = 0;
      }
      else if (uVar4 == 1) {
        piVar8 = (int *)FUN_01260d40(0);
        piVar9 = IntDefaultMap_getOrInsert(auStack_3c,&iStack_54);
        *piVar9 = *piVar8;
      }
      else {
        iVar10 = MTRandom_getIntBelow(auStack_18,uVar4);
        piVar8 = (int *)FUN_01260d40(iVar10);
        piVar9 = IntDefaultMap_getOrInsert(auStack_3c,&iStack_54);
        *piVar9 = *piVar8;
      }
      piVar8 = IntDefaultMap_getOrInsert(auStack_3c,&iStack_54);
      EvaluationEnvironment_setTargetFromPlayAreaTarget
                (*(void **)((int)this + 0xe8),targetKind_,*piVar8);
      iStack_4 = CONCAT31(iStack_4._1_3_,2);
      FUN_01300cd0();
      FUN_012af3e0();
      pvVar5 = pvStack_50;
    }
    pvStack_50 = Mem_Alloc(0x38);
    iStack_4._0_1_ = 4;
    if (pvStack_50 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      uVar6 = StateMachineState_getGame();
      pvVar5 = (void *)FUN_0141a550(uVar6);
    }
    iStack_4 = CONCAT31(iStack_4._1_3_,2);
    FUN_01300680(0xd);
    puVar1 = *(undefined1 **)((int)this + 0x154);
    if (puVar1 != auStack_3c) {
      FUN_005152ac(auStack_44,puVar1,**(undefined4 **)(puVar1 + 4),puVar1,
                   *(undefined4 **)(puVar1 + 4));
      FUN_012415a0(auStack_3c);
    }
    FUN_0141a630((int)this + 0x14c);
    CommandObject_setSecondIntArg(pvVar5,0);
    this_00 = (void *)StateMachineState_getGame();
    Game_dispatchCommandToAllPlayers(this_00,pvVar5);
    EvaluationEnvironment_truncateTraceActions(0x30);
    iStack_4._0_1_ = 1;
    FUN_01419f50();
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    FUN_00521a9c();
    iStack_4 = 0xffffffff;
    FUN_01300cd0();
  }
  uVar4 = FUN_01413a10();
  ExceptionList = local_c;
  return uVar4;
}

