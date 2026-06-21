// addr: 0x01410890
// name: GameTurn_logTurnMatchSummary
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GameTurn_logTurnMatchSummary(void * this) */

void __fastcall GameTurn_logTurnMatchSummary(void *this)

{
  uint uVar1;
  int iVar2;
  void *this_00;
  void *local_418;
  void *local_414 [5];
  uint uStack_400;
  char local_3f8 [1000];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Formats a turn/match summary and submits it through the game's logging/debug
                       output path; game types 2 and 3 also include the game number. Evidence is the
                       'Turn: %d Match: %s' / 'Turn: %d Match: %s Game: %d' strings and calls to
                       Game_getGameType/Game_getGameNumber. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01692619;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_01b839d8 ^ (uint)&local_418);
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xfffffbdc;
  ExceptionList = &local_c;
  local_418 = Mem_Alloc(0x14);
  this_00 = (void *)0x0;
  local_4 = 0;
  if (local_418 != (void *)0x0) {
    this_00 = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x15);
  iVar2 = StateMachine_getCurrentState();
  DisplayActionBuilder_addIntArg(this_00,iVar2);
  FUN_01356600(local_414);
  local_4 = 1;
  iVar2 = Game_getGameType(*(void **)((int)this + 4));
  if ((iVar2 == 2) || (iVar2 = Game_getGameType(*(void **)((int)this + 4)), iVar2 == 3)) {
    Game_getGameNumber(*(void **)((int)this + 4));
    _sprintf(local_3f8,"Turn: %d Match: %s Game: %d",*(undefined4 *)((int)this + 0x14));
  }
  else {
    _sprintf(local_3f8,"Turn: %d Match: %s",*(undefined4 *)((int)this + 0x14));
  }
  DisplayActionBuilder_addCStringArg(this_00,local_3f8);
  (**(code **)(**(int **)((int)this + 4) + 0x154))(this_00);
  puStack_8 = (undefined1 *)0xffffffff;
  if (0xf < uStack_400) {
                    /* WARNING: Subroutine does not return */
    _free(local_414[0]);
  }
  ExceptionList = local_10;
  return;
}

