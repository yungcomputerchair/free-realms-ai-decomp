// addr: 0x01446e50
// name: FUN_01446e50
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int FUN_01446e50(int thisTree_, int otherTree_) */

int __thiscall FUN_01446e50(void *this,int thisTree_,int otherTree_)

{
  void *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Appears to be a second identical compiler/STL red-black-tree copy-assignment
                       helper, copying nodes then invoking StdTree_Node21_assignFromTree when the
                       operands differ. */
  if (this != (void *)thisTree_) {
    StdRbTree_eraseRange
              (this,local_8,this,(void *)**(undefined4 **)((int)this + 4),this,
               *(undefined4 **)((int)this + 4),unaff_EDI);
    StdTree_Node21_assignFromTree(this,(void *)thisTree_,unaff_EDI);
  }
  return (int)this;
}

