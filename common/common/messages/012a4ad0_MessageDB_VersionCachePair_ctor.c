// addr: 0x012a4ad0
// name: MessageDB_VersionCachePair_ctor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MessageDB_VersionCachePair_ctor(void * this, int * version, void *
   cache) */

void * __thiscall MessageDB_VersionCachePair_ctor(void *this,int *version,void *cache)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a map pair for a version key and its cache object. It copies the
                       integer key and copy-constructs the cache payload. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166bc0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)this = *version;
  MessageDB_VersionCache_copyCtor((void *)((int)this + 4),cache);
  ExceptionList = local_c;
  return this;
}

