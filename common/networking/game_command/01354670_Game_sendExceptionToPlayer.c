// addr: 0x01354670
// name: Game_sendExceptionToPlayer
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void Game_sendExceptionToPlayer(void * this, void * exception) */

void __thiscall Game_sendExceptionToPlayer(void *this,void *exception)

{
  bool bVar1;
  int iVar2;
  void *handle;
  void *this_00;
  void *pvStack_b0;
  __time64_t local_ac;
  undefined1 local_a4 [148];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Handles a nonfatal Exception by filling a missing player id, optionally
                       showing local error UI, then packaging and sending a FatalError game command
                       to the player. Evidence comes from Exception player/fatal accessors and
                       construction of opcode 0x2d sent through the Game vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167d899;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_01b839d8 ^ (uint)&pvStack_b0);
  ExceptionList = &local_c;
  iVar2 = Exception_getPlayerID(exception);
  if (iVar2 == 0) {
    Exception_setPlayerID(exception,*(int *)((int)this + 0x13c));
  }
  Game_logException(this,exception);
  __time64(&local_ac);
  bVar1 = Exception_getSuppressFatalError(exception);
  if ((!bVar1) && (*(char *)((int)this + 0x2a8) == '\x01')) {
    GameCommand_FatalError_ctor(this);
    local_4 = 0;
    set_field_4(local_a4,*(uint *)((int)this + 0x13c));
    GameCommand_FatalError_assignException(local_a4,exception);
    GameCommand_FatalError_compressErrorText(this);
    DisplayActionManager_ensureSingleton();
    CommandHandle_releaseIfPresent(handle);
    local_4 = 0xffffffff;
    GameCommand_FatalError_dtor(local_a4);
  }
  pvStack_b0 = Mem_Alloc(0x14);
  local_4 = 1;
  if (pvStack_b0 == (void *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)FUN_012f9eb0();
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x14);
  DisplayActionBuilder_addIntArg(this_00,0x2d);
  DisplayActionBuilder_addBoolArg(this_00,true);
  (**(code **)(*(int *)this + 0x154))(this_00);
  *(undefined1 *)((int)this + 0x1d8) = 1;
  ExceptionList = local_10;
  return;
}

