// addr: 0x014edd80
// name: AccountCommand_BulkIntroduceAccount_doCommand
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandBulkIntroduceAccount.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: int AccountCommandBulkIntroduceAccount_doCommand(void * this) */

int __fastcall AccountCommand_BulkIntroduceAccount_doCommand(void *this)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  void *this_00;
  int iVar3;
  uint uVar4;
  int extraout_EAX;
  int *piVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piStack_a0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_9c;
  int *piStack_98;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int *piStack_84;
  undefined4 *puStack_7c;
  int *piStack_74;
  int *piStack_70;
  int local_6c;
  int *piStack_68;
  undefined4 *puStack_64;
  int *piStack_60;
  int *local_5c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_58;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_50;
  void *pvStack_4c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_48 [4];
  void *pvStack_44;
  undefined4 uStack_34;
  uint uStack_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_2c [4];
  void *pvStack_28;
  undefined4 uStack_18;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Executes BulkIntroduceAccount by walking parallel vectors of account ids,
                       lobby strings, property ids, and property sets, applying each update and
                       emitting service events. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b16eb;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&piStack_a0;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffff50;
  ExceptionList = &local_c;
  LobbyAccount_ensureSingleton();
  if (extraout_EAX == 0) {
    FUN_012f5a60("accountService",
                 "..\\common\\networking\\account_command\\AccountCommandBulkIntroduceAccount.cpp",
                 0x30,uVar4);
  }
  local_5c = *(int **)((int)this + 0x10);
  iVar8 = (int)this + 8;
  local_6c = iVar8;
  if (local_5c < *(int **)((int)this + 0xc)) {
    FUN_00d83c2d();
  }
  pbStack_50 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                ((int)this + 0x30);
  piVar9 = (int *)((int)this + 0x28);
  piStack_68 = piVar9;
  if (pbStack_50 <
      *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
       ((int)this + 0x2c)) {
    FUN_00d83c2d();
  }
  pbStack_58 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                ((int)this + 0x20);
  piVar7 = (int *)((int)this + 0x18);
  piStack_70 = piVar7;
  if (pbStack_58 <
      *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
       ((int)this + 0x1c)) {
    FUN_00d83c2d();
  }
  piStack_60 = *(int **)((int)this + 0x40);
  iStack_90 = (int)this + 0x38;
  if (piStack_60 < *(int **)((int)this + 0x3c)) {
    FUN_00d83c2d();
  }
  puStack_64 = *(undefined4 **)((int)this + 0x50);
  iStack_8c = (int)this + 0x48;
  if (puStack_64 < *(undefined4 **)((int)this + 0x4c)) {
    FUN_00d83c2d();
  }
  piVar5 = *(int **)((int)this + 0xc);
  if (*(int **)((int)this + 0x10) < piVar5) {
    FUN_00d83c2d();
  }
  pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
            ((int)this + 0x2c);
  piStack_74 = piVar5;
  if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
       ((int)this + 0x30) < pbVar1) {
    FUN_00d83c2d();
  }
  pbVar2 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
            ((int)this + 0x1c);
  pbStack_9c = pbVar1;
  if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
       ((int)this + 0x20) < pbVar2) {
    FUN_00d83c2d();
  }
  piVar5 = *(int **)(iStack_90 + 4);
  pbStack_94 = pbVar2;
  if (*(int **)(iStack_90 + 8) < piVar5) {
    FUN_00d83c2d();
  }
  puStack_7c = *(undefined4 **)(iStack_8c + 4);
  piStack_84 = piVar5;
  if (*(undefined4 **)(iStack_8c + 8) < puStack_7c) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (iVar8 == 0) {
      FUN_00d83c2d();
    }
    piVar5 = piStack_74;
    if (piStack_74 == local_5c) break;
    piVar5 = piVar7;
    piStack_98 = piVar7;
    if (piVar7 == (int *)0x0) {
      piVar5 = (int *)FUN_00d83c2d();
    }
    if (pbStack_94 == pbStack_58) break;
    piVar5 = piVar9;
    piStack_a0 = piVar9;
    if (piVar9 == (int *)0x0) {
      piVar5 = (int *)FUN_00d83c2d();
    }
    if (pbStack_9c == pbStack_50) break;
    iStack_88 = iStack_90;
    if (iStack_90 == 0) {
      FUN_00d83c2d();
    }
    iVar3 = iStack_8c;
    piVar5 = piStack_60;
    if (piStack_84 == piStack_60) break;
    if (iStack_8c == 0) {
      piVar5 = (int *)FUN_00d83c2d();
    }
    if (puStack_7c == puStack_64) break;
    if (iVar8 == 0) {
      FUN_00d83c2d();
    }
    if (*(int **)(iVar8 + 8) <= piStack_74) {
      FUN_00d83c2d();
    }
    iVar8 = *piStack_74;
    if (iVar3 == 0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(iVar3 + 8) <= puStack_7c) {
      FUN_00d83c2d();
    }
    this_00 = (void *)*puStack_7c;
    if (this_00 == (void *)0x0) {
      FUN_012f5a60("propertySet",
                   "..\\common\\networking\\account_command\\AccountCommandBulkIntroduceAccount.cpp"
                   ,0x46);
    }
    piVar9 = piStack_98;
    if (piStack_98 == (int *)0x0) {
      FUN_00d83c2d();
    }
    if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)piVar9[2] <=
        pbStack_94) {
      FUN_00d83c2d();
    }
    uStack_14 = 0xf;
    uStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_2c,pbStack_94,0,0xffffffff);
    iStack_4 = 0;
    if (piStack_a0 == (int *)0x0) {
      FUN_00d83c2d();
    }
    pbVar1 = pbStack_9c;
    if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
        piStack_a0[2] <= pbStack_9c) {
      FUN_00d83c2d();
    }
    uStack_30 = 0xf;
    uStack_34 = 0;
    pvStack_44 = (void *)((uint)pvStack_44 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_48,pbVar1,0,0xffffffff);
    iVar3 = iStack_88;
    iStack_4 = CONCAT31(iStack_4._1_3_,1);
    if (iStack_88 == 0) {
      FUN_00d83c2d();
    }
    piVar9 = piStack_84;
    if (*(int **)(iVar3 + 8) <= piStack_84) {
      FUN_00d83c2d();
    }
    iVar3 = *piVar9;
    pvVar6 = (void *)FUN_012df9f0(iVar8);
    if (pvVar6 == (void *)0x0) {
      FUN_012f5a60("account",
                   "..\\common\\networking\\account_command\\AccountCommandBulkIntroduceAccount.cpp"
                   ,0x4c);
    }
    PropertySet_logProperties(this_00);
    FUN_013a7570(abStack_48);
    Account_setLobbyAttributeString(pvVar6,abStack_2c);
    AccountInfo_setProperty3eValue(pvVar6,iVar3);
    Account_setFullPropertySet(pvVar6,this_00);
    pvStack_4c = Mem_Alloc(0x14);
    iStack_4._0_1_ = 2;
    if (pvStack_4c == (void *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = (void *)FUN_012f9eb0();
    }
    iStack_4._0_1_ = 1;
    FUN_012f8c70(0x10);
    DisplayActionBuilder_addIntArg(pvVar6,iVar8);
    DisplayActionBuilder_addStringArg(pvVar6,abStack_48);
    FUN_012fa0c0(this_00);
    DisplayActionBuilder_addStringArg(pvVar6,abStack_2c);
    DisplayActionManager_ensureSingleton();
    FUN_012d3550(pvVar6);
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_44);
    }
    uStack_30 = 0xf;
    uStack_34 = 0;
    pvStack_44 = (void *)((uint)pvStack_44 & 0xffffff00);
    iStack_4 = 0xffffffff;
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28);
    }
    uStack_14 = 0xf;
    uStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    if (*(int **)(local_6c + 8) <= piStack_74) {
      FUN_00d83c2d();
    }
    piStack_74 = piStack_74 + 1;
    if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
        piStack_70[2] <= pbStack_94) {
      FUN_00d83c2d();
    }
    pbStack_94 = pbStack_94 + 0x1c;
    if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
        piStack_68[2] <= pbStack_9c) {
      FUN_00d83c2d();
    }
    pbStack_9c = pbStack_9c + 0x1c;
    if (*(int **)(iStack_90 + 8) <= piStack_84) {
      FUN_00d83c2d();
    }
    piStack_84 = piStack_84 + 1;
    if (*(undefined4 **)(iStack_8c + 8) <= puStack_7c) {
      FUN_00d83c2d();
    }
    piVar7 = piStack_70;
    iVar8 = local_6c;
    piVar9 = piStack_68;
    puStack_7c = puStack_7c + 1;
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)piVar5 >> 8),1);
}

