// addr: 0x012add30
// name: CollectionDB_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __fastcall CollectionDB_ctor(void *param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  char *pcVar6;
  void *unaff_EBX;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [4];
  void *local_4c;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 local_3c;
  uint local_38;
  void *local_34;
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
  
                    /* Constructs CollectionDB, builds the default data/collections path, and
                       creates a DirDBM-backed database. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166cadb;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_50;
  ExceptionList = &local_c;
  local_30 = param_1;
  FUN_012adbe0(DAT_01b839d8 ^ (uint)&stack0xffffffa4);
  local_4 = 0;
  local_34 = Mem_Alloc(0x58);
  local_4._0_1_ = 1;
  if (local_34 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = DirDBM_ctor(local_34);
  }
  *(void **)((int)param_1 + 0xc) = pvVar2;
  local_14 = &DAT_0000000f;
  local_18 = 0;
  local_28 = 0;
  local_4._0_1_ = 2;
  iVar3 = PathConfig_getDefaultBasePath();
  if (iVar3 == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_2c,"data/collections",0x10);
  }
  else {
    uVar4 = PathConfig_getDefaultBasePath("data/collections");
    pbVar5 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_01249400(local_50,uVar4);
    local_4._0_1_ = 3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_2c,pbVar5,0,0xffffffff);
    local_4._0_1_ = 2;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    local_4c = (void *)((uint)local_4c & 0xffffff00);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  pcVar6 = PTR_DAT_01bb8368;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_50,PTR_DAT_01bb8368,(int)pcVar6 - (int)(PTR_DAT_01bb8368 + 1));
  local_4 = CONCAT31(local_4._1_3_,4);
  (**(code **)(**(int **)((int)param_1 + 0xc) + 4))(local_2c,local_50);
  local_c = (void *)CONCAT31(local_c._1_3_,2);
  if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  uStack_40 = 0xf;
  uStack_44 = 0;
  local_c = (void *)((uint)local_c._1_3_ << 8);
  if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_14;
  return param_1;
}

