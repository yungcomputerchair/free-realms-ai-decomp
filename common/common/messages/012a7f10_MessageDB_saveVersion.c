// addr: 0x012a7f10
// name: MessageDB_saveVersion
// subsystem: common/common/messages
// source (binary assert): common/common/messages/MessageDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void MessageDB_saveVersion(int version_) */

void __thiscall MessageDB_saveVersion(void *this,int version_)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined1 *treeObj;
  int iVar9;
  uint *outIterator;
  int iStack_80;
  void *pvStack_7c;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [16];
  undefined1 local_64 [20];
  uint uStack_50;
  uint auStack_4c [2];
  int iStack_44;
  int iStack_40;
  void *pvStack_38;
  undefined1 auStack_34 [4];
  void *pvStack_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_2c [4];
  void *pvStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar5 = version_;
                    /* Serializes cached message text and index records back to msgStorage and
                       msgIndex for a version. It writes timestamps, strings, sizes, offsets, and
                       then commits both DBM buffers. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166c120;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&iStack_80;
  piVar2 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff70);
  ExceptionList = &local_c;
  if (version_ == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\messages\\MessageDB.cpp",0x1d2);
  }
  PacketBuffer_init(local_64);
  uStack_4 = 0;
  PacketBuffer_init(auStack_78);
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  __time64((__time64_t *)auStack_4c);
  Serializer_appendInteger(auStack_78,iVar5);
  Serializer_appendInteger(auStack_78,auStack_4c[0]);
  Serializer_appendInteger(local_64,iVar5);
  Serializer_appendInteger(local_64,auStack_4c[0]);
  iStack_80 = RuleSetNameMap_findOrInsert(&version_);
  pvStack_7c = (void *)**(int **)(iStack_80 + 4);
  while( true ) {
    pvVar6 = pvStack_7c;
    iVar9 = iStack_80;
    iVar3 = RuleSetNameMap_findOrInsert(&version_);
    pvStack_38 = *(void **)(iVar3 + 4);
    if ((iVar9 == 0) || (iVar9 != iVar3)) {
      FUN_00d83c2d();
    }
    if (pvVar6 == pvStack_38) break;
    if (iVar9 == 0) {
      FUN_00d83c2d();
    }
    if (pvVar6 == *(void **)(iVar9 + 4)) {
      FUN_00d83c2d();
    }
    uVar1 = *(uint *)((int)pvVar6 + 0xc);
    uStack_50 = uVar1;
    MessageDB_getMessageText(this,abStack_2c,uVar1,iVar5);
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    uVar4 = PacketBuffer_getSize(local_64);
    Serializer_appendString(local_64,abStack_2c);
    iVar5 = PacketBuffer_getSize(local_64);
    Serializer_appendInteger(auStack_78,uVar1);
    Serializer_appendInteger(auStack_78,iVar5 - uVar4);
    Serializer_appendInteger(auStack_78,0);
    Serializer_appendInteger(auStack_78,uVar4);
    outIterator = &uStack_50;
    piVar8 = &iStack_44;
    pvVar6 = (void *)StdMapIntValue_subscriptOrInsert(&version_);
    MessageDB_IntTextMap_lowerBound(pvVar6,piVar8,outIterator,piVar2);
    iVar3 = StdMapIntValue_subscriptOrInsert(&version_);
    iVar9 = iStack_44;
    iVar5 = *(int *)(iVar3 + 4);
    if ((iStack_44 == 0) || (iStack_44 != iVar3)) {
      FUN_00d83c2d();
    }
    if (iStack_40 != iVar5) {
      treeObj = auStack_34;
      iVar5 = iStack_40;
      pvVar6 = (void *)StdMapIntValue_subscriptOrInsert(&version_);
      StdTree_eraseNode(pvVar6,treeObj,iVar9,iVar5,piVar2);
    }
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28);
    }
    uStack_14 = 0xf;
    uStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    StdRbTreeIterator32_advance(&iStack_80);
    iVar5 = version_;
  }
  iStack_80 = StdMapIntValue_subscriptOrInsert(&version_);
  pvStack_7c = (void *)**(int **)(iStack_80 + 4);
  while( true ) {
    pvVar6 = pvStack_7c;
    iVar9 = iStack_80;
    iVar3 = StdMapIntValue_subscriptOrInsert(&version_);
    iVar5 = *(int *)(iVar3 + 4);
    if ((iVar9 == 0) || (iVar9 != iVar3)) {
      FUN_00d83c2d();
    }
    if (pvVar6 == (void *)iVar5) break;
    if (iVar9 == 0) {
      FUN_00d83c2d();
    }
    if (pvVar6 == (void *)*(int *)(iVar9 + 4)) {
      FUN_00d83c2d();
    }
    uVar1 = *(uint *)((int)pvVar6 + 0xc);
    if (pvVar6 == (void *)*(int *)(iVar9 + 4)) {
      FUN_00d83c2d();
    }
    uStack_14 = 0xf;
    uStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_2c,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               ((int)pvVar6 + 0x10),0,0xffffffff);
    uStack_4._0_1_ = 3;
    uVar4 = PacketBuffer_getSize(local_64);
    Serializer_appendString(local_64,abStack_2c);
    iVar5 = PacketBuffer_getSize(local_64);
    Serializer_appendInteger(auStack_78,uVar1);
    Serializer_appendInteger(auStack_78,iVar5 - uVar4);
    Serializer_appendInteger(auStack_78,0);
    Serializer_appendInteger(auStack_78,uVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28);
    }
    uStack_14 = 0xf;
    uStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    MessageDB_RbTreeIterator_next(&iStack_80);
  }
  puVar7 = IntToRecordMap_getOrInsert((void *)((int)this + 0xc),&version_,piVar2);
  piVar2 = (int *)*puVar7;
  piVar8 = MessageDB_getMsgStorageBuffer(this,abStack_2c);
  uStack_4 = CONCAT31(uStack_4._1_3_,4);
  (**(code **)(*piVar2 + 0xc))(piVar8,local_64);
  local_c._0_1_ = 1;
  if (0xf < puStack_1c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
  puStack_1c = &DAT_0000000f;
  uStack_20 = 0;
  pvStack_30 = (void *)((uint)pvStack_30 & 0xffffff00);
  puVar7 = IntToRecordMap_getOrInsert((void *)((int)this + 0xc),&uStack_4,piVar8);
  piVar2 = (int *)*puVar7;
  pvVar6 = MessageDB_getMsgIndexBuffer(this,auStack_34);
  local_c = (void *)CONCAT31(local_c._1_3_,5);
  (**(code **)(*piVar2 + 0xc))(pvVar6,&iStack_80);
  uStack_14 = CONCAT31(uStack_14._1_3_,1);
  if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_38);
  }
  uStack_24 = 0xf;
  pvStack_28 = (void *)0x0;
  pvStack_38 = (void *)((uint)pvStack_38 & 0xffffff00);
  uStack_14 = (uint)uStack_14._1_3_ << 8;
  RawBuffer_free(&stack0xffffff78);
  uStack_14 = 0xffffffff;
  RawBuffer_free(auStack_74);
  ExceptionList = puStack_1c;
  return;
}

