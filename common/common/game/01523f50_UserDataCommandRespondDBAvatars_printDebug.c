// addr: 0x01523f50
// name: UserDataCommandRespondDBAvatars_printDebug
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void UserDataCommandRespondDBAvatars_printDebug(void * this, void * out) */

void __thiscall UserDataCommandRespondDBAvatars_printDebug(void *this,void *out)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char local_3ec [1000];
  uint local_4;
  
                    /* Prints DB avatar response rows after checking avatar id, title, icon, and
                       description vectors have equal sizes; prints vector-size diagnostics on
                       mismatch. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("UserData Command Respond DB Avatars\n",0x24);
  FUN_0140c290(out);
  if (*(int *)((int)this + 0x10) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 2;
  }
  iVar2 = 0;
  if (*(int *)((int)this + 0x20) != 0) {
    iVar2 = (*(int *)((int)this + 0x24) - *(int *)((int)this + 0x20)) / 0x1c;
  }
  if (iVar4 == iVar2) {
    if (*(int *)((int)this + 0x20) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)((int)this + 0x24) - *(int *)((int)this + 0x20)) / 0x1c;
    }
    iVar2 = 0;
    if (*(int *)((int)this + 0x30) != 0) {
      iVar2 = (*(int *)((int)this + 0x34) - *(int *)((int)this + 0x30)) / 0x1c;
    }
    if (iVar4 == iVar2) {
      if (*(int *)((int)this + 0x30) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)((int)this + 0x34) - *(int *)((int)this + 0x30)) / 0x1c;
      }
      iVar2 = 0;
      if (*(int *)((int)this + 0x40) != 0) {
        iVar2 = (*(int *)((int)this + 0x44) - *(int *)((int)this + 0x40)) / 0x1c;
      }
      if (iVar4 == iVar2) {
        uVar5 = 0;
        iVar4 = 0;
        while( true ) {
          if (*(int *)((int)this + 0x10) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 2;
          }
          if (iVar2 <= (int)uVar5) break;
          _sprintf(local_3ec,"----- Index %d -----\n",uVar5);
          pcVar3 = local_3ec;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
          if ((*(int *)((int)this + 0x10) == 0) ||
             ((uint)(*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 2) <= uVar5)) {
            FUN_00d83c2d();
          }
          _sprintf(local_3ec,"mAvatarIDs: %d\n",
                   *(undefined4 *)(*(int *)((int)this + 0x10) + uVar5 * 4));
          pcVar3 = local_3ec;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
          if ((*(int *)((int)this + 0x20) == 0) ||
             ((uint)((*(int *)((int)this + 0x24) - *(int *)((int)this + 0x20)) / 0x1c) <= uVar5)) {
            FUN_00d83c2d();
          }
          iVar2 = *(int *)((int)this + 0x20) + iVar4;
          if (*(uint *)(iVar2 + 0x18) < 0x10) {
            iVar2 = iVar2 + 4;
          }
          else {
            iVar2 = *(int *)(iVar2 + 4);
          }
          _sprintf(local_3ec,"mTitles: %s\n",iVar2);
          pcVar3 = local_3ec;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
          if ((*(int *)((int)this + 0x30) == 0) ||
             ((uint)((*(int *)((int)this + 0x34) - *(int *)((int)this + 0x30)) / 0x1c) <= uVar5)) {
            FUN_00d83c2d();
          }
          iVar2 = *(int *)((int)this + 0x30) + iVar4;
          if (*(uint *)(iVar2 + 0x18) < 0x10) {
            iVar2 = iVar2 + 4;
          }
          else {
            iVar2 = *(int *)(iVar2 + 4);
          }
          _sprintf(local_3ec,"mIcons: %s\n",iVar2);
          pcVar3 = local_3ec;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
          if ((*(int *)((int)this + 0x40) == 0) ||
             ((uint)((*(int *)((int)this + 0x44) - *(int *)((int)this + 0x40)) / 0x1c) <= uVar5)) {
            FUN_00d83c2d();
          }
          iVar2 = *(int *)((int)this + 0x40) + iVar4;
          if (*(uint *)(iVar2 + 0x18) < 0x10) {
            iVar2 = iVar2 + 4;
          }
          else {
            iVar2 = *(int *)(iVar2 + 4);
          }
          _sprintf(local_3ec,"mDescriptions: %s\n",iVar2);
          pcVar3 = local_3ec;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
          uVar5 = uVar5 + 1;
          iVar4 = iVar4 + 0x1c;
        }
        return;
      }
    }
  }
  FUN_01241650("ERROR in output string, uneven vector sizes!\n",0x2d);
  if (*(int *)((int)this + 0x10) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 2;
  }
  _sprintf(local_3ec,"mAvatarIDs: %d\n",iVar4);
  pcVar3 = local_3ec;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
  iVar4 = 0;
  if (*(int *)((int)this + 0x20) != 0) {
    iVar4 = (*(int *)((int)this + 0x24) - *(int *)((int)this + 0x20)) / 0x1c;
  }
  _sprintf(local_3ec,"mTitles: %d\n",iVar4);
  pcVar3 = local_3ec;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
  iVar4 = 0;
  if (*(int *)((int)this + 0x30) != 0) {
    iVar4 = (*(int *)((int)this + 0x34) - *(int *)((int)this + 0x30)) / 0x1c;
  }
  _sprintf(local_3ec,"mIcons: %d\n",iVar4);
  pcVar3 = local_3ec;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
  iVar4 = 0;
  if (*(int *)((int)this + 0x40) != 0) {
    iVar4 = (*(int *)((int)this + 0x44) - *(int *)((int)this + 0x40)) / 0x1c;
  }
  _sprintf(local_3ec,"mDescriptions: %d\n",iVar4);
  pcVar3 = local_3ec;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
  return;
}

