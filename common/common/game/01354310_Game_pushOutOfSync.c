// addr: 0x01354310
// name: Game_pushOutOfSync
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_pushOutOfSync(void * this) */

void __fastcall Game_pushOutOfSync(void *this)

{
  void *pvVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Logs and writes an out-of-sync game-log message, constructs a command/object,
                       and dispatches it through a virtual method. Evidence: strings '#Pushing OUT
                       OF SYNC' and 'Pushing OUT OF SYNC.'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167d82b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Game_logGeneral(this,"Pushing OUT OF SYNC.",DAT_01b839d8 ^ (uint)&stack0xffffffec);
  Game_writeGameLog(this,"#Pushing OUT OF SYNC");
  pvVar1 = Mem_Alloc(0x24);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)GameCommand_OutOfSync_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x3c))();
  ExceptionList = local_c;
  return;
}

