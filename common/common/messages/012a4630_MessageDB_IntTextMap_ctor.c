// addr: 0x012a4630
// name: MessageDB_IntTextMap_ctor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MessageDB_IntTextMap_ctor(void * map) */

void * __fastcall MessageDB_IntTextMap_ctor(void *map)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes an empty integer-keyed red-black tree used for cached message
                       text entries. It allocates the header/sentinel node and sets size to zero. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166bb08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_012a2190(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)((int)map + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x2d) = 1;
  *(int *)(*(int *)((int)map + 4) + 4) = *(int *)((int)map + 4);
  *(undefined4 *)*(undefined4 *)((int)map + 4) = *(undefined4 *)((int)map + 4);
  *(int *)(*(int *)((int)map + 4) + 8) = *(int *)((int)map + 4);
  *(undefined4 *)((int)map + 8) = 0;
  ExceptionList = local_c;
  return map;
}

