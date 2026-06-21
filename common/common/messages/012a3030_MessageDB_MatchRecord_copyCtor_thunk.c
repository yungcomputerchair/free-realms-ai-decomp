// addr: 0x012a3030
// name: MessageDB_MatchRecord_copyCtor_thunk
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MessageDB_MatchRecord_copyCtor_thunk(void * this, void * other) */

void MessageDB_MatchRecord_copyCtor_thunk(void *this,void *other)

{
                    /* Thin wrapper around the copy constructor for a 0x20-byte match-record
                       element. It is used by vector construction helpers. */
  FUN_012a2d80(this,other);
  return;
}

