// addr: 0x0151d400
// name: UserDataCommandRespondPlayerMatches_writeDebugString
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void UserDataCommandRespondPlayerMatches_writeDebugString(void * this, void *
   out) */

void __thiscall UserDataCommandRespondPlayerMatches_writeDebugString(void *this,void *out)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  void *this_00;
  int iVar7;
  int iVar8;
  uint index;
  void **ppvVar9;
  undefined1 *puVar10;
  undefined1 auStack_484 [4];
  int local_480;
  int local_47c;
  void *local_478;
  int local_474;
  void *local_470 [2];
  void *local_468;
  void *local_464;
  void *local_460;
  void *local_45c;
  void *local_458;
  void *local_454;
  undefined1 local_450 [8];
  undefined1 local_448 [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_440 [32];
  uint local_420;
  undefined4 local_410;
  undefined4 local_40c;
  char local_408 [1004];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
                    /* Writes a diagnostic dump for a Respond Player Matches user-data command,
                       validating that all per-match vectors have equal sizes before printing
                       opponent names, icons, maps, scores, health, experience, and award IDs.
                       Evidence is the header 'UserData Command Respond Player Matches' and the many
                       mOpponentNames/mAwardIDs field labels. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_016b8226;
  local_14 = ExceptionList;
  local_1c = DAT_01b839d8 ^ (uint)auStack_484;
  ExceptionList = &local_14;
  local_470[0] = this;
  FUN_01241650("UserData Command Respond Player Matches\n",0x28);
  FUN_0140c290(out);
  local_474 = (int)this + 0xc;
  if (*(int *)((int)this + 0x10) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) / 0x1c;
  }
  local_480 = (int)this + 0x1c;
  if (*(int *)((int)this + 0x20) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)((int)this + 0x24) - *(int *)((int)this + 0x20)) / 0x1c;
  }
  if (iVar8 == iVar2) {
    if (*(int *)((int)this + 0x20) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (*(int *)((int)this + 0x24) - *(int *)((int)this + 0x20)) / 0x1c;
    }
    local_47c = (int)this + 0x2c;
    iVar2 = 0;
    if (*(int *)((int)this + 0x30) != 0) {
      iVar2 = (*(int *)((int)this + 0x34) - *(int *)((int)this + 0x30)) / 0x1c;
    }
    if (iVar8 == iVar2) {
      iVar8 = 0;
      if (*(int *)((int)this + 0x30) != 0) {
        iVar8 = (*(int *)((int)this + 0x34) - *(int *)((int)this + 0x30)) / 0x1c;
      }
      iVar2 = *(int *)((int)this + 0x40);
      local_45c = (void *)((int)this + 0x3c);
      if (iVar2 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int)this + 0x44) - iVar2 >> 2;
      }
      if (iVar8 == iVar7) {
        if (iVar2 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)((int)this + 0x44) - iVar2 >> 2;
        }
        iVar2 = *(int *)((int)this + 0x50);
        local_458 = (void *)((int)this + 0x4c);
        if (iVar2 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)((int)this + 0x54) - iVar2 >> 2;
        }
        if (iVar8 == iVar7) {
          if (iVar2 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)((int)this + 0x54) - iVar2 >> 2;
          }
          pvVar3 = (void *)((int)this + 0x5c);
          if (*(int *)((int)this + 0x60) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)((int)this + 100) - *(int *)((int)this + 0x60) >> 2;
          }
          local_454 = pvVar3;
          if (iVar8 == iVar2) {
            local_468 = (void *)((int)this + 0x6c);
            local_478 = (void *)StdVector_size(local_468);
            pvVar3 = (void *)StdVector_size(pvVar3);
            if (pvVar3 == local_478) {
              local_464 = (void *)((int)this + 0x7c);
              iVar8 = StdVector_size(local_464);
              iVar2 = StdVector_size(local_468);
              if (iVar2 == iVar8) {
                local_460 = (void *)((int)this + 0x8c);
                iVar8 = StdVector_size(local_460);
                iVar2 = StdVector_size(local_464);
                if (iVar2 == iVar8) {
                  local_478 = (void *)((int)this + 0x9c);
                  iVar8 = StdVector_size(local_478);
                  iVar2 = StdVector_size(local_460);
                  if (iVar2 == iVar8) {
                    pvVar3 = (void *)((int)this + 0xac);
                    iVar8 = StdVector16_size_005db4ff(pvVar3);
                    iVar2 = StdVector_size(local_478);
                    this = local_470[0];
                    if (iVar2 == iVar8) {
                      index = 0;
                      iVar8 = FUN_01230e00();
                      if (iVar8 < 1) {
                        ExceptionList = local_14;
                        return;
                      }
                      do {
                        _sprintf(local_408,"----- Index %d -----\n",index);
                        FUN_01241fc0(local_408);
                        iVar8 = FUN_01230e30(index);
                        if (*(uint *)(iVar8 + 0x18) < 0x10) {
                          iVar8 = iVar8 + 4;
                        }
                        else {
                          iVar8 = *(int *)(iVar8 + 4);
                        }
                        _sprintf(local_408,"mOpponentNames: %s\n",iVar8);
                        FUN_01241fc0(local_408);
                        iVar8 = FUN_01230e30(index);
                        if (*(uint *)(iVar8 + 0x18) < 0x10) {
                          iVar8 = iVar8 + 4;
                        }
                        else {
                          iVar8 = *(int *)(iVar8 + 4);
                        }
                        _sprintf(local_408,"mIcon: %s\n",iVar8);
                        FUN_01241fc0(local_408);
                        iVar8 = FUN_01230e30(index);
                        if (*(uint *)(iVar8 + 0x18) < 0x10) {
                          iVar8 = iVar8 + 4;
                        }
                        else {
                          iVar8 = *(int *)(iVar8 + 4);
                        }
                        _sprintf(local_408,"mMap: %s\n",iVar8);
                        FUN_01241fc0(local_408);
                        puVar4 = StdVector_atElementPtr4(local_45c,index);
                        _sprintf(local_408,"mWinLossType: %d\n",*puVar4);
                        FUN_01241fc0(local_408);
                        puVar4 = StdVector_atElementPtr4(local_458,index);
                        _sprintf(local_408,"mMatchType: %d\n",*puVar4);
                        FUN_01241fc0(local_408);
                        puVar4 = StdVector_atElementPtr4(local_454,index);
                        _sprintf(local_408,"mPlayerHealth: %d\n",*puVar4);
                        FUN_01241fc0(local_408);
                        puVar4 = StdVector_atElementPtr4(local_468,index);
                        _sprintf(local_408,"mOpponentHealth: %d\n",*puVar4);
                        FUN_01241fc0(local_408);
                        puVar4 = StdVector_atElementPtr4(local_464,index);
                        _sprintf(local_408,"mPlayerVictoryPoints: %d\n",*puVar4);
                        FUN_01241fc0(local_408);
                        puVar4 = StdVector_atElementPtr4(local_460,index);
                        _sprintf(local_408,"mOpponentVictoryPoints: %d\n",*puVar4);
                        FUN_01241fc0(local_408);
                        puVar4 = StdVector_atElementPtr4(local_478,index);
                        _sprintf(local_408,"mExperienceGained: %d\n",*puVar4);
                        FUN_01241fc0(local_408);
                        local_40c = 0xf;
                        local_410 = 0;
                        local_420 = local_420 & 0xffffff00;
                        local_c = 0;
                        ppvVar9 = local_470;
                        StdVector16_at_005db533(pvVar3,index);
                        FUN_0041f3a1(ppvVar9);
                        puVar10 = local_450;
                        StdVector16_at_005db533(pvVar3,index);
                        uVar5 = FUN_0041f5d2(puVar10);
                        cVar1 = FUN_00416f86(uVar5);
                        while (cVar1 != '\0') {
                          puVar10 = local_448;
                          StdVector16_at_005db533(pvVar3,index);
                          uVar5 = FUN_0041f3a1(puVar10);
                          cVar1 = FUN_0040ba1f(uVar5);
                          pcVar6 = "";
                          if (cVar1 == '\0') {
                            pcVar6 = ",";
                          }
                          uVar5 = std::
                                  basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                                  basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                            (local_440,pcVar6);
                          local_c._0_1_ = 1;
                          StdString_appendSubstring(uVar5,0,0xffffffff);
                          local_c = (uint)local_c._1_3_ << 8;
                          FUN_0041f1d7();
                          puVar4 = (undefined4 *)FUN_01240910();
                          _sprintf(local_408,"%d",*puVar4);
                          FUN_01241fc0(local_408);
                          FUN_01240940();
                          puVar10 = local_450;
                          StdVector16_at_005db533(pvVar3,index);
                          uVar5 = FUN_0041f5d2(puVar10);
                          cVar1 = FUN_00416f86(uVar5);
                        }
                        this_00 = (void *)StdVector16_at_005db533(pvVar3,index);
                        iVar8 = StdVector_size(this_00);
                        _sprintf(local_408,"mAwardIDs: Size(%d) Awards(%s)\n",iVar8);
                        FUN_01241fc0(local_408);
                        local_c = 0xffffffff;
                        FUN_0041f1d7();
                        index = index + 1;
                        iVar8 = FUN_01230e00();
                      } while ((int)index < iVar8);
                      ExceptionList = local_14;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_01241650("ERROR in output string, uneven vector sizes!\n",0x2d);
  iVar8 = 0;
  if (*(int *)(local_474 + 4) != 0) {
    iVar8 = (*(int *)(local_474 + 8) - *(int *)(local_474 + 4)) / 0x1c;
  }
  _sprintf(local_408,"mOpponentNames: %d\n",iVar8);
  pcVar6 = local_408;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_408,(int)pcVar6 - (int)(local_408 + 1));
  iVar8 = 0;
  if (*(int *)(local_480 + 4) != 0) {
    iVar8 = (*(int *)(local_480 + 8) - *(int *)(local_480 + 4)) / 0x1c;
  }
  _sprintf(local_408,"mIcon: %d\n",iVar8);
  pcVar6 = local_408;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_408,(int)pcVar6 - (int)(local_408 + 1));
  iVar8 = 0;
  if (*(int *)((int)this + 0x30) != 0) {
    iVar8 = (*(int *)((int)this + 0x34) - *(int *)((int)this + 0x30)) / 0x1c;
  }
  _sprintf(local_408,"mMap: %d\n",iVar8);
  pcVar6 = local_408;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_408,(int)pcVar6 - (int)(local_408 + 1));
  if (*(int *)((int)this + 0x40) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)((int)this + 0x44) - *(int *)((int)this + 0x40) >> 2;
  }
  _sprintf(local_408,"mWinLossType: %d\n",iVar8);
  pcVar6 = local_408;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_408,(int)pcVar6 - (int)(local_408 + 1));
  if (*(int *)((int)this + 0x50) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)((int)this + 0x54) - *(int *)((int)this + 0x50) >> 2;
  }
  _sprintf(local_408,"mMatchType: %d\n",iVar8);
  pcVar6 = local_408;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_408,(int)pcVar6 - (int)(local_408 + 1));
  if (*(int *)((int)this + 0x60) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)((int)this + 100) - *(int *)((int)this + 0x60) >> 2;
  }
  _sprintf(local_408,"mPlayerHealth: %d\n",iVar8);
  pcVar6 = local_408;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_408,(int)pcVar6 - (int)(local_408 + 1));
  if (*(int *)((int)this + 0x70) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)((int)this + 0x74) - *(int *)((int)this + 0x70) >> 2;
  }
  _sprintf(local_408,"mOpponentHealth: %d\n",iVar8);
  pcVar6 = local_408;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_408,(int)pcVar6 - (int)(local_408 + 1));
  if (*(int *)((int)this + 0x80) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)((int)this + 0x84) - *(int *)((int)this + 0x80) >> 2;
  }
  _sprintf(local_408,"mPlayerVictoryPoints: %d\n",iVar8);
  pcVar6 = local_408;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_408,(int)pcVar6 - (int)(local_408 + 1));
  if (*(int *)((int)this + 0x90) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)((int)this + 0x94) - *(int *)((int)this + 0x90) >> 2;
  }
  _sprintf(local_408,"mOpponentVictoryPoints: %d\n",iVar8);
  pcVar6 = local_408;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_408,(int)pcVar6 - (int)(local_408 + 1));
  if (*(int *)((int)this + 0xa0) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
  }
  _sprintf(local_408,"mExperienceGained: %d\n",iVar8);
  pcVar6 = local_408;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_408,(int)pcVar6 - (int)(local_408 + 1));
  if (*(int *)((int)this + 0xb0) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)((int)this + 0xb4) - *(int *)((int)this + 0xb0) >> 4;
  }
  _sprintf(local_408,"mAwardIDs: %d\n",iVar8);
  pcVar6 = local_408;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_408,(int)pcVar6 - (int)(local_408 + 1));
  ExceptionList = local_14;
  return;
}

