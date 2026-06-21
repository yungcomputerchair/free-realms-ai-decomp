// addr: 0x01522260
// name: UserDataCommandRespondPlayerAvatars_printDebug
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void UserDataCommandRespondPlayerAvatars_printDebug(void * this, void * out)
    */

void __thiscall UserDataCommandRespondPlayerAvatars_printDebug(void *this,void *out)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  char local_3ec [1000];
  uint local_4;
  
                    /* Prints player avatar response rows after verifying avatar id, enabled,
                       selected, and date-time vectors have matching sizes; otherwise prints their
                       sizes as an error diagnostic. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("UserData Command Respond Player Avatars\n",0x28);
  FUN_0140c290(out);
  if (*(int *)((int)this + 0x10) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 2;
  }
  iVar3 = *(int *)((int)this + 0x20);
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0x24) - iVar3 >> 2;
  }
  if (iVar5 == iVar2) {
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 0x24) - iVar3 >> 2;
    }
    iVar3 = *(int *)((int)this + 0x30);
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0x34) - iVar3 >> 2;
    }
    if (iVar5 == iVar2) {
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 0x34) - iVar3 >> 2;
      }
      if (*(int *)((int)this + 0x40) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 0x44) - *(int *)((int)this + 0x40) >> 2;
      }
      if (iVar5 == iVar3) {
        uVar6 = 0;
        while( true ) {
          if (*(int *)((int)this + 0x10) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 2;
          }
          if (iVar5 <= (int)uVar6) break;
          _sprintf(local_3ec,"----- Index %d -----\n",uVar6);
          pcVar4 = local_3ec;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          FUN_01241650(local_3ec,(int)pcVar4 - (int)(local_3ec + 1));
          if ((*(int *)((int)this + 0x10) == 0) ||
             ((uint)(*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 2) <= uVar6)) {
            FUN_00d83c2d();
          }
          _sprintf(local_3ec,"mAvatarIDs: %d\n",
                   *(undefined4 *)(*(int *)((int)this + 0x10) + uVar6 * 4));
          pcVar4 = local_3ec;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          FUN_01241650(local_3ec,(int)pcVar4 - (int)(local_3ec + 1));
          if ((*(int *)((int)this + 0x20) == 0) ||
             ((uint)(*(int *)((int)this + 0x24) - *(int *)((int)this + 0x20) >> 2) <= uVar6)) {
            FUN_00d83c2d();
          }
          _sprintf(local_3ec,"mEnabled: %d\n",
                   *(undefined4 *)(*(int *)((int)this + 0x20) + uVar6 * 4));
          pcVar4 = local_3ec;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          FUN_01241650(local_3ec,(int)pcVar4 - (int)(local_3ec + 1));
          if ((*(int *)((int)this + 0x30) == 0) ||
             ((uint)(*(int *)((int)this + 0x34) - *(int *)((int)this + 0x30) >> 2) <= uVar6)) {
            FUN_00d83c2d();
          }
          _sprintf(local_3ec,"mSelected: %d\n",
                   *(undefined4 *)(*(int *)((int)this + 0x30) + uVar6 * 4));
          pcVar4 = local_3ec;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          FUN_01241650(local_3ec,(int)pcVar4 - (int)(local_3ec + 1));
          if ((*(int *)((int)this + 0x40) == 0) ||
             ((uint)(*(int *)((int)this + 0x44) - *(int *)((int)this + 0x40) >> 2) <= uVar6)) {
            FUN_00d83c2d();
          }
          _sprintf(local_3ec,"mDateTime: %d\n",
                   *(undefined4 *)(*(int *)((int)this + 0x40) + uVar6 * 4));
          pcVar4 = local_3ec;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          FUN_01241650(local_3ec,(int)pcVar4 - (int)(local_3ec + 1));
          uVar6 = uVar6 + 1;
        }
        return;
      }
    }
  }
  FUN_01241650("ERROR in output string, uneven vector sizes!\n",0x2d);
  if (*(int *)((int)this + 0x10) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 2;
  }
  _sprintf(local_3ec,"mAvatarIDs: %d\n",iVar5);
  pcVar4 = local_3ec;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar4 - (int)(local_3ec + 1));
  if (*(int *)((int)this + 0x20) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((int)this + 0x24) - *(int *)((int)this + 0x20) >> 2;
  }
  _sprintf(local_3ec,"mEnabled: %d\n",iVar5);
  pcVar4 = local_3ec;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar4 - (int)(local_3ec + 1));
  if (*(int *)((int)this + 0x30) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((int)this + 0x34) - *(int *)((int)this + 0x30) >> 2;
  }
  _sprintf(local_3ec,"mSelected: %d\n",iVar5);
  pcVar4 = local_3ec;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar4 - (int)(local_3ec + 1));
  if (*(int *)((int)this + 0x40) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((int)this + 0x44) - *(int *)((int)this + 0x40) >> 2;
  }
  _sprintf(local_3ec,"mDateTime: %d\n",iVar5);
  pcVar4 = local_3ec;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar4 - (int)(local_3ec + 1));
  return;
}

