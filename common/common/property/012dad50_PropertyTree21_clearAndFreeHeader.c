// addr: 0x012dad50
// name: PropertyTree21_clearAndFreeHeader
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyTree21_clearAndFreeHeader(int tree) */

void __fastcall PropertyTree21_clearAndFreeHeader(int tree)

{
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys all nodes of the +0x21-sentinel tree via FUN_012d9090 and then frees
                       the header node at tree+4. This is the destructor for that tree template
                       instantiation. */
  puStack_8 = &LAB_01670f68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  local_14[0] = tree;
  PropertyTree21_eraseRange
            ((void *)tree,local_14,(void *)tree,(void *)**(undefined4 **)(tree + 4),(void *)tree,
             *(undefined4 **)(tree + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(tree + 4));
}

