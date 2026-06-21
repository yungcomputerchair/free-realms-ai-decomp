// addr: 0x01536490
// name: OdbFile_AllocatedBlockTree_begin
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void OdbFile_AllocatedBlockTree_begin(void * this, void * outIt) */

void __thiscall OdbFile_AllocatedBlockTree_begin(void *this,void *outIt)

{
                    /* Builds a begin iterator for OdbFile's allocated-block tree by returning the
                       leftmost/header child from the tree header at offset 0x2c. */
  *(undefined4 *)((int)outIt + 4) = **(undefined4 **)((int)this + 0x2c);
  *(int *)outIt = (int)this + 0x28;
  return;
}

