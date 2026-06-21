// addr: 0x005f8311
// name: LexerDfaBuilder_initializeRoot
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint LexerDfaBuilder_initializeRoot(void * this, void * unused, int state) */

uint __thiscall LexerDfaBuilder_initializeRoot(void *this,void *unused,int state)

{
  uint in_EAX;
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool unaff_BL;
  uint uVar5;
  
                    /* Initializes a DFA-like root object once, stores a state value, creates two
                       nodes, and adds vector entries as transitions. */
  uVar5 = 0;
  if (*(int *)this == 0) {
    *(int *)((int)this + 0x14) = state;
    pvVar1 = RbTreeNode_allocWithParent_005f52f1(this,(void *)0x0,unaff_BL);
    *(void **)this = pvVar1;
    pvVar1 = RbTreeNode_allocWithParent_005f52f1(this,(void *)0x1,unaff_BL);
    iVar2 = StdVector_size(unused);
    uVar4 = 0;
    if (iVar2 != 0) {
      do {
        puVar3 = StdVector_atElementPtr4(unused,uVar5);
        RbTreeNode_link_005f5346(*(void **)this,(void *)*puVar3,pvVar1);
        uVar5 = uVar5 + 1;
        uVar4 = StdVector_size(unused);
      } while (uVar5 < uVar4);
    }
    uVar5 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  else {
    uVar5 = in_EAX & 0xffffff00;
  }
  return uVar5;
}

