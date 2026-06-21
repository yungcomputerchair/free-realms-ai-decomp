// addr: 0x012a6a70
// name: MessageDB_loadIndexForVersion
// subsystem: common/common/messages
// source (binary assert): common/common/messages/MessageDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void MessageDB_loadIndexForVersion(void * this, int version_) */

void __thiscall MessageDB_loadIndexForVersion(void *this,int version_)

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
  undefined1 auStack_78 [20];
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int aiStack_40 [2];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [4];
  void *pvStack_28;
  undefined4 uStack_18;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  iVar5 = version_;
                    /* Loads the serialized message index for a version into the id map if it has
                       not already been loaded. It reads repeated integer records from the
                       'msgIndex' buffer and inserts them into the map, then sets the loaded flag.
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166bf40;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)auStack_78;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff78);
  ExceptionList = &local_c;
  if (version_ == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\messages\\MessageDB.cpp",0xf0);
  }
  MessageDB_openStorageForVersion(this,iVar5);
  iVar5 = *(int *)((int)this + 0x28);
  this_00 = (void *)((int)this + 0x24);
  RBTreeInt_lowerBound_flag15(this_00,aiStack_40,&version_,key);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != this_00)) {
    FUN_00d83c2d();
  }
  if ((extraout_EAX[1] == iVar5) ||
     (pbVar3 = IntToBoolMap_getOrInsert(this_00,&version_,key), *pbVar3 != true)) {
    PacketBuffer_init(auStack_78);
    uStack_4 = 0;
    MessageDB_getMsgIndexBuffer(this,auStack_2c);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    puVar4 = IntToRecordMap_getOrInsert((void *)((int)this + 0xc),&version_,key);
    cVar1 = (**(code **)(*(int *)*puVar4 + 0x14))(auStack_2c,auStack_78);
    if (cVar1 != '\0') {
      iVar5 = RuleSetNameMap_findOrInsert(&version_);
      StdRbTreeNode32_eraseRightChain(*(void **)(*(int *)(iVar5 + 4) + 4));
      *(int *)(*(int *)(iVar5 + 4) + 4) = *(int *)(iVar5 + 4);
      *(undefined4 *)(iVar5 + 8) = 0;
      *(undefined4 *)*(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar5 + 4);
      *(int *)(*(int *)(iVar5 + 4) + 8) = *(int *)(iVar5 + 4);
      Deserializer_readInteger(auStack_78,&iStack_44);
      Deserializer_readInteger(auStack_78,aiStack_40);
      bVar2 = PacketBuffer_hasRemaining(auStack_78);
      if (bVar2) {
        do {
          Deserializer_readInteger(auStack_78,&iStack_60);
          Deserializer_readInteger(auStack_78,&iStack_5c);
          Deserializer_readInteger(auStack_78,&iStack_58);
          Deserializer_readInteger(auStack_78,&iStack_64);
          iStack_50 = iStack_5c;
          iStack_4c = iStack_58;
          result = &iStack_54;
          map = auStack_38;
          iStack_48 = iStack_64;
          iStack_54 = iStack_60;
          this_01 = (void *)RuleSetNameMap_findOrInsert(&version_);
          IntKeyMap_insertIfAbsent(this_01,map,result,key);
          bVar2 = PacketBuffer_hasRemaining(auStack_78);
        } while (bVar2);
      }
      pbVar3 = IntToBoolMap_getOrInsert(this_00,&version_,key);
      *pbVar3 = true;
    }
    uStack_4 = uStack_4 & 0xffffff00;
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28);
    }
    uStack_14 = 0xf;
    uStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    uStack_4 = 0xffffffff;
    RawBuffer_free(auStack_78);
  }
  ExceptionList = local_c;
  return;
}

