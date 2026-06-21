// addr: 0x014aea90
// name: FUN_014aea90
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_014aea90(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  char local_3ec [1000];
  uint local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Start Instances Synchronization Command\n",0x28);
  thunk_FUN_0140c290(param_2);
  _sprintf(local_3ec,"Account ID: %d\n",*(undefined4 *)(param_1 + 4));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"Collection Type: %d\n",*(undefined4 *)(param_1 + 8));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"Archetype Count: %d\n",*(undefined4 *)(param_1 + 0xc));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"Collection Mod ID: %d\n",*(undefined4 *)(param_1 + 0x10));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

