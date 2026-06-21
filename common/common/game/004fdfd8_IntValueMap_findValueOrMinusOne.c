// addr: 0x004fdfd8
// name: IntValueMap_findValueOrMinusOne
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int IntValueMap_findValueOrMinusOne(void * this, int key) */

int __fastcall IntValueMap_findValueOrMinusOne(void *this,int key)

{
  bool bVar1;
  undefined4 *extraout_EAX;
  int iVar2;
  int *unaff_ESI;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Looks up an integer-keyed tree entry and returns the stored value at offset
                       +4, or -1 when the key is absent. */
  StdRbTreeInt_find_alt((void *)((int)this + 4),local_1c,&stack0x00000004,unaff_ESI);
  local_c = *extraout_EAX;
  local_8 = extraout_EAX[1];
  CheckedTreeIterator_ctor(*(undefined4 *)((int)this + 8),(void *)((int)this + 4));
  bVar1 = CheckedTreeIterator_equals(&local_c,local_14);
  if (bVar1) {
    iVar2 = -1;
  }
  else {
    iVar2 = CheckedTreeIterator_derefValue_nodeFlag15();
    iVar2 = *(int *)(iVar2 + 4);
  }
  return iVar2;
}

