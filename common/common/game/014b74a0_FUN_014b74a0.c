// addr: 0x014b74a0
// name: FUN_014b74a0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_014b74a0(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 unaff_EDI;
  char local_3ec [1000];
  uint local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Respond to Login Challenge\n",0x1b);
  thunk_FUN_0140c290(param_2);
  _sprintf(local_3ec,"Challenge Response:\n",unaff_EDI);
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
  _sprintf(local_3ec,"Locale: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(uint *)(param_1 + 0x54) < 0x10) {
    iVar3 = param_1 + 0x40;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x40);
  }
  _sprintf(local_3ec,"Serial Number: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(uint *)(param_1 + 0x70) < 0x10) {
    iVar3 = param_1 + 0x5c;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x5c);
  }
  _sprintf(local_3ec,"Registration Key: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(uint *)(param_1 + 0x8c) < 0x10) {
    iVar3 = param_1 + 0x78;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x78);
  }
  _sprintf(local_3ec,"Platform: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(uint *)(param_1 + 0xc4) < 0x10) {
    iVar3 = param_1 + 0xb0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xb0);
  }
  _sprintf(local_3ec,"Match Challenge Key: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(uint *)(param_1 + 0xe0) < 0x10) {
    iVar3 = param_1 + 0xcc;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xcc);
  }
  _sprintf(local_3ec,"Login Client %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(uint *)(param_1 + 0xfc) < 0x10) {
    iVar3 = param_1 + 0xe8;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xe8);
  }
  _sprintf(local_3ec,"CharacterName: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(uint *)(param_1 + 0x118) < 0x10) {
    iVar3 = param_1 + 0x104;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x104);
  }
  _sprintf(local_3ec,"CharacterID: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(uint *)(param_1 + 0x134) < 0x10) {
    param_1 = param_1 + 0x120;
  }
  else {
    param_1 = *(int *)(param_1 + 0x120);
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

