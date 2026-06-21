// addr: 0x01353a90
// name: Game_logGeneralFormatted
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Game_logGeneralFormatted(void *param_1,char *param_2)

{
  char *dest;
  char local_3ec [1000];
  uint local_4;
  
                    /* Formats a printf-style message with vsnprintf and writes it to the Game
                       general log. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  if (*(int *)((int)param_1 + 300) != 0) {
    dest = local_3ec;
    __vsnprintf(dest,1000,param_2,&stack0x0000000c);
    Game_logGeneral(param_1,local_3ec,dest);
  }
  return;
}

