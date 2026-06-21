// addr: 0x01354470
// name: Game_logException
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_logException(void * this, void * exceptObj) */

void __thiscall Game_logException(void *this,void *exceptObj)

{
  void *this_00;
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_c;
  __time64_t local_8;
  
                    /* Formats exception details with match id, player, turn number, source
                       file/function/line, and message; writes them to wa_error.log, the game log,
                       and the command stream. It asserts exceptObj is non-null. */
  this_00 = exceptObj;
  __time64(&local_8);
  if (exceptObj == (void *)0x0) {
    FUN_012f5a60("exceptObj","..\\common\\common\\game\\Game.cpp",0x1d00);
  }
  pcVar1 = CRT_ctime64(&local_8);
  iVar2 = Exception_getMessage();
  if (*(uint *)(iVar2 + 0x18) < 0x10) {
    exceptObj = (void *)(iVar2 + 4);
  }
  else {
    exceptObj = *(void **)(iVar2 + 4);
  }
  iVar2 = Exception_getFunctionName();
  if (*(uint *)(iVar2 + 0x18) < 0x10) {
    iVar2 = iVar2 + 4;
  }
  else {
    iVar2 = *(int *)(iVar2 + 4);
  }
  iVar3 = Exception_getSourceFile();
  if (*(uint *)(iVar3 + 0x18) < 0x10) {
    iVar3 = iVar3 + 4;
  }
  else {
    iVar3 = *(int *)(iVar3 + 4);
  }
  iVar4 = Exception_getLineNumber(this_00);
  (**(code **)(*(int *)this + 0x54))(iVar3,iVar2,iVar4,exceptObj,pcVar1);
  Exception_getPlayerID(this_00);
  WAErrorLog_write("wa_error.log","ERROR: MatchID %d, Player %d, TurnNumber: %d, %s: %s: %d: %s: %s"
                  );
  pcVar1 = CRT_ctime64(&local_8);
  iVar2 = Exception_getMessage();
  if (*(uint *)(iVar2 + 0x18) < 0x10) {
    iVar2 = iVar2 + 4;
  }
  else {
    iVar2 = *(int *)(iVar2 + 4);
  }
  iStack_c = Exception_getFunctionName();
  if (*(uint *)(iStack_c + 0x18) < 0x10) {
    iStack_c = iStack_c + 4;
  }
  else {
    iStack_c = *(int *)(iStack_c + 4);
  }
  iVar3 = Exception_getSourceFile();
  if (*(uint *)(iVar3 + 0x18) < 0x10) {
    iVar3 = iVar3 + 4;
  }
  else {
    iVar3 = *(int *)(iVar3 + 4);
  }
  iVar4 = Exception_getLineNumber(this_00);
  (**(code **)(*(int *)this + 0x54))(iVar3,iStack_c,iVar4,iVar2,pcVar1);
  Exception_getPlayerID(this_00);
  Game_logGeneral(this,"ERROR: MatchID %d, Player %d, TurnNumber: %d, %s: %s: %d: %s: %s",
                  *(undefined4 *)((int)this + 100));
  pcVar1 = CRT_ctime64(&local_8);
  iVar2 = Exception_getMessage();
  if (*(uint *)(iVar2 + 0x18) < 0x10) {
    iVar2 = iVar2 + 4;
  }
  else {
    iVar2 = *(int *)(iVar2 + 4);
  }
  iStack_c = Exception_getFunctionName();
  if (*(uint *)(iStack_c + 0x18) < 0x10) {
    iStack_c = iStack_c + 4;
  }
  else {
    iStack_c = *(int *)(iStack_c + 4);
  }
  iVar3 = Exception_getSourceFile();
  if (*(uint *)(iVar3 + 0x18) < 0x10) {
    iVar3 = iVar3 + 4;
  }
  else {
    iVar3 = *(int *)(iVar3 + 4);
  }
  iVar4 = Exception_getLineNumber(this_00);
  uVar5 = (**(code **)(*(int *)this + 0x54))(iVar3,iStack_c,iVar4,iVar2,pcVar1);
  iVar2 = Exception_getPlayerID(this_00);
  Game_writeGameLog(this,"#ERROR: MatchID %d, Player %d, TurnNumber: %d, %s: %s: %d: %s: %s",
                    *(undefined4 *)((int)this + 100),iVar2,uVar5);
  return;
}

