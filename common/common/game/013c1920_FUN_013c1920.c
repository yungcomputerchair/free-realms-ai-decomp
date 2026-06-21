// addr: 0x013c1920
// name: FUN_013c1920
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_013c1920(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char local_3ec [1000];
  uint local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Register Username Login Command\n",0x20);
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
  if (*(char *)(param_1 + 0x3c) == '\0') {
    uVar4 = 0x11;
    pcVar2 = "Migrating: False\n";
  }
  else {
    uVar4 = 0x10;
    pcVar2 = "Migrating: True\n";
  }
  FUN_01241650(pcVar2,uVar4);
  if (*(char *)(param_1 + 0x3d) == '\0') {
    uVar4 = 0xf;
    pcVar2 = "Creating: False";
  }
  else {
    uVar4 = 0xe;
    pcVar2 = "Creating: True";
  }
  FUN_01241650(pcVar2,uVar4);
  return;
}

