// addr: 0x014efdc0
// name: NetworkCommand_UpdateLag_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void NetworkCommand_UpdateLag_debugPrint(void * this, void * out) */

void __thiscall NetworkCommand_UpdateLag_debugPrint(void *this,void *out)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int local_3f8;
  int local_3f4;
  int local_3f0;
  char local_3ec [1000];
  uint local_4;
  
                    /* Debug-prints an update-lag network command by walking a tree/list of account
                       id to lag entries. */
  local_4 = DAT_01b839d8 ^ (uint)&local_3f8;
  FUN_01241650("Update Lag Network Command\n",0x1b);
  FUN_0140c290(out);
  local_3f4 = **(int **)((int)this + 8);
  local_3f8 = (int)this + 4;
  local_3f0 = local_3f8;
  while( true ) {
    iVar4 = local_3f4;
    iVar3 = local_3f8;
    iVar2 = *(int *)(local_3f0 + 4);
    if ((local_3f8 == 0) || (local_3f8 != local_3f0)) {
      FUN_00d83c2d();
    }
    if (iVar4 == iVar2) break;
    if (iVar3 == 0) {
      FUN_00d83c2d();
    }
    if (iVar4 == *(int *)(iVar3 + 4)) {
      FUN_00d83c2d();
      if (iVar4 == *(int *)(iVar3 + 4)) {
        FUN_00d83c2d();
      }
    }
    _sprintf(local_3ec,"AccountID: %d, lag: %d\n",*(undefined4 *)(iVar4 + 0xc));
    pcVar5 = local_3ec;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(local_3ec,(int)pcVar5 - (int)(local_3ec + 1));
    FUN_004d21f9();
  }
  return;
}

