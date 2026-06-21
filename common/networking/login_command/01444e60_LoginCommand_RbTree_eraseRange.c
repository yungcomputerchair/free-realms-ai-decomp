// addr: 0x01444e60
// name: LoginCommand_RbTree_eraseRange
// subsystem: common/networking/login_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_RbTree_eraseRange(void * this, void * outRange, void *
   firstNode, void * firstOwner, void * lastNode, void * lastOwner) */

void __thiscall
LoginCommand_RbTree_eraseRange
          (void *this,void *outRange,void *firstNode,void *firstOwner,void *lastNode,void *lastOwner
          )

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 local_8 [8];
  
                    /* Erases a range from a red-black-tree-style container, using a fast path for
                       whole-tree clear and otherwise walking/erasing one node at a time. It is a
                       shared container helper for login command embedded maps/sets. */
  pvVar1 = (void *)**(int **)((int)this + 4);
  if ((firstNode == (void *)0x0) || (firstNode != this)) {
    FUN_00d83c2d();
  }
  if (firstOwner == pvVar1) {
    pvVar1 = *(void **)((int)this + 4);
    if ((lastNode == (void *)0x0) || (lastNode != this)) {
      FUN_00d83c2d();
    }
    if (lastOwner == pvVar1) {
      LoginCommand_RbTree_destroySubtree(*(void **)(*(int *)((int)this + 4) + 4));
      *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
      *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
      uVar2 = **(undefined4 **)((int)this + 4);
      *(void **)outRange = this;
      *(undefined4 *)((int)outRange + 4) = uVar2;
      return;
    }
  }
  while( true ) {
    if ((firstNode == (void *)0x0) || (firstNode != lastNode)) {
      FUN_00d83c2d();
    }
    if (firstOwner == lastOwner) break;
    FUN_014437a0();
    FUN_014443d0(local_8,firstNode,firstOwner);
  }
  *(void **)outRange = firstNode;
  *(void **)((int)outRange + 4) = firstOwner;
  return;
}

