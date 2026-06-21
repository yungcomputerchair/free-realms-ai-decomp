// addr: 0x012bccd0
// name: ActionDB_openStorageForVersion
// subsystem: common/common/property
// source (binary assert): common/common/property/ActionDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void ActionDB_openStorageForVersion(void * this, int version) */

void __thiscall ActionDB_openStorageForVersion(void *this,int version)

{
  void *this_00;
  int *key;
  undefined4 *extraout_EAX;
  void *pvVar1;
  undefined4 *puVar2;
  bool *pbVar3;
  int *key_00;
  void *pvStack_58;
  int local_54;
  undefined1 uStack_50;
  void *pvStack_4c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined1 local_34 [4];
  undefined1 auStack_30 [4];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_2c [4];
  void *pvStack_28;
  undefined4 uStack_18;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Initializes DBM storage for an action database version if it is not already
                       present, using ./data/archetypes and a .dat suffix, then resets the
                       loaded/index flags. Evidence: ActionDB.cpp assert 'v != -1', creates a 0x58
                       storage object, calls open on the version and clears a byte flag. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166de0b;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&pvStack_58;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff98);
  ExceptionList = &local_c;
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ActionDB.cpp",0x284);
  }
  local_54 = *(int *)((int)this + 0x14);
  this_00 = (void *)((int)this + 0x10);
  RBTreeInt_lowerBound_flag15_alt(this_00,local_34,&version,key);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != this_00)) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] == local_54) {
    uStack_14 = 0xf;
    uStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_2c,"./data/archetypes",0x11);
    iStack_4 = 0;
    pvStack_58 = Mem_Alloc(0x58);
    iStack_4._0_1_ = 1;
    if (pvStack_58 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = DirDBM_ctor(pvStack_58);
    }
    iStack_4._0_1_ = 0;
    puVar2 = IntToRecordMap_getOrInsert(this_00,&version,key);
    *puVar2 = pvVar1;
    puVar2 = IntToRecordMap_getOrInsert(this_00,&version,key);
    key_00 = (int *)version;
    (**(code **)(*(int *)*puVar2 + 0x28))();
    uStack_3c = 0xf;
    uStack_40 = 0;
    uStack_50 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_54,".dat",4
              );
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
    puVar2 = IntToRecordMap_getOrInsert(this_00,&stack0x00000000,key_00);
    (**(code **)(*(int *)*puVar2 + 4))(auStack_30,&local_54);
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    if (0xf < uStack_38) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_4c);
    }
    uStack_38 = 0xf;
    uStack_3c = 0;
    pvStack_4c = (void *)((uint)pvStack_4c & 0xffffff00);
    RuleSetNameMap_findOrInsert(&version);
    ActionDB_ActionTree_findOrInsert(&version);
    pbVar3 = IntToBoolMap_getOrInsert((void *)((int)this + 4),&version,key);
    *pbVar3 = false;
    iStack_4 = 0xffffffff;
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28);
    }
  }
  ExceptionList = local_c;
  return;
}

