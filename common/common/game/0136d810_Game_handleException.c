// addr: 0x0136d810
// name: Game_handleException
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Game_handleException(void *param_1,void *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Logs a caught Exception, either records a nonfatal per-player error and
                       continues or marks it fatal, emits a fatal-error command, ends the game, and
                       sets the fatal-error flag. Evidence is strings 'Player %d had an error...'
                       and 'FATAL ERROR CAUGHT! ENDING GAME.'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168065b;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  Game_logException(param_1,param_2);
  bVar1 = Exception_getSuppressFatalError(param_2);
  if (!bVar1) {
    iVar3 = Exception_getPlayerID(param_2);
    Game_logGeneralFormatted(param_1,"Player %d had an error, continuing the game.",iVar3,uVar2);
    ExceptionList = local_c;
    return;
  }
  pvVar4 = Mem_Alloc(0x94);
  this = (void *)0x0;
  local_4 = 0;
  if (pvVar4 != (void *)0x0) {
    this = (void *)GameCommand_FatalError_ctor(param_1);
  }
  local_4 = 0xffffffff;
  Exception_setFatal(param_2,'\x01');
  GameCommand_FatalError_assignException(this,param_2);
  Game_dispatchCommandToAllPlayers(param_1,this);
  Game_logGeneralFormatted(param_1,"FATAL ERROR CAUGHT! ENDING GAME.");
  *(undefined1 *)((int)param_1 + 0x1d8) = 1;
  ExceptionList = local_c;
  return;
}

