// addr: 0x01406950
// name: TutorialDB_load
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void TutorialDB_load(void * this, bool readOnly) */

void __thiscall TutorialDB_load(void *this,bool readOnly)

{
  int iVar1;
  undefined4 uVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  void *pvVar4;
  char ****path;
  uint uVar5;
  undefined1 auStack_88 [3];
  char local_85;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_84 [4];
  void *local_80;
  undefined4 local_70;
  uint local_6c;
  undefined1 local_68 [20];
  undefined1 local_54 [20];
  undefined1 local_40 [20];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  char ***local_28 [4];
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Lazily opens or creates the tutorial object database, then loads
                       initial_values and the two tutorial deck records deck__1/deck__2. */
  puStack_8 = &LAB_0169155c;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)auStack_88;
  ExceptionList = &local_c;
  if (*(char *)((int)this + 0x14) != '\x01') {
    local_14 = 0xf;
    local_18 = 0;
    local_28[0] = (char ***)((uint)local_28[0] & 0xffffff00);
    local_4 = 0;
    iVar1 = PathConfig_getDefaultBasePath(DAT_01b839d8 ^ (uint)&stack0xffffff68);
    if (iVar1 == 0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_2c,"data/tutorial",0xd);
    }
    else {
      uVar2 = PathConfig_getDefaultBasePath("data/tutorial");
      pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_01249400(local_84,uVar2);
      local_4._0_1_ = 1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_2c,pbVar3,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        _free(local_80);
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80 = (void *)((uint)local_80 & 0xffffff00);
    }
    if (*(char *)((int)this + 0x15) == '\0') {
      path = (char ****)local_28[0];
      if (local_14 < 0x10) {
        path = local_28;
      }
      pvVar4 = OdbFile_openExisting((char *)path,readOnly);
    }
    else {
      pvVar4 = OdbFile_createNew();
    }
    *(void **)((int)this + 4) = pvVar4;
    PacketBuffer_init(local_40);
    local_4._0_1_ = 2;
    local_6c = 0xf;
    local_70 = 0;
    local_80 = (void *)((uint)local_80 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_84,"initial_values",0xe);
    local_4._0_1_ = 3;
    uVar5 = TutorialDB_loadRecordToBuffer(this,local_40,local_84);
    local_85 = (char)uVar5;
    local_4._0_1_ = 2;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      _free(local_80);
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80 = (void *)((uint)local_80 & 0xffffff00);
    if (local_85 != '\0') {
      FUN_012faf70(local_40,(int)this + 0x38);
    }
    PacketBuffer_init(local_68);
    local_4._0_1_ = 4;
    local_6c = 0xf;
    local_70 = 0;
    local_80 = (void *)((uint)local_80 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_84,"deck__1",7);
    local_4._0_1_ = 5;
    uVar5 = TutorialDB_loadRecordToBuffer(this,local_68,local_84);
    local_85 = (char)uVar5;
    local_4._0_1_ = 4;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      _free(local_80);
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80 = (void *)((uint)local_80 & 0xffffff00);
    if (local_85 != '\0') {
      FUN_01302e20(local_68,(int)this + 0x3c);
    }
    PacketBuffer_init(local_54);
    local_4._0_1_ = 6;
    local_6c = 0xf;
    local_70 = 0;
    local_80 = (void *)((uint)local_80 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_84,"deck__2",7);
    local_4._0_1_ = 7;
    uVar5 = TutorialDB_loadRecordToBuffer(this,local_54,local_84);
    local_85 = (char)uVar5;
    local_4._0_1_ = 6;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      _free(local_80);
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80 = (void *)((uint)local_80 & 0xffffff00);
    if (local_85 != '\0') {
      FUN_01302e20(local_54,(int)this + 0x40);
    }
    *(undefined1 *)((int)this + 0x14) = 1;
    local_4._0_1_ = 4;
    RawBuffer_free(local_54);
    local_4._0_1_ = 2;
    RawBuffer_free(local_68);
    local_4 = (uint)local_4._1_3_ << 8;
    RawBuffer_free(local_40);
    local_4 = 0xffffffff;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28[0]);
    }
  }
  ExceptionList = local_c;
  return;
}

