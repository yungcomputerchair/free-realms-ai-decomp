// addr: 0x012a4570
// name: MessageDB_IntTextMap_dtor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MessageDB_IntTextMap_dtor(void * map) */

void __fastcall MessageDB_IntTextMap_dtor(void *map)

{
  void *local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys an integer-keyed map of message text records by erasing all nodes
                       and freeing the tree header. This is used by MessageDB and similar
                       message-related containers. */
  puStack_8 = &LAB_0166baa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  local_14[0] = map;
  StdTree_eraseRange(map,local_14,map,**(int **)((int)map + 4),(int)map,(int)*(int **)((int)map + 4)
                     ,DAT_01b839d8 ^ (uint)&stack0xffffffe8);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)map + 4));
}

