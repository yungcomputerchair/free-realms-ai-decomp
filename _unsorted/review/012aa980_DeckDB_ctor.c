// addr: 0x012aa980
// name: DeckDB_ctor
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __fastcall DeckDB_ctor(void *param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar6;
  char *pcVar7;
  void *unaff_EBX;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_54 [4];
  void *local_50;
  undefined4 uStack_48;
  uint uStack_44;
  uint local_40;
  uint local_3c;
  void *local_38;
  void *local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  undefined1 local_28;
  uint uStack_1c;
  undefined4 local_18;
  undefined1 *local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes the deck database, constructs a DirDBM, resolves the default base
                       path, and opens/loads the "data/decks" directory. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166c5c6;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_54;
  ExceptionList = &local_c;
  local_30 = param_1;
  FUN_012aa830(DAT_01b839d8 ^ (uint)&stack0xffffff9c);
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  local_38 = Mem_Alloc(0x58);
  local_4._0_1_ = 2;
  if (local_38 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = DirDBM_ctor(local_38);
  }
  *(void **)((int)param_1 + 0xc) = pvVar3;
  local_14 = &DAT_0000000f;
  local_18 = 0;
  local_28 = 0;
  local_4._0_1_ = 3;
  iVar4 = PathConfig_getDefaultBasePath();
  if (iVar4 == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_2c,"data/decks",10);
  }
  else {
    uVar5 = PathConfig_getDefaultBasePath("data/decks");
    pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_01249400(local_54,uVar5);
    local_4._0_1_ = 4;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_2c,pbVar6,0,0xffffffff);
    local_4._0_1_ = 3;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      _free(local_50);
    }
    local_50 = (void *)((uint)local_50 & 0xffffff00);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = (void *)((uint)local_50 & 0xffffff00);
  pcVar7 = PTR_DAT_01bb834c;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_54,PTR_DAT_01bb834c,(int)pcVar7 - (int)(PTR_DAT_01bb834c + 1));
  local_4 = CONCAT31(local_4._1_3_,5);
  (**(code **)(**(int **)((int)param_1 + 0xc) + 4))(local_2c,local_54);
  local_c = (void *)CONCAT31(local_c._1_3_,3);
  if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  uVar2 = *(uint *)((int)param_1 + 0x18);
  uStack_44 = 0xf;
  uStack_48 = 0;
  if (uVar2 < *(uint *)((int)param_1 + 0x14)) {
    FUN_00d83c2d();
  }
  local_40 = *(uint *)((int)param_1 + 0x14);
  if (*(uint *)((int)param_1 + 0x18) < local_40) {
    FUN_00d83c2d();
  }
  FUN_012a9f10(&local_40,(int)param_1 + 0x10,local_40,(int)param_1 + 0x10,uVar2);
  local_c = (void *)CONCAT31(local_c._1_3_,1);
  if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_14;
  return param_1;
}

