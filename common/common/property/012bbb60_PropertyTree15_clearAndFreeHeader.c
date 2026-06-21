// addr: 0x012bbb60
// name: PropertyTree15_clearAndFreeHeader
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyTree15_clearAndFreeHeader(int tree) */

void __fastcall PropertyTree15_clearAndFreeHeader(int tree)

{
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys all nodes in a tree using FUN_012bb670 starting at the root, then
                       frees the header/sentinel node stored at tree+4. The code passes the header
                       and root links exactly like a std::tree destructor. */
  puStack_8 = &LAB_0166db18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  local_14[0] = tree;
  PropertyTree15_eraseRange
            ((void *)tree,local_14,(void *)tree,(void *)**(undefined4 **)(tree + 4),(void *)tree,
             *(undefined4 **)(tree + 4),(void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(tree + 4));
}

