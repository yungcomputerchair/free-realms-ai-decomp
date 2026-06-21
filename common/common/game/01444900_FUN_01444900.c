// addr: 0x01444900
// name: FUN_01444900
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_01444900(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char local_3ec [1000];
  uint local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Send Password Login Command\n",0x1c);
  thunk_FUN_0140c290(param_2);
  if (*(uint *)(param_1 + 0x1c) < 0x10) {
    iVar3 = param_1 + 8;
  }
  else {
    iVar3 = *(int *)(param_1 + 8);
  }
  _sprintf(local_3ec,"Username: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(uint *)(param_1 + 0x38) < 0x10) {
    iVar3 = param_1 + 0x24;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x24);
  }
  _sprintf(local_3ec,"Password: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(uint *)(param_1 + 0x60) < 0x10) {
    iVar3 = param_1 + 0x4c;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x4c);
  }
  _sprintf(local_3ec,"Platform: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(uint *)(param_1 + 0x7c) < 0x10) {
    iVar3 = param_1 + 0x68;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x68);
  }
  _sprintf(local_3ec,"Match Challenge Key: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(uint *)(param_1 + 0x9c) < 0x10) {
    iVar3 = param_1 + 0x88;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x88);
  }
  _sprintf(local_3ec,"Login Client: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(uint *)(param_1 + 0xb8) < 0x10) {
    iVar3 = param_1 + 0xa4;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xa4);
  }
  _sprintf(local_3ec,"Locale: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(uint *)(param_1 + 0xd4) < 0x10) {
    iVar3 = param_1 + 0xc0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc0);
  }
  _sprintf(local_3ec,"CharacterName: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(uint *)(param_1 + 0xf0) < 0x10) {
    iVar3 = param_1 + 0xdc;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xdc);
  }
  _sprintf(local_3ec,"CharacterID: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(uint *)(param_1 + 0x10c) < 0x10) {
    param_1 = param_1 + 0xf8;
  }
  else {
    param_1 = *(int *)(param_1 + 0xf8);
  }
  _sprintf(local_3ec,"Ticket: %s\n",param_1);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

