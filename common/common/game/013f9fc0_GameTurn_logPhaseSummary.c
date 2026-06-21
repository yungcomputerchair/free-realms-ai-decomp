// addr: 0x013f9fc0
// name: GameTurn_logPhaseSummary
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GameTurn_logPhaseSummary(void * this) */

void __fastcall GameTurn_logPhaseSummary(void *this)

{
  uint uVar1;
  void *this_00;
  int iVar2;
  undefined4 uVar3;
  undefined4 *****pppppuVar4;
  void *local_434;
  void *apvStack_430 [4];
  undefined4 uStack_420;
  uint uStack_41c;
  void *local_414;
  undefined4 ****appppuStack_410 [4];
  uint uStack_400;
  uint uStack_3fc;
  char acStack_3f8 [1000];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Formats and emits a match/turn/phase summary, adding the game number for game
                       types 2 and 3. Evidence is the strings 'MatchID: %s Turn: %d PhaseName: %s'
                       and 'MatchID: %s Turn: %d PhaseName: %s Game #: %d'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168fa44;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_01b839d8 ^ (uint)&local_434);
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xfffffbbc;
  ExceptionList = &local_c;
  local_434 = Mem_Alloc(0x14);
  local_4 = 0;
  if (local_434 == (void *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x15);
  iVar2 = StateMachine_getCurrentState();
  DisplayActionBuilder_addIntArg(this_00,iVar2);
  FUN_01356600(&local_414);
  local_4 = 1;
  uVar3 = (**(code **)(*(int *)this + 0x3c))();
  TcgClient_getGlobalStringByKey(apvStack_430,uVar3);
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar2 = Game_getGameType(*(void **)((int)this + 4));
  if ((iVar2 == 2) || (iVar2 = Game_getGameType(*(void **)((int)this + 4)), iVar2 == 3)) {
    pppppuVar4 = (undefined4 *****)appppuStack_410[0];
    if (uStack_3fc < 0x10) {
      pppppuVar4 = appppuStack_410;
    }
    Game_getGameNumber(*(void **)((int)this + 4));
    _sprintf(acStack_3f8,"MatchID: %s Turn: %d PhaseName: %s Game #: %d",pppppuVar4);
  }
  else {
    if (uStack_3fc < 0x10) {
      appppuStack_410[0] = appppuStack_410;
    }
    _sprintf(acStack_3f8,"MatchID: %s Turn: %d PhaseName: %s",appppuStack_410[0]);
  }
  DisplayActionBuilder_addCStringArg(this_00,acStack_3f8);
  (**(code **)(**(int **)((int)this + 4) + 0x154))(this_00);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  if (0xf < uStack_41c) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_430[0]);
  }
  uStack_41c = 0xf;
  uStack_420 = 0;
  apvStack_430[0] = (void *)((uint)apvStack_430[0] & 0xffffff00);
  puStack_8 = (undefined1 *)0xffffffff;
  if (0xf < uStack_400) {
                    /* WARNING: Subroutine does not return */
    _free(local_414);
  }
  ExceptionList = local_10;
  return;
}

