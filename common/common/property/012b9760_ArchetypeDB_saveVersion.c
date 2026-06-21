// addr: 0x012b9760
// name: ArchetypeDB_saveVersion
// subsystem: common/common/property
// source (binary assert): common/common/property/ArchetypeDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchetypeDB_saveVersion(int version) */

void __thiscall ArchetypeDB_saveVersion(void *this,int version)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *key;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *vec;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *key_00;
  uint **out;
  void *local_8c;
  uint *puStack_88;
  int iStack_84;
  undefined4 *puStack_80;
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [12];
  uint *puStack_64;
  undefined1 local_60 [20];
  uint uStack_4c;
  void *pvStack_48;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_44 [4];
  undefined1 uStack_40;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar3 = version;
                    /* Writes dirty/new archetypes for a DB version into compressed storage and
                       emits updated 'storage' and 'index' records. Evidence: ArchetypeDB.cpp assert
                       'v != -1', calls ArchetypeDB_compressArchetypeToBuffer, iterates
                       index/storage containers, and stores literals 'storage' and 'index'. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166d9a0;
  local_c = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff60);
  ExceptionList = &local_c;
  local_8c = this;
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ArchetypeDB.cpp",0x279);
  }
  PacketBuffer_init(local_60);
  uStack_4 = 0;
  PacketBuffer_init(auStack_7c);
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  __time64((__time64_t *)&uStack_4c);
  Serializer_appendInteger(auStack_7c,iVar3);
  Serializer_appendInteger(auStack_7c,uStack_4c);
  Serializer_appendInteger(local_60,iVar3);
  Serializer_appendInteger(local_60,uStack_4c);
  iVar3 = ArchetypeDB_PropertyValueMap_findOrInsertSecond(&version);
  puStack_64 = *(uint **)(iVar3 + 4);
  if (*(uint **)(iVar3 + 8) < puStack_64) {
    FUN_00d83c2d();
  }
  while( true ) {
    puVar1 = puStack_64;
    iVar4 = ArchetypeDB_PropertyValueMap_findOrInsertSecond(&version);
    puStack_88 = *(uint **)(iVar4 + 8);
    if (puStack_88 < *(uint **)(iVar4 + 4)) {
      FUN_00d83c2d();
    }
    if (iVar3 != iVar4) {
      FUN_00d83c2d();
    }
    if (puVar1 == puStack_88) break;
    if (*(uint **)(iVar3 + 8) <= puVar1) {
      FUN_00d83c2d();
    }
    puVar1 = (uint *)*puVar1;
    puStack_88 = puVar1;
    pvVar5 = (void *)ArchetypeDB_getArchetype(puVar1,version);
    if (pvVar5 != (void *)0x0) {
      uVar6 = PacketBuffer_getSize(local_60);
      uVar7 = ArchetypeDB_compressArchetypeToBuffer(pvVar5,local_60);
      iVar4 = PacketBuffer_getSize(local_60);
      Serializer_appendInteger(auStack_7c,(uint)puVar1);
      Serializer_appendInteger(auStack_7c,iVar4 - uVar6);
      Serializer_appendInteger(auStack_7c,uVar7);
      Serializer_appendInteger(auStack_7c,uVar6);
      this = local_8c;
    }
    out = &puStack_88;
    vec = &iStack_84;
    pvVar5 = (void *)ArchetypeDB_PropertyValueMap_findOrInsertFirst(&version);
    ArchetypeDB_idVector_lowerBound(pvVar5,vec,(int *)out,key);
    iVar4 = ArchetypeDB_PropertyValueMap_findOrInsertFirst(&version);
    puVar9 = *(undefined4 **)(iVar4 + 8);
    if (puVar9 < *(undefined4 **)(iVar4 + 4)) {
      FUN_00d83c2d();
    }
    if ((iStack_84 == 0) || (iStack_84 != iVar4)) {
      FUN_00d83c2d();
    }
    puVar8 = puStack_80;
    if (puStack_80 != puVar9) {
      iVar4 = ArchetypeDB_PropertyValueMap_findOrInsertFirst(&version);
      puVar9 = *(undefined4 **)(iVar4 + 8);
      puVar2 = puVar8;
      while (puVar2 = puVar2 + 2, puVar2 != puVar9) {
        *puVar8 = *puVar2;
        puVar8[1] = puVar2[1];
        puVar8 = puVar8 + 2;
      }
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -8;
    }
    if (*(uint **)(iVar3 + 8) <= puStack_64) {
      FUN_00d83c2d();
    }
    puStack_64 = puStack_64 + 4;
  }
  iVar3 = ArchetypeDB_PropertyValueMap_findOrInsertFirst(&version);
  puVar9 = *(undefined4 **)(iVar3 + 4);
  if (*(uint *)(iVar3 + 8) < puVar9) {
    FUN_00d83c2d();
  }
  while( true ) {
    puStack_80 = puVar9;
    iVar4 = ArchetypeDB_PropertyValueMap_findOrInsertFirst(&version);
    uVar6 = *(uint *)(iVar4 + 8);
    if (uVar6 < *(uint *)(iVar4 + 4)) {
      FUN_00d83c2d();
    }
    if (iVar3 != iVar4) {
      FUN_00d83c2d();
    }
    if (puVar9 == (undefined4 *)uVar6) break;
    if (*(uint *)(iVar3 + 8) <= puVar9) {
      FUN_00d83c2d();
    }
    pvVar5 = *(void **)((int)puVar9 + 4);
    if (pvVar5 != (void *)0x0) {
      uVar6 = PacketBuffer_getSize(local_60);
      local_8c = (void *)ArchetypeDB_compressArchetypeToBuffer(pvVar5,local_60);
      iVar4 = PacketBuffer_getSize(local_60);
      uVar7 = FUN_013795c0();
      Serializer_appendInteger(auStack_7c,uVar7);
      Serializer_appendInteger(auStack_7c,iVar4 - uVar6);
      Serializer_appendInteger(auStack_7c,(uint)local_8c);
      Serializer_appendInteger(auStack_7c,uVar6);
      puVar9 = puStack_80;
    }
    if (*(uint *)(iVar3 + 8) <= puVar9) {
      FUN_00d83c2d();
    }
    puVar9 = (undefined4 *)((int)puVar9 + 8);
  }
  uStack_2c = 0xf;
  uStack_30 = 0;
  uStack_40 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_44,"storage",7);
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  puVar9 = IntToRecordMap_getOrInsert((void *)((int)this + 0x18),&version,key);
  key_00 = abStack_44;
  (**(code **)(*(int *)*puVar9 + 0xc))(key_00,local_60);
  local_c._0_1_ = 1;
  if (0xf < puStack_34) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_48);
  }
  puStack_34 = &DAT_0000000f;
  uStack_38 = 0;
  pvStack_48 = (void *)((uint)pvStack_48 & 0xffffff00);
  uStack_18 = 0xf;
  pvStack_1c = (void *)0x0;
  uStack_2c = uStack_2c & 0xffffff00;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_30,"index",5
            );
  local_c = (void *)CONCAT31(local_c._1_3_,3);
  puVar9 = IntToRecordMap_getOrInsert((void *)((int)this + 0x18),&uStack_4,(int *)key_00);
  (**(code **)(*(int *)*puVar9 + 0xc))(&uStack_30,&iStack_84);
  iStack_14 = CONCAT31(iStack_14._1_3_,1);
  if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_34);
  }
  uStack_20 = 0xf;
  uStack_24 = 0;
  puStack_34 = (undefined1 *)((uint)puStack_34 & 0xffffff00);
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  RawBuffer_free(&local_8c);
  iStack_14 = 0xffffffff;
  RawBuffer_free(auStack_70);
  ExceptionList = pvStack_1c;
  return;
}

