// addr: 0x012b41f0
// name: ByteVector_memberDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ByteVector_memberDtor(int owner) */

void __fastcall ByteVector_memberDtor(int owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a vector member located at owner+0xc by freeing its backing buffer
                       and resetting pointers. It is the real destructor used by a deleting
                       destructor thunk. */
  puStack_8 = &LAB_0166cf06;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  PropertyVector_freeStorage((void *)(owner + 0x10));
  ExceptionList = local_c;
  return;
}

