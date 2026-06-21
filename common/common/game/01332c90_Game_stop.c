// addr: 0x01332c90
// name: Game_stop
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: int Game_stop(void * this) */

int __fastcall Game_stop(void *this)

{
  undefined4 uVar1;
  void *local_3fc;
  undefined1 *puStack_3f8;
  undefined4 local_3f4;
  undefined1 local_3f0 [1000];
  uint local_8;
  
                    /* Logs "STOP CALLED ON THE GAME", writes a "stop" game-log entry, deletes/frees
                       the game object, and returns success. */
  puStack_3f8 = &LAB_0167aec3;
  local_3fc = ExceptionList;
  local_8 = DAT_01b839d8 ^ (uint)local_3f0;
  ExceptionList = &local_3fc;
  local_3f4 = 0;
  Game_logGeneral(this,"STOP CALLED ON THE GAME",local_8);
  uVar1 = Game_writeGameLog(this,"stop\t");
  if (this != (void *)0x0) {
    uVar1 = (*(code *)**(undefined4 **)this)(1);
  }
  ExceptionList = local_3fc;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

