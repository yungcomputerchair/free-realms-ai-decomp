// addr: 0x013d6310
// name: FUN_013d6310
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_013d6310(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  char local_68 [100];
  uint local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = DAT_01b839d8 ^ (uint)local_68;
  FUN_01241650("Complete Synchronization Command\n",0x21);
  _sprintf(local_68,"DeliveryID: %d\n",*(undefined4 *)(param_1 + 4));
  pcVar2 = local_68;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_68,(int)pcVar2 - (int)(local_68 + 1));
  thunk_FUN_0140c290(param_2);
  return;
}

