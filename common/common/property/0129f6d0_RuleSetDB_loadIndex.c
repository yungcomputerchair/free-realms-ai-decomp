// addr: 0x0129f6d0
// name: RuleSetDB_loadIndex
// subsystem: common/common/property
// source (binary assert): common/common/property/RuleSetDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RuleSetDB_loadIndex(void * this, int version) */

void __thiscall RuleSetDB_loadIndex(void *this,int version)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *extraout_EAX;
  bool *pbVar6;
  undefined4 *puVar7;
  int iVar8;
  void *this_00;
  int iVar9;
  void *pvVar10;
  undefined1 *map;
  int *result;
  uint uStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  void *local_58;
  int iStack_54;
  int local_50 [2];
  undefined1 auStack_48 [12];
  int iStack_3c;
  void *pvStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Ensures a RuleSetDB version is open, reads the serialized 'ruleIndex' record,
                       rebuilds the in-memory rule index, marks it loaded, and updates the next rule
                       id. Evidence: RuleSetDB.cpp literal 'ruleIndex', calls
                       RuleSetDB_openStorageForVersion, tree insertion, and next-id update via max
                       id + 1. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166b2c0;
  local_c = ExceptionList;
  piVar5 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff84);
  ExceptionList = &local_c;
  local_58 = this;
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\RuleSetDB.cpp",0x67);
  }
  iVar8 = *(int *)((int)this + 0x14);
  pvVar10 = (void *)((int)this + 0x10);
  RBTreeInt_lowerBound_flag15(pvVar10,local_50,&version,piVar5);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != pvVar10)) {
    FUN_00d83c2d();
  }
  if ((extraout_EAX[1] != iVar8) &&
     (pbVar6 = IntToBoolMap_getOrInsert(pvVar10,&version,piVar5), *pbVar6 == true)) {
    ExceptionList = local_c;
    return;
  }
  PacketBuffer_init(auStack_20);
  iStack_4 = 0;
  RuleSetDB_openStorageForVersion(this,version);
  uStack_24 = 0xf;
  uStack_28 = 0;
  pvStack_38 = (void *)((uint)pvStack_38 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&iStack_3c,
             "ruleIndex",9);
  iStack_4._0_1_ = 1;
  puVar7 = IntToRecordMap_getOrInsert((void *)((int)this + 0x1c),&version,piVar5);
  cVar3 = (**(code **)(*(int *)*puVar7 + 0x14))(&iStack_3c,auStack_20);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  if (uStack_24 < 0x10) {
    uStack_24 = 0xf;
    uStack_28 = 0;
    pvStack_38 = (void *)((uint)pvStack_38 & 0xffffff00);
    if (cVar3 != '\0') {
      iVar8 = RuleSetNameMap_findOrInsert(&version);
      StdRbTreeNode32_eraseRightChain(*(void **)(*(int *)(iVar8 + 4) + 4));
      *(int *)(*(int *)(iVar8 + 4) + 4) = *(int *)(iVar8 + 4);
      *(undefined4 *)(iVar8 + 8) = 0;
      *(undefined4 *)*(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar8 + 4);
      *(int *)(*(int *)(iVar8 + 4) + 8) = *(int *)(iVar8 + 4);
      Deserializer_readInteger(auStack_20,&iStack_54);
      Deserializer_readInteger(auStack_20,local_50);
      bVar4 = PacketBuffer_hasRemaining(auStack_20);
      if (bVar4) {
        do {
          Deserializer_readInteger(auStack_20,&iStack_60);
          Deserializer_readInteger(auStack_20,(int *)&uStack_6c);
          Deserializer_readInteger(auStack_20,&iStack_68);
          Deserializer_readInteger(auStack_20,&iStack_64);
          iStack_34 = iStack_68;
          result = &iStack_3c;
          iStack_30 = iStack_64;
          map = auStack_48;
          pvStack_38 = (void *)uStack_6c;
          iStack_3c = iStack_60;
          this_00 = (void *)RuleSetNameMap_findOrInsert(&version);
          IntKeyMap_insertIfAbsent(this_00,map,result,piVar5);
          bVar4 = PacketBuffer_hasRemaining(auStack_20);
        } while (bVar4);
      }
      pbVar6 = IntToBoolMap_getOrInsert(pvVar10,&version,piVar5);
      *pbVar6 = true;
      iStack_60 = RuleSetNameMap_findOrInsert(&version);
      iStack_5c = **(int **)(iStack_60 + 4);
      while( true ) {
        iVar2 = iStack_5c;
        iVar1 = iStack_60;
        iVar9 = RuleSetNameMap_findOrInsert(&version);
        iVar8 = *(int *)(iVar9 + 4);
        if ((iVar1 == 0) || (iVar1 != iVar9)) {
          FUN_00d83c2d();
        }
        if (iVar2 == iVar8) break;
        if (iVar1 == 0) {
          FUN_00d83c2d();
        }
        if (iVar2 == *(int *)(iVar1 + 4)) {
          FUN_00d83c2d();
        }
        pvVar10 = (void *)((int)local_58 + 4);
        piVar5 = IntDefaultMap_getOrInsert(pvVar10,&version);
        if (*piVar5 < *(int *)(iVar2 + 0xc)) {
          if (iVar2 == *(int *)(iVar1 + 4)) {
            FUN_00d83c2d();
          }
          iVar8 = *(int *)(iVar2 + 0xc);
          piVar5 = IntDefaultMap_getOrInsert(pvVar10,&version);
          *piVar5 = iVar8 + 1;
        }
        StdRbTreeIterator32_advance(&iStack_60);
      }
    }
    iStack_4 = 0xffffffff;
    RawBuffer_free(auStack_20);
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_38);
}

