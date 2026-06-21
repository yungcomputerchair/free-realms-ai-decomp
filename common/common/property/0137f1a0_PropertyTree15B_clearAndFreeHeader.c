// addr: 0x0137f1a0
// name: PropertyTree15B_clearAndFreeHeader
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyTree15B_clearAndFreeHeader(int tree) */

void __fastcall PropertyTree15B_clearAndFreeHeader(int tree)

{
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clears a tree by recursively erasing nodes through FUN_0137d9b0 and freeing
                       the header node stored at tree+4. It is another +0x15 sentinel tree
                       instantiation, paired with constructor 0137f280. */
  puStack_8 = &LAB_01682238;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  local_14[0] = tree;
  PropertyTree15B_eraseRange
            ((void *)tree,local_14,(void *)tree,(void *)**(undefined4 **)(tree + 4),(void *)tree,
             *(undefined4 **)(tree + 4),(void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(tree + 4));
}

