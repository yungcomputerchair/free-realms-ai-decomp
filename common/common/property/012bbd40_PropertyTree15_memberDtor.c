// addr: 0x012bbd40
// name: PropertyTree15_memberDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyTree15_memberDtor(int owner) */

void __fastcall PropertyTree15_memberDtor(int owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys the tree member located at owner+0xc by calling the tree
                       clear/free-header routine 012bbb60 under an SEH cleanup frame. This is likely
                       a member destructor emitted for an owning property object. */
  puStack_8 = &LAB_0166dc16;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  PropertyTree15_clearAndFreeHeader(owner + 0x10);
  ExceptionList = puStack_8;
  return;
}

