// addr: 0x013a1780
// name: CollectionData_setName
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionData_setName(void * param_1, void * param_2) */

void __thiscall CollectionData_setName(void *this,void *param_1,void *param_2)

{
                    /* Copies the supplied std::string into the CollectionData name/key string at
                       offset +4. Evidence: CollectionData creation paths pass collection
                       identifiers such as leagueCollection or generated collection names, while
                       sibling 013a17a0 sets the display-name string at offset +0x20. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),
             param_1,0,0xffffffff);
  return;
}

