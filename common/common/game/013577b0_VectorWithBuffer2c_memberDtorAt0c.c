// addr: 0x013577b0
// name: VectorWithBuffer2c_memberDtorAt0c
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VectorWithBuffer2c_memberDtorAt0c(void * object) */

void __fastcall VectorWithBuffer2c_memberDtorAt0c(void *object)

{
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor helper for a member subobject at this+0xc; it calls the
                       vector-like destructor that frees buffer storage at subobject+0x2c. This is
                       compiler cleanup code rather than named game logic. */
  puStack_8 = &LAB_0167da06;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = (int)object + 0xc;
  local_4 = 0xffffffff;
  FUN_01331b60(DAT_01b839d8 ^ (uint)&local_10);
  ExceptionList = local_c;
  return;
}

