// addr: 0x012a7890
// name: MessageDB_allocateMessageId
// subsystem: common/common/messages
// source (binary assert): common/common/messages/MessageDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int MessageDB_allocateMessageId(void * initialText, int version_) */

int __thiscall MessageDB_allocateMessageId(void *this,void *initialText,int version_)

{
  int iVar1;
  int iVar2;
  void *this_00;
  int *extraout_EAX;
  int *unaff_EDI;
  undefined1 *map;
  int *outIterator;
  int iStack_18;
  void *local_14;
  int iStack_c;
  undefined1 auStack_8 [8];
  
                    /* Allocates the next unused message id for a version by incrementing from the
                       current map state, inserts the supplied text, and returns the id. It loops
                       until the id is absent from the cache. */
  iVar1 = version_;
  local_14 = this;
  if (version_ == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\messages\\MessageDB.cpp",0x1b7);
  }
  MessageDB_openStorageForVersion(this,iVar1);
  iVar1 = RuleSetNameMap_findOrInsert(&version_);
  iVar1 = *(int *)(iVar1 + 8);
  do {
    iVar1 = iVar1 + 1;
    iStack_18 = iVar1;
    iVar2 = StdMapIntValue_subscriptOrInsert(&version_);
    iStack_c = *(int *)(iVar2 + 4);
    outIterator = &iStack_18;
    map = auStack_8;
    this_00 = (void *)StdMapIntValue_subscriptOrInsert(&version_);
    MessageDB_IntTextMap_lowerBound(this_00,map,outIterator,unaff_EDI);
    if ((*extraout_EAX == 0) || (*extraout_EAX != iVar2)) {
      FUN_00d83c2d();
    }
  } while (extraout_EAX[1] != iStack_c);
  MessageDB_setCachedMessageText(local_14,iVar1,initialText,version_);
  return iVar1;
}

