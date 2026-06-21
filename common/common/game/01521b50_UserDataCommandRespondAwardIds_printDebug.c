// addr: 0x01521b50
// name: UserDataCommandRespondAwardIds_printDebug
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void UserDataCommandRespondAwardIds_printDebug(void * this, void * out) */

void __thiscall UserDataCommandRespondAwardIds_printDebug(void *this,void *out)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char local_3ec [1000];
  uint local_4;
  
                    /* Prints the UserData DB Awards response header and iterates the mAwardIDs
                       vector, outputting each award id by index. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("UserData Command Respond DB Awards\n",0x23);
  FUN_0140c290(out);
  if (*(int *)((int)this + 0x10) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 2;
  }
  _sprintf(local_3ec,"mAwardIDs: Size(%d)\n",iVar2);
  pcVar3 = local_3ec;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
  uVar5 = 0;
  while( true ) {
    iVar2 = *(int *)((int)this + 0x10);
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((int)this + 0x14) - iVar2 >> 2;
    }
    if (iVar4 <= (int)uVar5) break;
    if ((iVar2 == 0) || ((uint)(*(int *)((int)this + 0x14) - iVar2 >> 2) <= uVar5)) {
      FUN_00d83c2d();
    }
    _sprintf(local_3ec,"----- Index %d: %d\n",uVar5);
    pcVar3 = local_3ec;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
    uVar5 = uVar5 + 1;
  }
  return;
}

