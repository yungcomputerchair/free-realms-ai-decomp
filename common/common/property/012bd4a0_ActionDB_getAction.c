// addr: 0x012bd4a0
// name: ActionDB_getAction
// subsystem: common/common/property
// source (binary assert): common/common/property/ActionDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall ActionDB_getAction(void *param_1,int param_2,int param_3)

{
  uint size_;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int *piVar5;
  bool *pbVar6;
  int iVar7;
  void *pvVar8;
  int *extraout_EAX;
  int *extraout_EAX_00;
  int iVar9;
  undefined4 *puVar10;
  void *outBuffer;
  int iVar11;
  char *pcVar12;
  undefined1 *puVar13;
  int *key;
  uint auStack_60 [2];
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
  
  iVar11 = param_3;
                    /* Returns a cached action by id or loads its compressed payload from
                       'actionStorage', uncompresses/deserializes it, and returns null when absent.
                       Evidence: ActionDB.cpp, 'actionStorage', zlib error text, index and cache
                       lookup, and many callers requesting actions by id. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166df08;
  local_c = ExceptionList;
  piVar5 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff84);
  ExceptionList = &local_c;
  if (param_3 == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ActionDB.cpp",0x137);
  }
  ActionDB_openStorageForVersion(param_1,iVar11);
  pbVar6 = IntToBoolMap_getOrInsert((void *)((int)param_1 + 4),&param_3,piVar5);
  if (*pbVar6 == false) {
    ActionDB_loadIndex(param_1,iVar11);
  }
  iVar7 = ActionDB_ActionTree_findOrInsert(&param_3);
  iVar11 = *(int *)(iVar7 + 4);
  key = &param_2;
  puVar13 = auStack_58;
  pvVar8 = (void *)ActionDB_ActionTree_findOrInsert(&param_3);
  ActionDB_ActionTree_lowerBound(pvVar8,puVar13,key);
  if ((*extraout_EAX == 0) || (*extraout_EAX != iVar7)) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] == iVar11) {
    puVar10 = &param_2;
    puVar13 = auStack_58;
    pvVar8 = (void *)RuleSetNameMap_findOrInsert(&param_3);
    RBTreeInt_lowerBound_flag1d(pvVar8,puVar13,puVar10,piVar5);
    iVar11 = *extraout_EAX_00;
    iVar7 = extraout_EAX_00[1];
    iVar9 = RuleSetNameMap_findOrInsert(&param_3);
    iVar1 = *(int *)(iVar9 + 4);
    if ((iVar11 == 0) || (iVar11 != iVar9)) {
      FUN_00d83c2d();
    }
    if (iVar7 != iVar1) {
      if (iVar11 == 0) {
        FUN_00d83c2d();
      }
      if (iVar7 == *(int *)(iVar11 + 4)) {
        FUN_00d83c2d();
      }
      uVar2 = *(undefined4 *)(iVar7 + 0x10);
      if (iVar7 == *(int *)(iVar11 + 4)) {
        FUN_00d83c2d();
      }
      pvVar8 = *(void **)(iVar7 + 0x14);
      if (iVar7 == *(int *)(iVar11 + 4)) {
        FUN_00d83c2d();
      }
      uVar3 = *(undefined4 *)(iVar7 + 0x18);
      PacketBuffer_init(auStack_50);
      iStack_4 = 0;
      uStack_10 = 0xf;
      uStack_14 = 0;
      pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_28,"actionStorage",0xd);
      iStack_4._0_1_ = 1;
      puVar10 = IntToRecordMap_getOrInsert((void *)((int)param_1 + 0x10),&param_3,piVar5);
      cVar4 = (**(code **)(*(int *)*puVar10 + 0x24))(abStack_28,uVar2,uVar3,auStack_50);
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      if (0xf < uStack_10) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_24);
      }
      uStack_10 = 0xf;
      uStack_14 = 0;
      pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
      if (cVar4 != '\0') {
        size_ = (int)pvVar8 + 1;
        outBuffer = Mem_Alloc(size_);
        auStack_60[0] = size_;
        puVar10 = PacketBuffer_identity(auStack_50);
        iVar11 = PacketBuffer_getSize(auStack_50);
        iVar11 = Zlib_inflateBuffer(outBuffer,auStack_60,(void *)*puVar10,iVar11);
        if (iVar11 != 0) {
          pcVar12 = "Couldn\'t uncompress an archetype: %d zres: %d";
          iVar7 = param_2;
          WAErrorLog_write("Couldn\'t uncompress an archetype: %d zres: %d");
          FUN_012f5a60("zres == 0","..\\common\\common\\property\\ActionDB.cpp",0x166,pcVar12,iVar7,
                       iVar11);
        }
        PacketBuffer_init(auStack_3c);
        iStack_4 = CONCAT31(iStack_4._1_3_,2);
        RawBuffer_assign(auStack_3c,outBuffer,pvVar8,(uint)piVar5);
                    /* WARNING: Subroutine does not return */
        _free(outBuffer);
      }
      iStack_4 = 0xffffffff;
      RawBuffer_free(auStack_50);
    }
    iVar11 = 0;
  }
  else {
    puVar10 = &param_2;
    pvVar8 = (void *)ActionDB_ActionTree_findOrInsert(&param_3);
    piVar5 = ActionDB_findOrCreateActionSlot(pvVar8,puVar10,piVar5);
    iVar11 = *piVar5;
  }
  ExceptionList = local_c;
  return iVar11;
}

