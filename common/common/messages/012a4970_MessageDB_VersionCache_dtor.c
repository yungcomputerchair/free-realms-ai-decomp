// addr: 0x012a4970
// name: MessageDB_VersionCache_dtor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MessageDB_VersionCache_dtor(void * cache) */

void __fastcall MessageDB_VersionCache_dtor(void *cache)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys the integer-to-text map embedded at offset +0xc of a per-version
                       cache object. It is a container destructor wrapper. */
  puStack_8 = &LAB_0166bba6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  MessageDB_IntTextMap_dtor((void *)((int)cache + 0x10));
  ExceptionList = puStack_8;
  return;
}

