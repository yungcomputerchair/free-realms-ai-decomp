// addr: 0x012bcf20
// name: ActionDB_loadIndex
// subsystem: common/common/property
// source (binary assert): common/common/property/ActionDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionDB_loadIndex(void * this, int version) */

void __thiscall ActionDB_loadIndex(void *this,int version)

{
  void *this_00;
  char cVar1;
  bool bVar2;
  int *key;
  undefined4 *extraout_EAX;
  bool *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  void *this_01;
  undefined1 *map;
  int *result;
  uint uStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58 [2];
  int iStack_50;
  int local_4c;
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
  
                    /* Ensures the action DB version storage is open, reads the serialized
                       'actionIndex' record if present, rebuilds the in-memory action index tree,
                       and marks it loaded. Evidence: ActionDB.cpp literal 'actionIndex', assert 'v
                       != -1', and insertion loop from deserialized tuples. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166de80;
  local_c = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff84);
  ExceptionList = &local_c;
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ActionDB.cpp",0xe3);
  }
  local_4c = *(int *)((int)this + 8);
  this_00 = (void *)((int)this + 4);
  RBTreeInt_lowerBound_flag15(this_00,local_58,&version,key);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != this_00)) {
    FUN_00d83c2d();
  }
  if ((extraout_EAX[1] != local_4c) &&
     (pbVar3 = IntToBoolMap_getOrInsert(this_00,&version,key), *pbVar3 == true)) {
    ExceptionList = local_c;
    return;
  }
  PacketBuffer_init(auStack_20);
  iStack_4 = 0;
  ActionDB_openStorageForVersion(this,version);
  uStack_24 = 0xf;
  uStack_28 = 0;
  pvStack_38 = (void *)((uint)pvStack_38 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&iStack_3c,
             "actionIndex",0xb);
  iStack_4._0_1_ = 1;
  puVar4 = IntToRecordMap_getOrInsert((void *)((int)this + 0x10),&version,key);
  cVar1 = (**(code **)(*(int *)*puVar4 + 0x14))(&iStack_3c,auStack_20);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  if (uStack_24 < 0x10) {
    uStack_24 = 0xf;
    uStack_28 = 0;
    pvStack_38 = (void *)((uint)pvStack_38 & 0xffffff00);
    if (cVar1 != '\0') {
      iVar5 = RuleSetNameMap_findOrInsert(&version);
      StdRbTreeNode32_eraseRightChain(*(void **)(*(int *)(iVar5 + 4) + 4));
      *(int *)(*(int *)(iVar5 + 4) + 4) = *(int *)(iVar5 + 4);
      *(undefined4 *)(iVar5 + 8) = 0;
      *(undefined4 *)*(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar5 + 4);
      *(int *)(*(int *)(iVar5 + 4) + 8) = *(int *)(iVar5 + 4);
      Deserializer_readInteger(auStack_20,local_58);
      Deserializer_readInteger(auStack_20,&iStack_50);
      bVar2 = PacketBuffer_hasRemaining(auStack_20);
      if (bVar2) {
        do {
          Deserializer_readInteger(auStack_20,&iStack_5c);
          Deserializer_readInteger(auStack_20,(int *)&uStack_68);
          Deserializer_readInteger(auStack_20,&iStack_64);
          Deserializer_readInteger(auStack_20,&iStack_60);
          iStack_34 = iStack_64;
          result = &iStack_3c;
          iStack_30 = iStack_60;
          map = auStack_48;
          pvStack_38 = (void *)uStack_68;
          iStack_3c = iStack_5c;
          this_01 = (void *)RuleSetNameMap_findOrInsert(&version);
          IntKeyMap_insertIfAbsent(this_01,map,result,key);
          bVar2 = PacketBuffer_hasRemaining(auStack_20);
        } while (bVar2);
      }
      pbVar3 = IntToBoolMap_getOrInsert(this_00,&version,key);
      *pbVar3 = true;
    }
    iStack_4 = 0xffffffff;
    RawBuffer_free(auStack_20);
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_38);
}

