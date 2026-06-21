// addr: 0x01524990
// name: UserDataCommandRespondNewsMessage_printDebug
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void UserDataCommandRespondNewsMessage_printDebug(void * this, void * out) */

void __thiscall UserDataCommandRespondNewsMessage_printDebug(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char local_3ec [1000];
  uint local_4;
  
                    /* Prints news message response rows containing headlines, callbacks, params,
                       and values after validating the corresponding string vectors have equal
                       lengths. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("UserData Command Respond News Message\n",0x26);
  FUN_0140c290(out);
  if (*(int *)((int)this + 0xc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*(int *)((int)this + 0x10) - *(int *)((int)this + 0xc)) / 0x1c;
  }
  iVar3 = 0;
  if (*(int *)((int)this + 0x1c) != 0) {
    iVar3 = (*(int *)((int)this + 0x20) - *(int *)((int)this + 0x1c)) / 0x1c;
  }
  if (iVar4 == iVar3) {
    if (*(int *)((int)this + 0x1c) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)((int)this + 0x20) - *(int *)((int)this + 0x1c)) / 0x1c;
    }
    iVar3 = 0;
    if (*(int *)((int)this + 0x2c) != 0) {
      iVar3 = (*(int *)((int)this + 0x30) - *(int *)((int)this + 0x2c)) / 0x1c;
    }
    if (iVar4 == iVar3) {
      if (*(int *)((int)this + 0x2c) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)((int)this + 0x30) - *(int *)((int)this + 0x2c)) / 0x1c;
      }
      iVar3 = 0;
      if (*(int *)((int)this + 0x3c) != 0) {
        iVar3 = (*(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c)) / 0x1c;
      }
      if (iVar4 == iVar3) {
        uVar5 = 0;
        iVar4 = 0;
        while( true ) {
          iVar3 = 0;
          if (*(int *)((int)this + 0xc) != 0) {
            iVar3 = (*(int *)((int)this + 0x10) - *(int *)((int)this + 0xc)) / 0x1c;
          }
          if (iVar3 <= (int)uVar5) break;
          _sprintf(local_3ec,"----- Index %d -----\n",uVar5);
          pcVar2 = local_3ec;
          do {
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
          FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
          if ((*(int *)((int)this + 0xc) == 0) ||
             ((uint)((*(int *)((int)this + 0x10) - *(int *)((int)this + 0xc)) / 0x1c) <= uVar5)) {
            FUN_00d83c2d();
          }
          iVar3 = *(int *)((int)this + 0xc) + iVar4;
          if (*(uint *)(iVar3 + 0x18) < 0x10) {
            iVar3 = iVar3 + 4;
          }
          else {
            iVar3 = *(int *)(iVar3 + 4);
          }
          _sprintf(local_3ec,"mHeadlines: %s\n",iVar3);
          pcVar2 = local_3ec;
          do {
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
          FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
          if ((*(int *)((int)this + 0x1c) == 0) ||
             ((uint)((*(int *)((int)this + 0x20) - *(int *)((int)this + 0x1c)) / 0x1c) <= uVar5)) {
            FUN_00d83c2d();
          }
          iVar3 = *(int *)((int)this + 0x1c) + iVar4;
          if (*(uint *)(iVar3 + 0x18) < 0x10) {
            iVar3 = iVar3 + 4;
          }
          else {
            iVar3 = *(int *)(iVar3 + 4);
          }
          _sprintf(local_3ec,"mCallbacks: %s\n",iVar3);
          pcVar2 = local_3ec;
          do {
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
          FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
          if ((*(int *)((int)this + 0x2c) == 0) ||
             ((uint)((*(int *)((int)this + 0x30) - *(int *)((int)this + 0x2c)) / 0x1c) <= uVar5)) {
            FUN_00d83c2d();
          }
          iVar3 = *(int *)((int)this + 0x2c) + iVar4;
          if (*(uint *)(iVar3 + 0x18) < 0x10) {
            iVar3 = iVar3 + 4;
          }
          else {
            iVar3 = *(int *)(iVar3 + 4);
          }
          _sprintf(local_3ec,"mParams: %s\n",iVar3);
          pcVar2 = local_3ec;
          do {
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
          FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
          if ((*(int *)((int)this + 0x3c) == 0) ||
             ((uint)((*(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c)) / 0x1c) <= uVar5)) {
            FUN_00d83c2d();
          }
          iVar3 = *(int *)((int)this + 0x3c) + iVar4;
          if (*(uint *)(iVar3 + 0x18) < 0x10) {
            iVar3 = iVar3 + 4;
          }
          else {
            iVar3 = *(int *)(iVar3 + 4);
          }
          _sprintf(local_3ec,"mValues: %s\n",iVar3);
          pcVar2 = local_3ec;
          do {
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
          FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
          uVar5 = uVar5 + 1;
          iVar4 = iVar4 + 0x1c;
        }
        return;
      }
    }
  }
  FUN_01241650("ERROR in output string, uneven vector sizes!\n",0x2d);
  iVar4 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    iVar4 = (*(int *)((int)this + 0x10) - *(int *)((int)this + 0xc)) / 0x1c;
  }
  _sprintf(local_3ec,"mHeadlines: %d\n",iVar4);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  iVar4 = 0;
  if (*(int *)((int)this + 0x1c) != 0) {
    iVar4 = (*(int *)((int)this + 0x20) - *(int *)((int)this + 0x1c)) / 0x1c;
  }
  _sprintf(local_3ec,"mCallbacks: %d\n",iVar4);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  iVar4 = 0;
  if (*(int *)((int)this + 0x2c) != 0) {
    iVar4 = (*(int *)((int)this + 0x30) - *(int *)((int)this + 0x2c)) / 0x1c;
  }
  _sprintf(local_3ec,"mParams: %d\n",iVar4);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  iVar4 = 0;
  if (*(int *)((int)this + 0x3c) != 0) {
    iVar4 = (*(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c)) / 0x1c;
  }
  _sprintf(local_3ec,"mValues: %d\n",iVar4);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

