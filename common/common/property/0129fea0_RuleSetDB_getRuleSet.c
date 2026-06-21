// addr: 0x0129fea0
// name: RuleSetDB_getRuleSet
// subsystem: common/common/property
// source (binary assert): common/common/property/RuleSetDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall RuleSetDB_getRuleSet(void *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  uint size_;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int *key;
  int iVar5;
  void *pvVar6;
  int *extraout_EAX;
  undefined4 *puVar7;
  undefined4 uVar8;
  void *outBuffer;
  char *pcVar9;
  undefined1 *tree;
  void **tree_00;
  void *pvStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [20];
  undefined1 auStack_3c [20];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_28 [4];
  void *pvStack_24;
  undefined4 uStack_14;
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iVar5 = param_3;
                    /* Returns a cached RuleSet by id or loads its compressed payload from
                       'ruleStorage', uncompresses/deserializes it, and returns null when absent.
                       Evidence: RuleSetDB.cpp, 'ruleStorage', zlib error text, index lookup, and
                       cache lookup fallback. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166b393;
  local_c = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff8c);
  ExceptionList = &local_c;
  if (param_3 == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\RuleSetDB.cpp",0xd0);
  }
  RuleSetDB_openStorageForVersion(param_1,iVar5);
  iVar5 = RuleSetIndexMap_findOrInsert(&param_3);
  iStack_60 = *(int *)(iVar5 + 4);
  puVar7 = &param_2;
  tree = auStack_58;
  pvVar6 = (void *)RuleSetIndexMap_findOrInsert(&param_3);
  RBTreeInt_lowerBound_ruleCache(pvVar6,tree,puVar7,key);
  if ((*extraout_EAX == 0) || (*extraout_EAX != iVar5)) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] == iStack_60) {
    puVar7 = &param_2;
    tree_00 = &pvStack_64;
    pvVar6 = (void *)RuleSetNameMap_findOrInsert(&param_3);
    RBTreeInt_lowerBound_flag1d(pvVar6,tree_00,puVar7,key);
    pvVar6 = (void *)RuleSetNameMap_findOrInsert(&param_3);
    iVar5 = *(int *)((int)pvVar6 + 4);
    if ((pvStack_64 == (void *)0x0) || (pvStack_64 != pvVar6)) {
      FUN_00d83c2d();
    }
    iVar3 = iStack_60;
    if (iStack_60 != iVar5) {
      if (pvStack_64 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (iVar3 == *(int *)((int)pvStack_64 + 4)) {
        FUN_00d83c2d();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x10);
      if (iVar3 == *(int *)((int)pvStack_64 + 4)) {
        FUN_00d83c2d();
      }
      piVar1 = (int *)((int)pvStack_64 + 4);
      pvStack_64 = *(void **)(iVar3 + 0x14);
      if (iVar3 == *piVar1) {
        FUN_00d83c2d();
      }
      uVar2 = *(undefined4 *)(iVar3 + 0x18);
      PacketBuffer_init(auStack_50);
      iStack_4 = 0;
      uStack_10 = 0xf;
      uStack_14 = 0;
      pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_28,"ruleStorage",0xb);
      iStack_4._0_1_ = 1;
      puVar7 = IntToRecordMap_getOrInsert((void *)((int)param_1 + 0x1c),&param_3,key);
      cVar4 = (**(code **)(*(int *)*puVar7 + 0x24))(abStack_28,uVar8,uVar2,auStack_50);
      pvVar6 = pvStack_64;
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      if (0xf < uStack_10) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_24);
      }
      uStack_10 = 0xf;
      uStack_14 = 0;
      pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
      if (cVar4 != '\0') {
        size_ = (int)pvStack_64 + 1;
        outBuffer = Mem_Alloc(size_);
        uStack_5c = size_;
        puVar7 = PacketBuffer_identity(auStack_50);
        iVar5 = PacketBuffer_getSize(auStack_50);
        iVar5 = Zlib_inflateBuffer(outBuffer,&uStack_5c,(void *)*puVar7,iVar5);
        if (iVar5 != 0) {
          pcVar9 = "Couldn\'t uncompress an archetype: %d zres: %d";
          uVar8 = param_2;
          WAErrorLog_write("Couldn\'t uncompress an archetype: %d zres: %d");
          FUN_012f5a60("zres == 0","..\\common\\common\\property\\RuleSetDB.cpp",0xf1,pcVar9,uVar8,
                       iVar5);
        }
        PacketBuffer_init(auStack_3c);
        iStack_4 = CONCAT31(iStack_4._1_3_,2);
        RawBuffer_assign(auStack_3c,outBuffer,pvVar6,(uint)key);
                    /* WARNING: Subroutine does not return */
        _free(outBuffer);
      }
      iStack_4 = 0xffffffff;
      RawBuffer_free(auStack_50);
    }
    uVar8 = 0;
  }
  else {
    puVar7 = &param_2;
    pvVar6 = (void *)RuleSetIndexMap_findOrInsert(&param_3);
    puVar7 = RuleSetMap_getOrInsert(pvVar6,puVar7,key);
    uVar8 = *puVar7;
  }
  ExceptionList = local_c;
  return uVar8;
}

