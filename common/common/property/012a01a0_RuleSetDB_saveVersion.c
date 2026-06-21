// addr: 0x012a01a0
// name: RuleSetDB_saveVersion
// subsystem: common/common/property
// source (binary assert): common/common/property/RuleSetDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RuleSetDB_saveVersion(int version) */

void __thiscall RuleSetDB_saveVersion(void *this,int version)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *key;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  undefined3 extraout_var;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  undefined3 extraout_var_00;
  undefined4 *puVar10;
  int *piVar11;
  void **tree;
  void *unused1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *key_00;
  uint *outIt;
  int iStack_9c;
  int iStack_98;
  uint uStack_94;
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [16];
  undefined1 local_7c [20];
  uint uStack_68;
  void *pvStack_64;
  void *pvStack_60;
  uint uStack_5c;
  undefined1 uStack_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *pvStack_3c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_38 [4];
  undefined1 uStack_34;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *pvStack_1c;
  int iStack_18;
  int aiStack_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar7 = version;
                    /* Writes loaded and dirty RuleSets for a version to compressed 'ruleStorage'
                       and persists the updated 'ruleIndex'. Evidence: RuleSetDB.cpp literals
                       'ruleStorage' and 'ruleIndex', calls RuleSetDB_compressRuleSet, iterates
                       pending and cached rule maps, then writes both records. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166b3d3;
  local_c = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff54);
  ExceptionList = &local_c;
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\RuleSetDB.cpp",0x120);
  }
  PacketBuffer_init(local_7c);
  uStack_4 = 0;
  PacketBuffer_init(auStack_90);
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  __time64((__time64_t *)&uStack_5c);
  Serializer_appendInteger(auStack_90,iVar7);
  Serializer_appendInteger(auStack_90,uStack_5c);
  Serializer_appendInteger(local_7c,iVar7);
  Serializer_appendInteger(local_7c,uStack_5c);
  iStack_9c = RuleSetNameMap_findOrInsert(&version);
  iStack_98 = **(int **)(iStack_9c + 4);
  while( true ) {
    iVar2 = iStack_98;
    iVar1 = iStack_9c;
    iVar4 = RuleSetNameMap_findOrInsert(&version);
    iStack_18 = *(int *)(iVar4 + 4);
    if ((iVar1 == 0) || (iVar1 != iVar4)) {
      FUN_00d83c2d();
    }
    if (iVar2 == iStack_18) break;
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    uVar9 = *(uint *)(iVar2 + 0xc);
    uStack_94 = uVar9;
    pvVar5 = (void *)RuleSetDB_getRuleSet(uVar9,iVar7);
    if (pvVar5 != (void *)0x0) {
      uVar6 = PacketBuffer_getSize(local_7c);
      bVar3 = RuleSetDB_compressRuleSet(pvVar5,local_7c);
      uStack_68 = CONCAT31(extraout_var,bVar3);
      iVar7 = PacketBuffer_getSize(local_7c);
      Serializer_appendInteger(auStack_90,uVar9);
      Serializer_appendInteger(auStack_90,iVar7 - uVar6);
      Serializer_appendInteger(auStack_90,uStack_68);
      Serializer_appendInteger(auStack_90,uVar6);
    }
    outIt = &uStack_94;
    tree = &pvStack_64;
    pvVar5 = (void *)RuleSetIndexMap_findOrInsert(&version);
    RBTreeInt_lowerBound_ruleCache(pvVar5,tree,outIt,key);
    pvVar8 = (void *)RuleSetIndexMap_findOrInsert(&version);
    unused1 = pvStack_64;
    pvVar5 = *(void **)((int)pvVar8 + 4);
    if ((pvStack_64 == (void *)0x0) || (pvStack_64 != pvVar8)) {
      FUN_00d83c2d();
    }
    if (pvStack_60 != pvVar5) {
      piVar11 = aiStack_14;
      pvVar5 = pvStack_60;
      pvVar8 = (void *)RuleSetIndexMap_findOrInsert(&version);
      RuleSetMap_eraseNode(pvVar8,piVar11,unused1,pvVar5,key);
    }
    StdRbTreeIterator32_advance(&iStack_9c);
    iVar7 = version;
  }
  iStack_9c = RuleSetIndexMap_findOrInsert(&version);
  iStack_98 = **(int **)(iStack_9c + 4);
  while( true ) {
    iVar2 = iStack_98;
    iVar1 = iStack_9c;
    iVar4 = RuleSetIndexMap_findOrInsert(&version);
    iVar7 = *(int *)(iVar4 + 4);
    if ((iVar1 == 0) || (iVar1 != iVar4)) {
      FUN_00d83c2d();
    }
    if (iVar2 == iVar7) break;
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    piVar11 = *(int **)(iVar2 + 0x10);
    if (piVar11 != (int *)0x0) {
      uVar9 = PacketBuffer_getSize(local_7c);
      bVar3 = RuleSetDB_compressRuleSet(piVar11,local_7c);
      uStack_94 = CONCAT31(extraout_var_00,bVar3);
      iVar7 = PacketBuffer_getSize(local_7c);
      uVar6 = (**(code **)(*piVar11 + 0x44))();
      Serializer_appendInteger(auStack_90,uVar6);
      Serializer_appendInteger(auStack_90,iVar7 - uVar9);
      Serializer_appendInteger(auStack_90,uStack_94);
      Serializer_appendInteger(auStack_90,uVar9);
    }
    StdRbTreeIterator24_advance(&iStack_9c);
  }
  uStack_20 = 0xf;
  uStack_24 = 0;
  uStack_34 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_38,"ruleStorage",0xb);
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  puVar10 = IntToRecordMap_getOrInsert((void *)((int)this + 0x1c),&version,key);
  key_00 = abStack_38;
  (**(code **)(*(int *)*puVar10 + 0xc))(key_00,local_7c);
  local_c._0_1_ = 1;
  if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_3c);
  }
  uStack_28 = 0xf;
  uStack_2c = 0;
  pvStack_3c = (void *)((uint)pvStack_3c & 0xffffff00);
  uStack_44 = 0xf;
  uStack_48 = 0;
  uStack_58 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_5c,
             "ruleIndex",9);
  local_c = (void *)CONCAT31(local_c._1_3_,3);
  puVar10 = IntToRecordMap_getOrInsert((void *)((int)this + 0x1c),&uStack_4,(int *)key_00);
  (**(code **)(*(int *)*puVar10 + 0xc))(&uStack_5c,&iStack_98);
  aiStack_14[0] = CONCAT31(aiStack_14[0]._1_3_,1);
  if (0xf < uStack_4c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_60);
  }
  uStack_4c = 0xf;
  uStack_50 = 0;
  pvStack_60 = (void *)((uint)pvStack_60 & 0xffffff00);
  aiStack_14[0] = (uint)aiStack_14[0]._1_3_ << 8;
  RawBuffer_free(&stack0xffffff60);
  aiStack_14[0] = -1;
  RawBuffer_free(auStack_8c);
  ExceptionList = pvStack_1c;
  return;
}

