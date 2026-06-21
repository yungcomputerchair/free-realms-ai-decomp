// addr: 0x012a7b90
// name: MessageDB_getMessageText
// subsystem: common/common/messages
// source (binary assert): common/common/messages/MessageDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void * MessageDB_getMessageText(void * outText, int messageId_, int version_)
    */

void * __thiscall MessageDB_getMessageText(void *this,void *outText,int messageId_,int version_)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  bool *pbVar4;
  void *pvVar5;
  int *extraout_EAX;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *map;
  int *piVar9;
  int *outIt;
  undefined4 local_80;
  int iStack_7c;
  int iStack_78;
  int *piStack_74;
  int iStack_6c;
  undefined1 auStack_68 [20];
  void *local_54;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [4];
  void *pvStack_44;
  undefined4 uStack_34;
  uint uStack_30;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_2c [4];
  void *pvStack_28;
  undefined4 uStack_18;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iVar7 = version_;
                    /* Returns the text for a message id, loading it from msgStorage on a cache miss
                       and then caching it. If no record can be read, it returns an empty string. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166c0c1;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_80;
  piVar3 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff70);
  ExceptionList = &local_c;
  local_80 = 0;
  local_54 = outText;
  if (version_ == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\messages\\MessageDB.cpp",0x130);
  }
  MessageDB_openStorageForVersion(this,iVar7);
  pbVar4 = IntToBoolMap_getOrInsert((void *)((int)this + 0x24),&version_,piVar3);
  if (*pbVar4 == false) {
    MessageDB_loadIndexForVersion(this,iVar7);
  }
  iStack_7c = StdMapIntValue_subscriptOrInsert(&version_);
  iStack_6c = *(int *)(iStack_7c + 4);
  piVar9 = &messageId_;
  map = auStack_50;
  pvVar5 = (void *)StdMapIntValue_subscriptOrInsert(&version_);
  MessageDB_IntTextMap_lowerBound(pvVar5,map,piVar9,piVar3);
  piStack_74 = extraout_EAX;
  if ((*extraout_EAX == 0) || (*extraout_EAX != iStack_7c)) {
    FUN_00d83c2d();
  }
  if (piStack_74[1] == iStack_6c) {
    outIt = &messageId_;
    piVar9 = &iStack_7c;
    pvVar5 = (void *)RuleSetNameMap_findOrInsert(&version_);
    RBTreeInt_lowerBound_flag1d(pvVar5,piVar9,outIt,piVar3);
    iVar7 = RuleSetNameMap_findOrInsert(&version_);
    iStack_6c = *(int *)(iVar7 + 4);
    if ((iStack_7c == 0) || (iStack_7c != iVar7)) {
      FUN_00d83c2d();
    }
    if (iStack_78 == iStack_6c) {
      *(undefined4 *)((int)outText + 0x18) = 0xf;
      *(undefined4 *)((int)outText + 0x14) = 0;
      *(undefined1 *)((int)outText + 4) = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(outText,"",0);
    }
    else {
      if (iStack_7c == 0) {
        FUN_00d83c2d();
      }
      if (iStack_78 == *(int *)(iStack_7c + 4)) {
        FUN_00d83c2d();
      }
      piStack_74 = *(int **)(iStack_78 + 0x10);
      if (iStack_78 == *(int *)(iStack_7c + 4)) {
        FUN_00d83c2d();
      }
      if (iStack_78 == *(int *)(iStack_7c + 4)) {
        FUN_00d83c2d();
      }
      uVar1 = *(undefined4 *)(iStack_78 + 0x18);
      PacketBuffer_init(auStack_68);
      iStack_4 = 1;
      MessageDB_getMsgStorageBuffer(this,auStack_48);
      iStack_4._0_1_ = 2;
      puVar8 = IntToRecordMap_getOrInsert((void *)((int)this + 0xc),&version_,piVar3);
      cVar2 = (**(code **)(*(int *)*puVar8 + 0x24))(auStack_48,piStack_74,uVar1,auStack_68);
      if (cVar2 == '\0') {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(outText,"");
        local_80 = 1;
        iStack_4._0_1_ = 1;
        if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_44);
        }
      }
      else {
        uStack_14 = 0xf;
        uStack_18 = 0;
        pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
        iStack_4._0_1_ = 3;
        Deserializer_readString(auStack_68,abStack_2c);
        MessageDB_setCachedMessageText(this,messageId_,abStack_2c,version_);
        *(undefined4 *)((int)outText + 0x18) = 0xf;
        *(undefined4 *)((int)outText + 0x14) = 0;
        *(undefined1 *)((int)outText + 4) = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (outText,abStack_2c,0,0xffffffff);
        local_80 = 1;
        iStack_4 = CONCAT31(iStack_4._1_3_,2);
        if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_28);
        }
        uStack_14 = 0xf;
        uStack_18 = 0;
        pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
        iStack_4._0_1_ = 1;
        if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_44);
        }
      }
      uStack_30 = 0xf;
      local_80 = 1;
      uStack_34 = 0;
      pvStack_44 = (void *)((uint)pvStack_44 & 0xffffff00);
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      RawBuffer_free(auStack_68);
    }
  }
  else {
    piVar3 = &messageId_;
    StdMapIntValue_subscriptOrInsert(&version_);
    pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             StdMapIntString_subscriptOrInsert(piVar3);
    *(undefined4 *)((int)outText + 0x18) = 0xf;
    *(undefined4 *)((int)outText + 0x14) = 0;
    *(undefined1 *)((int)outText + 4) = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (outText,pbVar6,0,0xffffffff);
  }
  ExceptionList = local_c;
  return outText;
}

