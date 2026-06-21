// addr: 0x015364b0
// name: OdbFile_AllocatedBlockTree_end
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void OdbFile_AllocatedBlockTree_end(void * this, void * outIt) */

void __thiscall OdbFile_AllocatedBlockTree_end(void *this,void *outIt)

{
                    /* Builds the end iterator for OdbFile's allocated-block tree by returning the
                       tree header node at offset 0x2c. */
  *(undefined4 *)((int)outIt + 4) = *(undefined4 *)((int)this + 0x2c);
  *(int *)outIt = (int)this + 0x28;
  return;
}

