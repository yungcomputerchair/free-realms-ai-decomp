// addr: 0x012ce250
// name: Lobby_deleteAdjournedGame
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall Lobby_deleteAdjournedGame(int param_1,void *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  void *handle;
  char *pcVar5;
  void *pvVar6;
  void *map;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar7;
  char ****ppppcVar8;
  int key_;
  int iVar9;
  void *local_440;
  int local_43c;
  undefined1 local_438 [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_430 [4];
  char ***apppcStack_42c [4];
  undefined4 uStack_41c;
  uint uStack_418;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_414 [4];
  char ***apppcStack_410 [4];
  undefined4 uStack_400;
  uint uStack_3fc;
  char acStack_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Handles deleting an adjourned lobby match, builds
                       LobbyCommand_DeleteAdjournedGame, and queues display actions such as "You
                       have deleted adjourned game Match%d." or a remote player message. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166f9e8;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_440;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xfffffbb0;
  ExceptionList = &local_c;
  local_440 = param_2;
  local_43c = param_3;
  piVar3 = (int *)FUN_012cc4d0(local_438,&local_440);
  iVar4 = *piVar3;
  local_43c = *(int *)(param_1 + 0x34);
  iVar9 = piVar3[1];
  if ((iVar4 == 0) || (iVar4 != param_1 + 0x30)) {
    FUN_00d83c2d(uVar2);
  }
  if (iVar9 != local_43c) {
    FUN_012cdc90(local_438,iVar4,iVar9);
  }
  iVar9 = 0;
  DisplayActionManager_ensureSingleton();
  iVar4 = FUN_012d08e0();
  if (iVar4 != 0) {
    iVar9 = FUN_013a3480();
  }
  DisplayActionManager_ensureSingleton();
  if (iVar9 == param_4) {
    uVar2 = 0;
    iVar4 = FUN_012d0920();
    if (iVar4 != 0) {
      FUN_012d0920();
      uVar2 = FUN_01301f30();
    }
    LobbyCommand_DeleteAdjournedGame_ctor(abStack_430);
    iStack_4 = 0;
    PropertyRange_setStart(abStack_430,iVar9);
    FUN_013d91b0(param_2);
    FUN_013d9190(param_3);
    set_field_10(abStack_430,uVar2);
    CommandHandle_releaseIfPresent(handle);
    uStack_3fc = 0xf;
    uStack_400 = 0;
    apppcStack_410[0] = (char ***)((uint)apppcStack_410[0] & 0xffffff00);
    iStack_4._0_1_ = 1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_414,"You have deleted adjourned game Match%d.",0x28);
    ppppcVar8 = (char ****)apppcStack_410[0];
    if (uStack_3fc < 0x10) {
      ppppcVar8 = apppcStack_410;
    }
    __snprintf(acStack_3f8,1000,(char *)ppppcVar8,param_2);
    pcVar5 = acStack_3f8;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_414,acStack_3f8,(int)pcVar5 - (int)(acStack_3f8 + 1));
    local_440 = Mem_Alloc(0x14);
    iStack_4._0_1_ = 2;
    if (local_440 == (void *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = (void *)FUN_012f9eb0();
    }
    iStack_4._0_1_ = 1;
    FUN_012f8c70(2);
    DisplayActionBuilder_addIntArg(pvVar6,uVar2);
    DisplayActionBuilder_addStringArg(pvVar6,abStack_414);
    FUN_012d3550(pvVar6);
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    if (0xf < uStack_3fc) {
                    /* WARNING: Subroutine does not return */
      _free(apppcStack_410[0]);
    }
    uStack_3fc = 0xf;
    uStack_400 = 0;
    apppcStack_410[0] = (char ***)((uint)apppcStack_410[0] & 0xffffff00);
    iStack_4 = 0xffffffff;
    LobbyCommand_DeleteAdjournedGame_dtor(abStack_430);
  }
  else {
    LobbyAccount_ensureSingleton();
    pvVar6 = LobbyServiceAccountMap_findValue(map,key_);
    if (pvVar6 != (void *)0x0) {
      uStack_418 = 0xf;
      uStack_41c = 0;
      apppcStack_42c[0] = (char ***)((uint)apppcStack_42c[0] & 0xffffff00);
      iStack_4 = 3;
      pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_013a6540(abStack_414);
      iStack_4._0_1_ = 4;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_430,pbVar7,0,0xffffffff);
      iStack_4._0_1_ = 3;
      if (0xf < uStack_3fc) {
                    /* WARNING: Subroutine does not return */
        _free(apppcStack_410[0]);
      }
      uStack_3fc = 0xf;
      uStack_400 = 0;
      apppcStack_410[0] = (char ***)((uint)apppcStack_410[0] & 0xffffff00);
      FUN_01241650(" has deleted adjourned game Match%d.",0x24);
      ppppcVar8 = (char ****)apppcStack_42c[0];
      if (uStack_418 < 0x10) {
        ppppcVar8 = apppcStack_42c;
      }
      __snprintf(acStack_3f8,1000,(char *)ppppcVar8,param_2);
      pcVar5 = acStack_3f8;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_430,acStack_3f8,(int)pcVar5 - (int)(acStack_3f8 + 1));
      local_440 = Mem_Alloc(0x14);
      iStack_4._0_1_ = 5;
      if (local_440 == (void *)0x0) {
        pvVar6 = (void *)0x0;
      }
      else {
        pvVar6 = (void *)FUN_012f9eb0();
      }
      iStack_4 = CONCAT31(iStack_4._1_3_,3);
      FUN_012f8c70(2);
      FUN_012d0920();
      iVar4 = FUN_01301f30();
      DisplayActionBuilder_addIntArg(pvVar6,iVar4);
      DisplayActionBuilder_addStringArg(pvVar6,abStack_430);
      FUN_012d3550(pvVar6);
      iStack_4 = 0xffffffff;
      if (0xf < uStack_418) {
                    /* WARNING: Subroutine does not return */
        _free(apppcStack_42c[0]);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

