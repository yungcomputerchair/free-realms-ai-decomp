// addr: 0x012b8530
// name: ArchetypeDB_loadIndex
// subsystem: common/common/property
// source (binary assert): common/common/property/ArchetypeDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchetypeDB_loadIndex(void * this, int version) */

void __thiscall ArchetypeDB_loadIndex(void *this,int version)

{
  void *this_00;
  uint expectedContainer;
  char cVar1;
  bool bVar2;
  int *key;
  undefined4 *extraout_EAX;
  bool *pbVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined1 *vector;
  int *outResult;
  uint uStack_6c;
  int iStack_68;
  int iStack_64;
  int aiStack_60 [2];
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
  
                    /* Ensures the archetype DB version is open, reads the serialized 'index' block
                       if needed, rebuilds the in-memory archetype index, and marks it loaded.
                       Evidence: ArchetypeDB.cpp literal 'index', assert 'v != -1', storage read
                       call, and loop inserting deserialized index rows. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166d7d0;
  local_c = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff80);
  ExceptionList = &local_c;
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ArchetypeDB.cpp",0x104);
  }
  local_4c = *(int *)((int)this + 0x34);
  this_00 = (void *)((int)this + 0x30);
  RBTreeInt_lowerBound_flag15(this_00,local_58,&version,key);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != this_00)) {
    FUN_00d83c2d();
  }
  if ((extraout_EAX[1] == local_4c) ||
     (pbVar3 = IntToBoolMap_getOrInsert(this_00,&version,key), *pbVar3 != true)) {
    PacketBuffer_init(auStack_20);
    iStack_4 = 0;
    ArchetypeDB_openStorageForVersion(this,version);
    uStack_24 = 0xf;
    uStack_28 = 0;
    pvStack_38 = (void *)((uint)pvStack_38 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&iStack_3c,"index"
               ,5);
    iStack_4._0_1_ = 1;
    puVar4 = IntToRecordMap_getOrInsert((void *)((int)this + 0x18),&version,key);
    cVar1 = (**(code **)(*(int *)*puVar4 + 0x14))(&iStack_3c,auStack_20);
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_38);
    }
    uStack_24 = 0xf;
    uStack_28 = 0;
    pvStack_38 = (void *)((uint)pvStack_38 & 0xffffff00);
    if (cVar1 != '\0') {
      pvVar5 = (void *)ArchetypeDB_PropertyValueMap_findOrInsertSecond(&version);
      expectedContainer = *(uint *)((int)pvVar5 + 8);
      if (expectedContainer < *(uint *)((int)pvVar5 + 4)) {
        FUN_00d83c2d();
      }
      uStack_6c = *(uint *)((int)pvVar5 + 4);
      if (*(uint *)((int)pvVar5 + 8) < uStack_6c) {
        FUN_00d83c2d();
      }
      ArchetypeDB_idVector_insertAt
                (pvVar5,aiStack_60,pvVar5,uStack_6c,(uint)pvVar5,expectedContainer,(uint)key);
      Deserializer_readInteger(auStack_20,local_58);
      Deserializer_readInteger(auStack_20,&iStack_50);
      bVar2 = PacketBuffer_hasRemaining(auStack_20);
      if (bVar2) {
        do {
          Deserializer_readInteger(auStack_20,aiStack_60);
          Deserializer_readInteger(auStack_20,(int *)&uStack_6c);
          Deserializer_readInteger(auStack_20,&iStack_68);
          Deserializer_readInteger(auStack_20,&iStack_64);
          pvStack_38 = (void *)uStack_6c;
          iStack_34 = iStack_68;
          outResult = &iStack_3c;
          vector = auStack_48;
          iStack_30 = iStack_64;
          iStack_3c = aiStack_60[0];
          pvVar5 = (void *)ArchetypeDB_PropertyValueMap_findOrInsertSecond(&version);
          ArchetypeDB_idVector_insertOrFind(pvVar5,vector,outResult,key);
          bVar2 = PacketBuffer_hasRemaining(auStack_20);
        } while (bVar2);
      }
      pbVar3 = IntToBoolMap_getOrInsert(this_00,&version,key);
      *pbVar3 = true;
    }
    iStack_4 = 0xffffffff;
    RawBuffer_free(auStack_20);
  }
  ExceptionList = local_c;
  return;
}

