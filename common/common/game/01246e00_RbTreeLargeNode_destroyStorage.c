// addr: 0x01246e00
// name: RbTreeLargeNode_destroyStorage
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTreeLargeNode_destroyStorage(void * this) */

void __fastcall RbTreeLargeNode_destroyStorage(void *this)

{
  void *unaff_ESI;
  undefined1 local_8 [8];
  
                    /* Destroys all nodes of a large-node RB-tree and frees the header/storage
                       block. */
  StdRbTree_eraseRange
            (this,local_8,this,(void *)**(undefined4 **)((int)this + 4),this,
             *(undefined4 **)((int)this + 4),unaff_ESI);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 4));
}

