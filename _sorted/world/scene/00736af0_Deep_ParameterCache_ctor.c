// addr: 0x00736af0
// name: Deep_ParameterCache_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Deep_ParameterCache_ctor(void * this) */

void * __fastcall Deep_ParameterCache_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Deep parameter cache by initializing its deque of
                       ParameterCache::Entry objects and clearing the additional field at offset
                       0x34. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015527b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00734b30(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined4 *)((int)this + 0x34) = 0;
  ExceptionList = local_c;
  return this;
}

