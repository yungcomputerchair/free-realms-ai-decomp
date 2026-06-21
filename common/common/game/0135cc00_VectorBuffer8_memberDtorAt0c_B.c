// addr: 0x0135cc00
// name: VectorBuffer8_memberDtorAt0c_B
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VectorBuffer8_memberDtorAt0c_B(void * object) */

void __fastcall VectorBuffer8_memberDtorAt0c_B(void *object)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor helper for a vector-like member at object+0xc, using 0135ad00 to
                       free and clear its buffer triplet. The element type or owner class is not
                       identified. */
  puStack_8 = &LAB_0167e506;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  EmbeddedVector_clearAt08_alt((void *)((int)object + 0x10));
  ExceptionList = local_c;
  return;
}

