// addr: 0x013a1870
// name: CollectionData_setOwnerName
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionData_setOwnerName(void * this, void * ownerName) */

void __thiscall CollectionData_setOwnerName(void *this,void *ownerName)

{
                    /* Assigns a std::string into CollectionData at offset 0x68. In
                       SynchronizationService_selectOrCreateCollection it is fed the account/player
                       name after setting the display name for online/trade collections. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x68),
             ownerName,0,0xffffffff);
  return;
}

