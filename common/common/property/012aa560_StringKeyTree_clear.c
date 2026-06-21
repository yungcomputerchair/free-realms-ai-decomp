// addr: 0x012aa560
// name: StringKeyTree_clear
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StringKeyTree_clear(int tree) */

void __fastcall StringKeyTree_clear(int tree)

{
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clears a string-key RB-tree by destroying all nodes under the header and
                       resetting header links and count. It uses StringKeyTree_destroyNodeRecursive
                       for node cleanup. */
  puStack_8 = &LAB_0166c4a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  local_14[0] = tree;
  StringKeyTree_eraseRange
            ((void *)tree,local_14,(void *)tree,(void *)**(undefined4 **)(tree + 4),(void *)tree,
             *(undefined4 **)(tree + 4),(void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(tree + 4));
}

