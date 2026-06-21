// addr: 0x014b62f0
// name: FUN_014b62f0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_014b62f0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  char local_3ec [1000];
  uint local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Send Login Challenge\n",0x15);
  thunk_FUN_0140c290(param_2);
  if (*(uint *)(param_1 + 0x1c) < 0x10) {
    iVar2 = param_1 + 8;
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
  }
  _sprintf(local_3ec,"Challenge: %s\n",iVar2);
  pcVar3 = local_3ec;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
  if (*(char *)(param_1 + 0x3c) == '\0') {
    uVar4 = 0xf;
    pcVar3 = "Use MD5: false\n";
  }
  else {
    uVar4 = 0xe;
    pcVar3 = "Use MD5: true\n";
  }
  FUN_01241650(pcVar3,uVar4);
  return;
}

