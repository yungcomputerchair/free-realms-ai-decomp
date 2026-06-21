// addr: 0x01401bf0
// name: Message_setVersion
// subsystem: common/common/messages
// source (binary assert): common/common/messages/Message.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Message_setVersion(void * this, int version_) */

void __thiscall Message_setVersion(void *this,int version_)

{
                    /* Stores the message version field after rejecting -1. Evidence is the
                       Message.cpp assert text 'v != -1' at line 0x8e and the write to this+8. */
  if (version_ == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\messages\\Message.cpp",0x8e);
  }
  *(int *)((int)this + 8) = version_;
  return;
}

