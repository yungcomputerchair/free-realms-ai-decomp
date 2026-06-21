// addr: 0x013b3130
// name: FUN_013b3130
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_013b3130(void *param_1,void *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 in_stack_fffffbec;
  char local_3ec [1000];
  uint local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650();
  AccountCommand_dump(param_1,param_2);
  _sprintf(local_3ec,"GroupID: %d\n",*(undefined4 *)((int)param_1 + 8));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650();
  _sprintf(local_3ec,"RoleType: %d\n",*(undefined4 *)((int)param_1 + 0xc));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650();
  if (*(uint *)((int)param_1 + 0x28) < 0x10) {
    iVar4 = (int)param_1 + 0x14;
  }
  else {
    iVar4 = *(int *)((int)param_1 + 0x14);
  }
  _sprintf(local_3ec,"Password: %s\n",iVar4);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650();
  if (*(uint *)((int)param_1 + 0x54) < 0x10) {
    iVar4 = (int)param_1 + 0x40;
  }
  else {
    iVar4 = *(int *)((int)param_1 + 0x40);
  }
  _sprintf(local_3ec,"AccountName: %s\n",iVar4);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650();
  uVar3 = FUN_01310560();
  _sprintf(local_3ec,"Properties: %d of them\n",uVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650();
  _sprintf(local_3ec,"Gender: %d\n",*(undefined4 *)((int)param_1 + 0x58));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650();
  puVar5 = (undefined4 *)((int)param_1 + 0x5c);
  puVar6 = (undefined4 *)&stack0xfffffbec;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  _sprintf(local_3ec,"CharacterID: %d\n",in_stack_fffffbec);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650();
  return;
}

