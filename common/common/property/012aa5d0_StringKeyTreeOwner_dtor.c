// addr: 0x012aa5d0
// name: StringKeyTreeOwner_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StringKeyTreeOwner_dtor(void * this) */

void __fastcall StringKeyTreeOwner_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Destroys an owner of a string-keyed tree: it destroys the backing string
                       range if allocated, clears the allocation pointers, then clears the tree
                       structure. Exception-list setup indicates a C++ destructor body. */
  puStack_8 = &LAB_0166c4e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  StringKeyTree_clearAndReleaseDecks(this);
  local_4 = local_4 & 0xffffff00;
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0x14),*(void **)((int)this + 0x18));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  local_4 = 0xffffffff;
  StringKeyTree_clear((int)this);
  ExceptionList = puStack_8;
  return;
}

