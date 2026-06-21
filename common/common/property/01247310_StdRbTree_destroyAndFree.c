// addr: 0x01247310
// name: StdRbTree_destroyAndFree
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdRbTree_destroyAndFree(void * self) */

void __fastcall StdRbTree_destroyAndFree(void *self)

{
  void *local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys an rb-tree by recursively erasing nodes from the root/header and
                       then freeing the header/sentinel node at self+4. The many callers are
                       container destructors across DB/property code. */
  puStack_8 = &LAB_01655a78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  local_14[0] = self;
  StdRbTree_eraseRange
            (self,local_14,self,(void *)**(undefined4 **)((int)self + 4),self,
             *(undefined4 **)((int)self + 4),(void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)self + 4));
}

