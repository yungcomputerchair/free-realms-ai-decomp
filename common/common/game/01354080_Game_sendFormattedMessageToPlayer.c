// addr: 0x01354080
// name: Game_sendFormattedMessageToPlayer
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void Game_sendFormattedMessageToPlayer(void * this, int playerID, char * fmt,
   undefined4) */

void __cdecl Game_sendFormattedMessageToPlayer(void *this,int playerID,char *fmt,undefined4 param_4)

{
  void *this_00;
  void *pvStack_139c;
  char local_1398;
  char acStack_1397 [4999];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Formats a player-targeted message when the format begins with !, sends it
                       through the game output channel, and logs the send for watched players.
                       Non-observer games only send to mMyPlayerID. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167d7ee;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&pvStack_139c;
  ExceptionList = &local_c;
  if ((*(char *)((int)this + 0x14d) == '\0') || (*(char *)((int)this + 0x318) == '\x01')) {
    if (*(int *)((int)this + 0x13c) == 0) {
      FUN_012f5a60("mMyPlayerID","..\\common\\common\\game\\Game.cpp",0x10a5,
                   DAT_01b839d8 ^ (uint)&stack0xffffec58);
    }
    if (playerID != *(int *)((int)this + 0x13c)) {
      ExceptionList = local_c;
      return;
    }
  }
  if (*fmt == '!') {
    __vsnprintf(&local_1398,5000,fmt,&param_4);
    pvStack_139c = Mem_Alloc(0x14);
    this_00 = (void *)0x0;
    uStack_4 = 0;
    if (pvStack_139c != (void *)0x0) {
      this_00 = (void *)FUN_012f9eb0();
    }
    uStack_4 = 0xffffffff;
    FUN_012f8c70(0x6a);
    DisplayActionBuilder_addIntArg(this_00,*(int *)((int)this + 0x14));
    DisplayActionBuilder_addCStringArg(this_00,acStack_1397);
    (**(code **)(*(int *)this + 0x154))(this_00);
  }
  if (*(int *)((int)this + 0x2f0) == -1) {
    Game_logAction(this,"Sending \'%s\' to player %d",&local_1398);
  }
  else if (*(int *)((int)this + 0x2f0) == playerID) {
    Game_logAction(this,"%s",&local_1398);
  }
  ExceptionList = local_c;
  return;
}

