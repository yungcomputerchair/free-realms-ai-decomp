// addr: 0x014dc540
// name: GameCommand_LostPlayer_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandLostPlayer.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: int GameCommand_LostPlayer_execute(void * this) */

int __fastcall GameCommand_LostPlayer_execute(void *this)

{
  undefined4 uVar1;
  void *this_00;
  void *pvStack_418;
  undefined1 auStack_414 [4];
  undefined4 **appuStack_410 [3];
  uint uStack_404;
  uint uStack_3fc;
  char acStack_3f8 [996];
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Executes LostPlayer by creating a UI/status notification 'Lost connection to
                       %s', handing it to the game, and notifying the game object about the lost
                       player id. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016ae5b9;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&pvStack_418;
  ExceptionList = &local_c;
  this_00 = (void *)0x0;
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandLostPlayer.cpp",0x62,
                 DAT_01b839d8 ^ (uint)&stack0xfffffbe0);
  }
  GameCommand_execute(this);
  pvStack_418 = Mem_Alloc(0x14);
  uStack_4 = 0;
  if (pvStack_418 != (void *)0x0) {
    this_00 = (void *)FUN_012f9eb0();
  }
  uStack_4 = 0xffffffff;
  FUN_012f8c70(0x14);
  Game_getPlayerDisplayName(auStack_414,*(int *)((int)this + 0x24));
  uStack_4 = 1;
  if (uStack_3fc < 0x10) {
    appuStack_410[0] = appuStack_410;
  }
  _sprintf(acStack_3f8,"Lost connection to %s",appuStack_410[0]);
  DisplayActionBuilder_addCStringArg(this_00,acStack_3f8);
  DisplayActionBuilder_addBoolArg(this_00,false);
  (**(code **)(**(int **)((int)this + 8) + 0x154))(this_00);
  uVar1 = (**(code **)(**(int **)((int)this + 8) + 0x1bc))(*(undefined4 *)((int)this + 0x24));
  local_c = (void *)0xffffffff;
  if (0xf < uStack_404) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_418);
  }
  ExceptionList = pvStack_14;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

