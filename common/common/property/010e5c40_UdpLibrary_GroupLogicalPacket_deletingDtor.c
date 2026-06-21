// addr: 0x010e5c40
// name: UdpLibrary_GroupLogicalPacket_deletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UdpLibrary_GroupLogicalPacket_deletingDtor(void * self, char flags) */

void * __thiscall UdpLibrary_GroupLogicalPacket_deletingDtor(void *this,void *self,char flags)

{
                    /* Deleting destructor wrapper for UdpLibrary::GroupLogicalPacket: runs the real
                       destructor and frees self when the low flag bit is set. Returns self
                       otherwise. */
  UdpLibrary_GroupLogicalPacket_dtor(this);
  if (((uint)self & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

