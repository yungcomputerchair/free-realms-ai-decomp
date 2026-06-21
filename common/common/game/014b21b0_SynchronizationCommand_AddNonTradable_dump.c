// addr: 0x014b21b0
// name: SynchronizationCommand_AddNonTradable_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall SynchronizationCommand_AddNonTradable_dump(void *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  void *local_3f4;
  undefined4 local_3f0;
  char local_3ec [1000];
  uint local_4;
  
                    /* Writes a textual dump of an AddNonTradable synchronization command, including
                       account ID, flags/mask, and each instance tuple. The command name string is
                       embedded in the function. */
  local_4 = DAT_01b839d8 ^ (uint)&local_3f4;
  local_3f0 = param_2;
  local_3f4 = param_1;
  FUN_01241650("SynchronizationCommand_AddNonTradable\n",0x26);
  thunk_FUN_0140c290(param_2);
  iVar3 = SynchronizationCommand_UnlockTournament_getAccountID(param_1);
  _sprintf(local_3ec,"AccountID: %d\n",iVar3);
  pcVar4 = local_3ec;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar4 - (int)(local_3ec + 1));
  SynchronizationCommand_UnlockTournament_getFlagMask(param_1);
  iVar3 = SynchronizationCommand_UnlockTournament_getFlags(param_1);
  _sprintf(local_3ec,"Flags: %d [%d]\n",iVar3);
  pcVar4 = local_3ec;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar4 - (int)(local_3ec + 1));
  iVar3 = SynchronizationCommand_UnlockTournament_getInstances();
  uVar6 = *(uint *)(iVar3 + 4);
  if (*(uint *)(iVar3 + 8) < uVar6) {
    FUN_00d83c2d();
  }
  while( true ) {
    iVar5 = SynchronizationCommand_UnlockTournament_getInstances();
    uVar2 = *(uint *)(iVar5 + 8);
    if (uVar2 < *(uint *)(iVar5 + 4)) {
      FUN_00d83c2d();
    }
    if (iVar3 != iVar5) {
      FUN_00d83c2d();
    }
    if (uVar6 == uVar2) break;
    if (*(uint *)(iVar3 + 8) <= uVar6) {
      FUN_00d83c2d();
      if (*(uint *)(iVar3 + 8) <= uVar6) {
        FUN_00d83c2d();
      }
    }
    _sprintf(local_3ec,"Instance: (%d, %d)\n",*(undefined4 *)(uVar6 + 4));
    pcVar4 = local_3ec;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(local_3ec,(int)pcVar4 - (int)(local_3ec + 1));
    if (*(uint *)(iVar3 + 8) <= uVar6) {
      FUN_00d83c2d();
    }
    uVar6 = uVar6 + 0x10;
  }
  return;
}

