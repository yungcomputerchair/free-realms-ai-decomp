// addr: 0x012a4860
// name: MessageDB_VersionCache_copyCtor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MessageDB_VersionCache_copyCtor(void * this, void * other) */

void * __thiscall MessageDB_VersionCache_copyCtor(void *this,void *other)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a version-cache/tree node payload by delegating to the
                       underlying node copy constructor. It is compiler-generated container support.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166bb38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  StdTree_Node2D_copyCtor(other);
  ExceptionList = local_c;
  return this;
}

