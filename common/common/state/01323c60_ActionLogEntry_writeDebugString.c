// addr: 0x01323c60
// name: ActionLogEntry_writeDebugString
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionLogEntry_writeDebugString(void * this, void * game) */

void __thiscall ActionLogEntry_writeDebugString(void *this,void *game)

{
  undefined1 local_28 [4];
  void *local_24;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Logs an action id/subid and either NULL or the action name string. Evidence
                       is log strings "Action: %d (%d), %s" and "Action: %d (%d), NULL". */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016790d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x1c) == 0) {
    Game_logGeneral(game,"Action: %d (%d), NULL",*(int *)((int)this + 0x18) >> 0xc);
    ExceptionList = local_c;
    return;
  }
  MessageText_formatWithValueData(local_28);
  local_4 = 0;
  Game_logGeneral(game,"Action: %d (%d), %s",*(int *)((int)this + 0x18) >> 0xc);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return;
}

