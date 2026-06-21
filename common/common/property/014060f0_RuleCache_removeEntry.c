// addr: 0x014060f0
// name: RuleCache_removeEntry
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RuleCache_removeEntry(void * this, int key) */

void __fastcall RuleCache_removeEntry(void *this,int key)

{
  void *this_00;
  void *unused1;
  void *unused2;
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *extraout_EAX;
  int *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Looks up a rule-cache map entry by integer key, erases it, and releases the
                       cached object via its destructor if non-null. Evidence is
                       RBTreeInt_lowerBound_ruleCache, erase helper FUN_0129b030, and vtable
                       destructor call. */
  this_00 = (void *)((int)this + 8);
  RBTreeInt_lowerBound_ruleCache(this_00,local_8,&stack0x00000004,unaff_EDI);
  unused1 = (void *)*extraout_EAX;
  unused2 = (void *)extraout_EAX[1];
  pvVar1 = *(void **)((int)this + 0xc);
  if ((unused1 == (void *)0x0) || (unused1 != this_00)) {
    FUN_00d83c2d();
  }
  if (unused2 != pvVar1) {
    if (unused1 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (unused2 == *(void **)((int)unused1 + 4)) {
      FUN_00d83c2d();
    }
    puVar2 = *(undefined4 **)((int)unused2 + 0x10);
    RuleSetMap_eraseNode(this_00,local_8,unused1,unused2,unaff_EDI);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}

