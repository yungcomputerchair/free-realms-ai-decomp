// addr: 0x007b6540
// name: BinXMLWeak_setBucketNodeValue24AndInvalidateChildren
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BinXMLWeak_setBucketNodeValue24AndInvalidateChildren(void * owner, uint
   key_, uint value_) */

void __thiscall
BinXMLWeak_setBucketNodeValue24AndInvalidateChildren(void *this,void *owner,uint key_,uint value_)

{
  int iVar1;
  int iVar2;
  
                    /* Finds a keyed node in a four-bucket chain, stores a value at offset 0x24,
                       then walks child lists clearing a byte flag at offset 0x44. The exact class
                       is unknown; evidence is structural from the hash traversal and child
                       invalidation loops. */
  iVar2 = *(int *)((int)this + ((uint)owner & 3) * 4 + 0x2a4);
  if (iVar2 != 0) {
    while (*(void **)(iVar2 + 0x2c) != owner) {
      iVar2 = *(int *)(iVar2 + 0x28);
      if (iVar2 == 0) {
        return;
      }
    }
    *(uint *)(iVar2 + 0x24) = key_;
    for (iVar2 = *(int *)(iVar2 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x6c)) {
      for (iVar1 = *(int *)(iVar2 + 0x34); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x54)) {
        *(undefined1 *)(iVar1 + 0x44) = 0;
      }
    }
  }
  return;
}

