// addr: 0x013b4b80
// name: FUN_013b4b80
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_013b4b80(void *param_1,void *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char local_3f0 [1004];
  uint local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = DAT_01b839d8 ^ (uint)local_3f0;
  FUN_01241650("Send UChat Text Lobby Command\n",0x1e);
  AccountCommand_dump(param_1,param_2);
  if (*(uint *)((int)param_1 + 0x3c) < 0x10) {
    iVar4 = (int)param_1 + 0x28;
  }
  else {
    iVar4 = *(int *)((int)param_1 + 0x28);
  }
  if (*(uint *)((int)param_1 + 0x20) < 0x10) {
    iVar3 = (int)param_1 + 0xc;
  }
  else {
    iVar3 = *(int *)((int)param_1 + 0xc);
  }
  __snprintf(local_3f0,0x3e9,"Source: %s@%s\n",iVar3,iVar4);
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  if (*(uint *)((int)param_1 + 0x74) < 0x10) {
    iVar4 = (int)param_1 + 0x60;
  }
  else {
    iVar4 = *(int *)((int)param_1 + 0x60);
  }
  if (*(uint *)((int)param_1 + 0x58) < 0x10) {
    iVar3 = (int)param_1 + 0x44;
  }
  else {
    iVar3 = *(int *)((int)param_1 + 0x44);
  }
  __snprintf(local_3f0,0x3e9,"Dest: %s@%s\n",iVar3,iVar4);
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  __snprintf(local_3f0,0x3e9,"Is Quick Chat: %d\n",(uint)*(byte *)((int)param_1 + 0x94));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  FUN_01241650("Text: ",6);
  StdString_appendSubstring((int)param_1 + 0x78,0,0xffffffff);
  FUN_01241650(&DAT_01770548,1);
  return;
}

