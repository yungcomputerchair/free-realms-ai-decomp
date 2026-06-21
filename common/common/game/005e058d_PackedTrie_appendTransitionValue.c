// addr: 0x005e058d
// name: PackedTrie_appendTransitionValue
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PackedTrie_appendTransitionValue(void * this, void * vector, ushort key,
   uint value) */

void __thiscall PackedTrie_appendTransitionValue(void *this,void *vector,ushort key,uint value)

{
  void *this_00;
  uint *puVar1;
  int index;
  
                    /* Looks up a bucket for a 7-bit packed key and appends/stores a value in the
                       selected vector entry. Owning class is unclear. */
  index = *(int *)(*(int *)(*(int *)((int)this + 0x1c) + (uint)(key >> 7) * 4) +
                  (*(uint *)((int)this + 0x10) & (uint)key) * 4);
  this_00 = (void *)StdVector16_at_005db533((void *)((int)this + 0x30),(uint)vector);
  puVar1 = StdVector_atElementPtr4(this_00,index);
  *puVar1 = value;
  return;
}

