// addr: 0x0136c400
// name: Game_dispatchCommandToPlayer
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void Game_dispatchCommandToPlayer(void * this, int playerId_, void * command)
    */

void __thiscall Game_dispatchCommandToPlayer(void *this,int playerId_,void *command)

{
  int iVar1;
  int unaff_retaddr;
  undefined1 *puVar2;
  void *local_30;
  void *local_2c;
  undefined1 local_28;
  uint local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Serializes/describes a GameCommand and dispatches it to a single player when
                       command sending is enabled, with special handling for ReadyForStartOfGame and
                       local/server flags. Releases the command when it will not be sent. */
  puStack_8 = &LAB_016804c8;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_01b839d8 ^ (uint)&local_30);
  ExceptionList = &local_c;
  local_30 = command;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = 0;
  local_4 = 0;
  (**(code **)(*(int *)command + 0x4c))(&local_2c,DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  if (*(char *)((int)this + 0x388) != '\0') {
    if (unaff_retaddr == 0) {
      Game_dispatchCommandToAllPlayers(this,command);
      goto joined_r0x0136c488;
    }
    if ((*(char *)((int)this + 0x14e) != '\0') &&
       (iVar1 = FUN_00d8d382(command,0,&NetworkCommand::RTTI_Type_Descriptor,
                             &GameCommand_ReadyForStartOfGame::RTTI_Type_Descriptor,0), iVar1 == 0))
    {
      (*(code *)**(undefined4 **)command)(1);
      goto joined_r0x0136c488;
    }
    if ((*(char *)((int)this + 0x1d8) == '\0') && (*(char *)((int)this + 0x318) == '\0')) {
      puVar2 = &stack0xffffffcc;
      Game_getOrCreateCommandQueueEntry(&stack0x00000000);
      FUN_013619a0(puVar2);
      goto joined_r0x0136c488;
    }
  }
  (*(code *)**(undefined4 **)command)(1);
joined_r0x0136c488:
  if (local_18 < 0x10) {
    ExceptionList = local_10;
    return;
  }
  puStack_8 = (undefined1 *)0xffffffff;
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}

