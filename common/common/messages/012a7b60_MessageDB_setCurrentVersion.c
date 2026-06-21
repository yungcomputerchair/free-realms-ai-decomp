// addr: 0x012a7b60
// name: MessageDB_setCurrentVersion
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MessageDB_setCurrentVersion(void * this, int version_) */

void __thiscall MessageDB_setCurrentVersion(void *this,int version_)

{
                    /* Sets the MessageDB current/default version field, using 0x9f3 when the caller
                       passes -1, then loads the index for that version. It is invoked during
                       command subsystem default type-id initialization. */
  if (version_ == -1) {
    *(undefined4 *)((int)this + 0x30) = 0x9f3;
    MessageDB_loadIndexForVersion(this,0x9f3);
    return;
  }
  *(int *)((int)this + 0x30) = version_;
  MessageDB_loadIndexForVersion(this,version_);
  return;
}

