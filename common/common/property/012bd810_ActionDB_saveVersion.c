// addr: 0x012bd810
// name: ActionDB_saveVersion
// subsystem: common/common/property
// source (binary assert): common/common/property/ActionDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionDB_saveVersion(int version) */

void __thiscall ActionDB_saveVersion(void *this,int version)

{
  int iVar1;
  int iVar2;
  int *key;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *tree;
  void **outPair;
  void *unused1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *key_00;
  uint *key_01;
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
  
  iVar6 = version;
                    /* Writes dirty/new actions for a version into compressed 'actionStorage' and
                       persists 'actionIndex'. Evidence: ActionDB.cpp, literals 'actionStorage' and
                       'actionIndex', calls ActionDB_compressActionToBuffer, and iterates action
                       maps before storage writes. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166df53;
  local_c = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff54);
  ExceptionList = &local_c;
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ActionDB.cpp",0x1a1);
  }
  PacketBuffer_init(local_7c);
  uStack_4 = 0;
  PacketBuffer_init(auStack_90);
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  __time64((__time64_t *)&uStack_5c);
  Serializer_appendInteger(auStack_90,iVar6);
  Serializer_appendInteger(auStack_90,uStack_5c);
  Serializer_appendInteger(local_7c,iVar6);
  Serializer_appendInteger(local_7c,uStack_5c);
  iStack_9c = RuleSetNameMap_findOrInsert(&version);
  iStack_98 = **(int **)(iStack_9c + 4);
  while( true ) {
    iVar2 = iStack_98;
    iVar1 = iStack_9c;
    iVar3 = RuleSetNameMap_findOrInsert(&version);
    iStack_18 = *(int *)(iVar3 + 4);
    if ((iVar1 == 0) || (iVar1 != iVar3)) {
      FUN_00d83c2d();
    }
    if (iVar2 == iStack_18) break;
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    uVar8 = *(uint *)(iVar2 + 0xc);
    uStack_94 = uVar8;
    pvVar4 = (void *)ActionDB_getAction(uVar8,iVar6);
    if (pvVar4 != (void *)0x0) {
      uVar5 = PacketBuffer_getSize(local_7c);
      uStack_68 = ActionDB_compressActionToBuffer(pvVar4,local_7c);
      iVar6 = PacketBuffer_getSize(local_7c);
      Serializer_appendInteger(auStack_90,uVar8);
      Serializer_appendInteger(auStack_90,iVar6 - uVar5);
      Serializer_appendInteger(auStack_90,uStack_68);
      Serializer_appendInteger(auStack_90,uVar5);
    }
    key_01 = &uStack_94;
    outPair = &pvStack_64;
    pvVar4 = (void *)ActionDB_ActionTree_findOrInsert(&version);
    ActionDB_ActionTree_lowerBound(pvVar4,outPair,(int *)key_01);
    pvVar7 = (void *)ActionDB_ActionTree_findOrInsert(&version);
    unused1 = pvStack_64;
    pvVar4 = *(void **)((int)pvVar7 + 4);
    if ((pvStack_64 == (void *)0x0) || (pvStack_64 != pvVar7)) {
      FUN_00d83c2d();
    }
    if (pvStack_60 != pvVar4) {
      tree = aiStack_14;
      pvVar4 = pvStack_60;
      pvVar7 = (void *)ActionDB_ActionTree_findOrInsert(&version);
      ActionDB_Tree_eraseNode(pvVar7,tree,unused1,pvVar4,key);
    }
    StdRbTreeIterator32_advance(&iStack_9c);
    iVar6 = version;
  }
  iStack_9c = ActionDB_ActionTree_findOrInsert(&version);
  iStack_98 = **(int **)(iStack_9c + 4);
  while( true ) {
    iVar2 = iStack_98;
    iVar1 = iStack_9c;
    iVar3 = ActionDB_ActionTree_findOrInsert(&version);
    iVar6 = *(int *)(iVar3 + 4);
    if ((iVar1 == 0) || (iVar1 != iVar3)) {
      FUN_00d83c2d();
    }
    if (iVar2 == iVar6) break;
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    pvVar4 = *(void **)(iVar2 + 0x10);
    if (pvVar4 != (void *)0x0) {
      uVar8 = PacketBuffer_getSize(local_7c);
      uStack_94 = ActionDB_compressActionToBuffer(pvVar4,local_7c);
      iVar6 = PacketBuffer_getSize(local_7c);
      uVar5 = FUN_01321f20();
      Serializer_appendInteger(auStack_90,uVar5);
      Serializer_appendInteger(auStack_90,iVar6 - uVar8);
      Serializer_appendInteger(auStack_90,uStack_94);
      Serializer_appendInteger(auStack_90,uVar8);
    }
    PropertyTreeIterator15_increment(&iStack_9c);
  }
  uStack_20 = 0xf;
  uStack_24 = 0;
  uStack_34 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_38,"actionStorage",0xd);
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  puVar9 = IntToRecordMap_getOrInsert((void *)((int)this + 0x10),&version,key);
  key_00 = abStack_38;
  (**(code **)(*(int *)*puVar9 + 0xc))(key_00,local_7c);
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
             "actionIndex",0xb);
  local_c = (void *)CONCAT31(local_c._1_3_,3);
  puVar9 = IntToRecordMap_getOrInsert((void *)((int)this + 0x10),&uStack_4,(int *)key_00);
  (**(code **)(*(int *)*puVar9 + 0xc))(&uStack_5c,&iStack_98);
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

