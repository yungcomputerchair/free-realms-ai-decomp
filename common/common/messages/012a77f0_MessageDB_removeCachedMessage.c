// addr: 0x012a77f0
// name: MessageDB_removeCachedMessage
// subsystem: common/common/messages
// source (binary assert): common/common/messages/MessageDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MessageDB_removeCachedMessage(void * db, int messageId_) */

void __thiscall MessageDB_removeCachedMessage(void *this,void *db,int messageId_)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int *extraout_EAX;
  int *unaff_EBP;
  int unaff_EDI;
  undefined1 *map;
  void **ppvVar4;
  undefined1 auStack_8 [8];
  
                    /* Looks up a message id in the per-version cache and erases it if present. The
                       function validates the version/id path with the MessageDB.cpp 'v != -1'
                       assert. */
  iVar1 = messageId_;
  if (messageId_ == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\messages\\MessageDB.cpp",0x1ad);
  }
  MessageDB_openStorageForVersion(this,iVar1);
  iVar2 = StdMapIntValue_subscriptOrInsert(&messageId_);
  ppvVar4 = &db;
  iVar1 = *(int *)(iVar2 + 4);
  map = auStack_8;
  pvVar3 = (void *)StdMapIntValue_subscriptOrInsert(&messageId_);
  MessageDB_IntTextMap_lowerBound(pvVar3,map,ppvVar4,unaff_EBP);
  if ((*extraout_EAX == 0) || (*extraout_EAX != iVar2)) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] != iVar1) {
    ppvVar4 = &db;
    pvVar3 = (void *)StdMapIntValue_subscriptOrInsert(&messageId_);
    StdTree_eraseKeyAndCount(pvVar3,ppvVar4,unaff_EDI);
  }
  return;
}

