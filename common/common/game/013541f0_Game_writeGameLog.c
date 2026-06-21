// addr: 0x013541f0
// name: Game_writeGameLog
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Game_writeGameLog(void *param_1,char *param_2)

{
  FILE *_File;
  uint uVar1;
  int iVar2;
  char local_7d4 [1000];
  char local_3ec [1000];
  uint local_4;
  
                    /* Conditionally appends a formatted variadic message to wa_game_%d.log, emits
                       an AI move-ahead marker when appropriate, flushes/closes the file, and
                       mirrors the message through the normal game log path. Evidence is the
                       'wa_game_%d.log' filename string and many Game_* callers. */
  local_4 = DAT_01b839d8 ^ (uint)local_7d4;
  if ((((*(char *)((int)param_1 + 0x14d) != '\0') && (*(char *)((int)param_1 + 0x318) == '\0')) ||
      (*(int *)((int)param_1 + 300) != 0)) && (*(char *)((int)param_1 + 0x389) != '\0')) {
    _sprintf(local_3ec,"wa_game_%d.log",*(undefined4 *)((int)param_1 + 100));
    _File = _fopen(local_3ec,"a+");
    if (_File != (FILE *)0x0) {
      if (((*(char *)((int)param_1 + 0x130) != '\0') &&
          (*(void **)((int)param_1 + 0x68) != (void *)0x0)) &&
         (uVar1 = get_field_8(*(void **)((int)param_1 + 0x68)), uVar1 != 0)) {
        get_field_8(*(void **)((int)param_1 + 0x68));
        iVar2 = GamePlayer_getPlayerId();
        if (iVar2 == 2) {
          FUN_0110b7f3("# AI player move ahead!\n",_File);
        }
      }
      __vsnprintf(local_7d4,1000,param_2,&stack0x0000000c);
      FUN_0110b7f3(local_7d4,_File);
      _fputc(10,_File);
      _fflush(_File);
      _fclose(_File);
      Game_logGeneral(param_1,local_7d4,_File);
    }
  }
  return;
}

