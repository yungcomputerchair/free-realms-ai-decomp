// addr: 0x01247230
// name: RbTreeLargeNode_destroyStorageAlt
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTreeLargeNode_destroyStorageAlt(void * this) */

void __fastcall RbTreeLargeNode_destroyStorageAlt(void *this)

{
  void *unaff_ESI;
  undefined1 local_8 [8];
  
                    /* Alternate destructor helper for the same large-node RB-tree storage layout.
                        */
  StdRbTree_eraseRange
            (this,local_8,this,(void *)**(undefined4 **)((int)this + 4),this,
             *(undefined4 **)((int)this + 4),unaff_ESI);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 4));
}

