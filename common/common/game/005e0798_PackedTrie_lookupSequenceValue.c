// addr: 0x005e0798
// name: PackedTrie_lookupSequenceValue
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint PackedTrie_lookupSequenceValue(void * this, void * byteSequence) */

uint __thiscall PackedTrie_lookupSequenceValue(void *this,void *byteSequence)

{
  char *pcVar1;
  ushort uVar2;
  void *index;
  uint *puVar3;
  uint uVar4;
  void *local_8;
  
                    /* Walks a packed byte/key sequence through trie-like transition tables and
                       returns the dword stored at the final state, or 0 on failure. */
  puVar3 = *(uint **)byteSequence;
  index = (void *)0x0;
  uVar4 = 0;
  local_8 = (void *)0x0;
  if (*puVar3 != 0) {
    do {
      pcVar1 = (char *)((int)puVar3 + uVar4 + 4);
      uVar2 = (ushort)*pcVar1;
      if ((*(int *)(*(int *)(*(int *)((int)this + 0x1c) + (uint)(uVar2 >> 7) * 4) +
                   (*(uint *)((int)this + 0x10) & (uint)uVar2) * 4) == -1) ||
         (index = (void *)ChunkedIndexMap_getValueOrInvalid(this,local_8,(short)*pcVar1),
         index == (void *)0xffffffff)) {
        return 0;
      }
      puVar3 = *(uint **)byteSequence;
      uVar4 = uVar4 + 1;
      local_8 = index;
    } while (uVar4 < *puVar3);
  }
  puVar3 = (uint *)StdVectorDword_at_005db353((void *)((int)this + 0x40),(uint)index);
  return *puVar3;
}

