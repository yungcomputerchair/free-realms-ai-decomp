// addr: 0x007b64e0
// name: BinXMLWeak_setBucketNodeValue20
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BinXMLWeak_setBucketNodeValue20(void * owner, uint key_, uint value_) */

void __thiscall BinXMLWeak_setBucketNodeValue20(void *this,void *owner,uint key_,uint value_)

{
  int iVar1;
  
                    /* Looks up a node in one of four hash buckets by key and writes the supplied
                       value to node offset 0x20. It is weakly associated with the binxml reader
                       through a single caller and has no direct strings, so the owning type is
                       unclear. */
  iVar1 = *(int *)((int)this + ((uint)owner & 3) * 4 + 0x2a4);
  if (iVar1 != 0) {
    while (*(void **)(iVar1 + 0x2c) != owner) {
      iVar1 = *(int *)(iVar1 + 0x28);
      if (iVar1 == 0) {
        return;
      }
    }
    *(uint *)(iVar1 + 0x20) = key_;
  }
  return;
}

