// addr: 0x014aef90
// name: FUN_014aef90
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_014aef90(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char local_3ec [1000];
  uint local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("SynchronizationCommand Start Delivery\n",0x26);
  thunk_FUN_0140c290(param_2);
  _sprintf(local_3ec,"Archetype Count: %d\n",*(undefined4 *)(param_1 + 4));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"DeliveryID: %d\n",*(undefined4 *)(param_1 + 8));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"TransactionID: %d\n",*(undefined4 *)(param_1 + 0xc));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(uint *)(param_1 + 0x28) < 0x10) {
    iVar3 = param_1 + 0x14;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x14);
  }
  _sprintf(local_3ec,"TransactionSource: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"TransactionSourceID: %d\n",*(undefined4 *)(param_1 + 0x2c));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"TransactionSourceID2: %d\n",*(undefined4 *)(param_1 + 0x30));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"CollectionModID: %d\n",*(undefined4 *)(param_1 + 0x34));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"Silent: %d\n",(uint)*(byte *)(param_1 + 0x38));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

