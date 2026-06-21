// addr: 0x012b8ff0
// name: ArchetypeDB_getArchetype
// subsystem: common/common/property
// source (binary assert): common/common/property/ArchetypeDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall ArchetypeDB_getArchetype(void *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int *piVar6;
  bool *pbVar7;
  int iVar8;
  void *pvVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  int *extraout_EAX;
  undefined4 *extraout_EAX_00;
  undefined4 uVar13;
  int *extraout_EAX_01;
  undefined1 *puVar14;
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [20];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_28 [4];
  void *pvStack_24;
  undefined4 uStack_14;
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iVar8 = param_3;
                    /* Returns a cached Archetype by id, otherwise loads it from compressed
                       'storage' using the stored index; special high ids synthesize a placeholder
                       Archetype. Evidence: ArchetypeDB.cpp, 'storage' literal, calls
                       ArchetypeDB_loadIndex/openStorage,
                       ArchetypeDB_deserializeCompressedArchetype, Archetype_setDatabaseID, and
                       ArchetypeDB_insertArchetype. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166d8b0;
  local_c = ExceptionList;
  piVar6 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffa8);
  ExceptionList = &local_c;
  if (param_3 == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ArchetypeDB.cpp",0x15a);
  }
  ArchetypeDB_openStorageForVersion(param_1,iVar8);
  pbVar7 = IntToBoolMap_getOrInsert((void *)((int)param_1 + 0x30),&param_3,piVar6);
  if (*pbVar7 == false) {
    ArchetypeDB_loadIndex(param_1,iVar8);
  }
  iVar8 = ArchetypeDB_PropertyValueMap_findOrInsertFirst(&param_3);
  uVar1 = *(uint *)(iVar8 + 8);
  if (uVar1 < *(uint *)(iVar8 + 4)) {
    FUN_00d83c2d();
  }
  piVar10 = &param_2;
  puVar14 = auStack_44;
  pvVar9 = (void *)ArchetypeDB_PropertyValueMap_findOrInsertFirst(&param_3);
  piVar10 = ArchetypeDB_idVector_lowerBound(pvVar9,puVar14,piVar10,piVar6);
  if ((*piVar10 == 0) || (*piVar10 != iVar8)) {
    FUN_00d83c2d();
  }
  iVar8 = param_2;
  if (piVar10[1] == uVar1) {
    if (param_2 / 100000 + -0x3f2 < 0) {
      puVar11 = &param_2;
      puVar14 = auStack_44;
      pvVar9 = (void *)ArchetypeDB_PropertyValueMap_findOrInsertSecond(&param_3);
      ArchetypeDB_idVector_findLowerBound(pvVar9,puVar14,puVar11,piVar6);
      iVar8 = *extraout_EAX_01;
      uVar1 = extraout_EAX_01[1];
      iVar12 = ArchetypeDB_PropertyValueMap_findOrInsertSecond(&param_3);
      uVar2 = *(uint *)(iVar12 + 8);
      if (uVar2 < *(uint *)(iVar12 + 4)) {
        FUN_00d83c2d();
      }
      if ((iVar8 == 0) || (iVar8 != iVar12)) {
        FUN_00d83c2d();
      }
      if (uVar1 != uVar2) {
        if (iVar8 == 0) {
          FUN_00d83c2d();
        }
        if (*(uint *)(iVar8 + 8) <= uVar1) {
          FUN_00d83c2d();
        }
        uVar13 = *(undefined4 *)(uVar1 + 4);
        if (*(uint *)(iVar8 + 8) <= uVar1) {
          FUN_00d83c2d();
        }
        uVar3 = *(undefined4 *)(uVar1 + 0xc);
        if (*(uint *)(iVar8 + 8) <= uVar1) {
          FUN_00d83c2d();
        }
        uVar4 = *(undefined4 *)(uVar1 + 8);
        PacketBuffer_init(auStack_3c);
        iStack_4 = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_28,"storage");
        iStack_4._0_1_ = 1;
        puVar11 = IntToRecordMap_getOrInsert((void *)((int)param_1 + 0x18),&param_3,piVar6);
        cVar5 = (**(code **)(*(int *)*puVar11 + 0x24))(abStack_28,uVar13,uVar3,auStack_3c);
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        if (0xf < uStack_10) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_24);
        }
        uStack_10 = 0xf;
        uStack_14 = 0;
        pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
        if (cVar5 != '\0') {
          piVar6 = (int *)ArchetypeDB_deserializeCompressedArchetype
                                    (param_2,auStack_3c,uVar4,param_3);
          iStack_4 = 0xffffffff;
          RawBuffer_free(auStack_3c);
          ExceptionList = local_c;
          return piVar6;
        }
        iStack_4 = 0xffffffff;
        RawBuffer_free(auStack_3c);
      }
    }
    else {
      param_2 = PropertyId_normalizeRemappedRange(param_2);
      iVar12 = ArchetypeDB_PropertyValueMap_findOrInsertSecond(&param_3);
      uVar1 = *(uint *)(iVar12 + 8);
      if (uVar1 < *(uint *)(iVar12 + 4)) {
        FUN_00d83c2d();
      }
      puVar11 = &param_2;
      puVar14 = auStack_44;
      pvVar9 = (void *)ArchetypeDB_PropertyValueMap_findOrInsertSecond(&param_3);
      ArchetypeDB_idVector_findLowerBound(pvVar9,puVar14,puVar11,piVar6);
      if ((*extraout_EAX == 0) || (*extraout_EAX != iVar12)) {
        FUN_00d83c2d();
      }
      if (extraout_EAX[1] != uVar1) {
        ComponentFactory_initSingleton();
        uVar13 = (**(code **)*extraout_EAX_00)(0x222f4);
        piVar6 = (int *)FUN_00d8d382(uVar13,0,&PersistentComponent::RTTI_Type_Descriptor,
                                     &Archetype::RTTI_Type_Descriptor,0);
        iVar12 = param_3;
        if (piVar6 != (int *)0x0) {
          Archetype_setDatabaseID(piVar6,param_3);
          PropertyObject_setField8(piVar6,iVar8);
          (**(code **)(*piVar6 + 0x48))(param_2);
          (**(code **)(*piVar6 + 0x60))(1);
          ArchetypeDB_insertArchetype(piVar6,iVar12);
          ExceptionList = local_c;
          return piVar6;
        }
      }
    }
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = &param_2;
    ArchetypeDB_PropertyValueMap_findOrInsertFirst(&param_3);
    puVar11 = (undefined4 *)ArchetypeDB_idVector_getMappedValuePtr(piVar6);
    piVar6 = (int *)*puVar11;
  }
  ExceptionList = local_c;
  return piVar6;
}

