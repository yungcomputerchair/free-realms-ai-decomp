// addr: 0x014b9030
// name: FUN_014b9030
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_014b9030(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  char local_3ec [1000];
  uint local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Get Login Challenge\n",0x14);
  thunk_FUN_0140c290(param_2);
  if (*(uint *)(param_1 + 0x1c) < 0x10) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = *(int *)(param_1 + 8);
  }
  _sprintf(local_3ec,"Login name: %s\n",param_1);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

