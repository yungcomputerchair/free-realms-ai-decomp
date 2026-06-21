// addr: 0x015206f0
// name: FUN_015206f0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_015206f0(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 local_430 [4];
  void *local_42c;
  undefined4 local_41c;
  uint local_418;
  undefined1 local_414 [4];
  void *local_410;
  undefined4 local_400;
  uint local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b86c6;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_430;
  ExceptionList = &local_c;
  FUN_01241650("UserData Command Respond Player Info\n",0x25);
  FUN_0140c290(param_2);
  _sprintf(local_3f8,"mStatus: %d\n",*(undefined4 *)(param_1 + 0xc));
  pcVar2 = local_3f8;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f8,(int)pcVar2 - (int)(local_3f8 + 1));
  _sprintf(local_3f8,"mGamesWon: %d\n",*(undefined4 *)(param_1 + 0x10));
  pcVar2 = local_3f8;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f8,(int)pcVar2 - (int)(local_3f8 + 1));
  _sprintf(local_3f8,"mDisconnectPct: %d\n",*(undefined4 *)(param_1 + 0x14));
  pcVar2 = local_3f8;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f8,(int)pcVar2 - (int)(local_3f8 + 1));
  _sprintf(local_3f8,"mCurrentXP: %d\n",*(undefined4 *)(param_1 + 0x18));
  pcVar2 = local_3f8;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f8,(int)pcVar2 - (int)(local_3f8 + 1));
  _sprintf(local_3f8,"mTotalXPToLevel: %d\n",*(undefined4 *)(param_1 + 0x1c));
  pcVar2 = local_3f8;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f8,(int)pcVar2 - (int)(local_3f8 + 1));
  _sprintf(local_3f8,"mLevel: %d\n",*(undefined4 *)(param_1 + 0x20));
  pcVar2 = local_3f8;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f8,(int)pcVar2 - (int)(local_3f8 + 1));
  if (*(uint *)(param_1 + 0x4c) < 0x10) {
    iVar3 = param_1 + 0x38;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x38);
  }
  _sprintf(local_3f8,"mName: %s\n",iVar3);
  pcVar2 = local_3f8;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f8,(int)pcVar2 - (int)(local_3f8 + 1));
  local_3fc = 0xf;
  local_400 = 0;
  local_410 = (void *)((uint)local_410 & 0xffffff00);
  local_4 = 0;
  uVar5 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2;
    }
    if (iVar3 <= (int)uVar5) break;
    if (0 < (int)uVar5) {
      FUN_01241650(&DAT_01770384,1);
    }
    if ((*(int *)(param_1 + 0x28) == 0) ||
       ((uint)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2) <= uVar5)) {
      FUN_00d83c2d();
    }
    _sprintf(local_3f8,"%d",*(undefined4 *)(*(int *)(param_1 + 0x28) + uVar5 * 4));
    pcVar2 = local_3f8;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(local_3f8,(int)pcVar2 - (int)(local_3f8 + 1));
    uVar5 = uVar5 + 1;
  }
  FUN_01241650("mSelectedHonors: ",0x11);
  uVar4 = FUN_01249400(local_430,local_414,&DAT_01770548);
  local_4._0_1_ = 1;
  StdString_appendSubstring(uVar4,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < local_418) {
                    /* WARNING: Subroutine does not return */
    _free(local_42c);
  }
  local_418 = 0xf;
  local_41c = 0;
  local_42c = (void *)((uint)local_42c & 0xffffff00);
  local_4 = 0xffffffff;
  if (0xf < local_3fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_410);
  }
  ExceptionList = local_c;
  return;
}

