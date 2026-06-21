// addr: 0x014eec60
// name: AccountCommand_BulkBriefIntroduceAccount_doCommand
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandBulkBriefIntroduceAccount.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: int AccountCommandBulkBriefIntroduceAccount_doCommand(void * this) */

int __fastcall AccountCommand_BulkBriefIntroduceAccount_doCommand(void *this)

{
  int iVar1;
  uint uVar2;
  int extraout_EAX;
  int *piVar3;
  void *pvVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  int *piVar6;
  int *piStack_78;
  int local_74;
  int *piStack_70;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_68;
  int *piStack_60;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_5c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_58;
  int *local_54;
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
  
                    /* Executes BulkBriefIntroduceAccount by iterating parallel vectors of account
                       ids and two lobby attribute strings, updating each account, and emitting an
                       account-service notification. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b18eb;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&piStack_78;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffff78;
  ExceptionList = &local_c;
  LobbyAccount_ensureSingleton();
  if (extraout_EAX == 0) {
    FUN_012f5a60("accountService",
                 "..\\common\\networking\\account_command\\AccountCommandBulkBriefIntroduceAccount.cpp"
                 ,0x23,uVar2);
  }
  local_54 = *(int **)((int)this + 0x10);
  local_74 = (int)this + 8;
  if (local_54 < *(int **)((int)this + 0xc)) {
    FUN_00d83c2d();
  }
  pbStack_5c = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                ((int)this + 0x30);
  piStack_70 = (int *)((int)this + 0x28);
  if (pbStack_5c <
      *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
       ((int)this + 0x2c)) {
    FUN_00d83c2d();
  }
  pbStack_58 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                ((int)this + 0x20);
  piVar6 = (int *)((int)this + 0x18);
  piStack_78 = piVar6;
  if (pbStack_58 <
      *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
       ((int)this + 0x1c)) {
    FUN_00d83c2d();
  }
  piVar3 = *(int **)(local_74 + 4);
  if (*(int **)(local_74 + 8) < piVar3) {
    FUN_00d83c2d();
  }
  pbVar5 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
            ((int)this + 0x2c);
  piStack_60 = piVar3;
  if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
       ((int)this + 0x30) < pbVar5) {
    FUN_00d83c2d();
  }
  pbStack_68 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                ((int)this + 0x1c);
  if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
       ((int)this + 0x20) < pbStack_68) {
    FUN_00d83c2d();
  }
  while( true ) {
    iVar1 = local_74;
    if (local_74 == 0) {
      FUN_00d83c2d();
    }
    piVar3 = piStack_60;
    if (piStack_60 == local_54) break;
    piVar3 = piVar6;
    if (piVar6 == (int *)0x0) {
      piVar3 = (int *)FUN_00d83c2d();
    }
    if (pbStack_68 == pbStack_58) break;
    piVar3 = piStack_70;
    if (piStack_70 == (int *)0x0) {
      piVar3 = (int *)FUN_00d83c2d();
    }
    if (pbVar5 == pbStack_5c) break;
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (*(int **)(iVar1 + 8) <= piStack_60) {
      FUN_00d83c2d();
    }
    piVar6 = piStack_78;
    iVar1 = *piStack_60;
    if (piStack_78 == (int *)0x0) {
      FUN_00d83c2d();
    }
    if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)piVar6[2] <=
        pbStack_68) {
      FUN_00d83c2d();
    }
    uStack_14 = 0xf;
    uStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_2c,pbStack_68,0,0xffffffff);
    piVar6 = piStack_70;
    iStack_4 = 0;
    if (piStack_70 == (int *)0x0) {
      FUN_00d83c2d();
    }
    if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)piVar6[2] <=
        pbVar5) {
      FUN_00d83c2d();
    }
    uStack_30 = 0xf;
    uStack_34 = 0;
    pvStack_44 = (void *)((uint)pvStack_44 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_48,pbVar5,0,0xffffffff);
    iStack_4 = CONCAT31(iStack_4._1_3_,1);
    pvVar4 = (void *)FUN_012df9f0(iVar1);
    if (pvVar4 == (void *)0x0) {
      FUN_012f5a60("account",
                   "..\\common\\networking\\account_command\\AccountCommandBulkBriefIntroduceAccount.cpp"
                   ,0x36);
    }
    Account_setLobbyAttributeString(pvVar4,abStack_2c);
    FUN_013a7570(abStack_48);
    pvStack_4c = Mem_Alloc(0x14);
    iStack_4._0_1_ = 2;
    if (pvStack_4c == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = (void *)FUN_012f9eb0();
    }
    iStack_4._0_1_ = 1;
    FUN_012f8c70(0x43);
    DisplayActionBuilder_addIntArg(pvVar4,iVar1);
    DisplayActionBuilder_addStringArg(pvVar4,abStack_48);
    DisplayActionBuilder_addStringArg(pvVar4,abStack_2c);
    DisplayActionManager_ensureSingleton();
    FUN_012d3550(pvVar4);
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
    if (*(int **)(local_74 + 8) <= piStack_60) {
      FUN_00d83c2d();
    }
    piStack_60 = piStack_60 + 1;
    if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
        piStack_78[2] <= pbStack_68) {
      FUN_00d83c2d();
    }
    pbStack_68 = pbStack_68 + 0x1c;
    if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
        piStack_70[2] <= pbVar5) {
      FUN_00d83c2d();
    }
    pbVar5 = pbVar5 + 0x1c;
    piVar6 = piStack_78;
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)piVar3 >> 8),1);
}

